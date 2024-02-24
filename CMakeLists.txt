cmake_minimum_required(VERSION 3.22)

project(Curves_Hierarchy)
add_executable(${PROJECT_NAME} src/main.cpp)


add_subdirectory(src/lib)

target_link_libraries(${PROJECT_NAME} PUBLIC Curves)

target_include_directories(${PROJECT_NAME} PUBLIC 
                                            "${PROJECT_BINARY_DIR}"
                                            "${PROJECT_SOURCE_DIR}/src/lib")
