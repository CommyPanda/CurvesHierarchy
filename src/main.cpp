#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <vector>
#include "headers/circles.h"
#include "headers/curves.h"
#include "headers/ellipses.h"
#include "headers/helixes.h"

using namespace std;

bool comp(Circles* one, Circles* two)
{
    return (one->getRadius() < two->getRadius());
}

int main()
{


    srand(time(0));

    list<Curves*> curvesList;

    for(int i = 0; i < 5; i++)
    {
        switch ((rand() % 3 + 1)) 
        {
            case 1:
                curvesList.push_back(new Circles((rand() % 30 + 1)));
            break;
            case 2:
                curvesList.push_back(new Ellipses((rand() % 10 + 1), (rand() % 20 + 10)));
            break;
            case 3:
                curvesList.push_back(new Helixes((rand() % 30 + 1), rand() % 10 + 1));
            break;
        }

    }
    
    list<Circles*> circleList;
    int qCircles = 0;
    int qEllipses = 0;
    int qHelixes = 0;
    
    cout.setf(ios::fixed);
    cout.precision(1);

    for(auto n : curvesList)
    {
        if (n->getCoordZ(M_PI) != 0) 
        {
            qHelixes++;

            cout << qHelixes << " Helixe" << endl
            << "x:" << n->getCoordX(M_PI/4) 
            << " y:" << n->getCoordY(M_PI/4) 
            << " z:" << n->getCoordZ(M_PI/4) 
            << " x':" << n->getDerivX(M_PI/4)
            << " y':" << n->getDerivY(M_PI/4)
            << " z':" << n->getDerivZ(M_PI/4) << endl;
        }
        else if (n->getCoordX(0) != n->getCoordY(M_PI/2)) 
        {
            qEllipses++;

            cout << qEllipses << " Ellipse" << endl 
            << "x:" << n->getCoordX(M_PI/4) 
            << " y:" << n->getCoordY(M_PI/4) 
            << " x':" << n->getDerivX(M_PI/4)
            << " y':" << n->getDerivY(M_PI/4) << endl;
        }
        else 
        {
            qCircles++;
            cout << qCircles << " Circle" << endl 
            << "x:" << n->getCoordX(M_PI/4) 
            << " y:" << n->getCoordY(M_PI/4) 
            << " x':" << n->getDerivX(M_PI/4)
            << " y':" << n->getDerivY(M_PI/4) << endl;

            circleList.push_back((Circles*) n);

        }
    }

    cout << endl << "Total of" << endl
    << "Circles:" << qCircles << endl
    << "Ellipses: " << qEllipses << endl
    << "Helixes: " << qHelixes << endl;

    circleList.sort(comp);
    float totalRadiiSum = 0;
    qCircles = 0;
    cout << endl << "Circles radiuses: " << endl;
    for (auto n : circleList) 
    {
        qCircles++;
        cout << qCircles <<" Radius: " << n->getRadius() << endl;
        totalRadiiSum += n->getRadius();
    }

    cout << "Total sum of radii: " << totalRadiiSum << endl;

    return 0;
}