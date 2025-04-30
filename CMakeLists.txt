cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED on)

project(design)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(design src/main.cpp src/car.cpp src/carbuilder.cpp src/clientcode.cpp src/director.cpp src/manual.cpp src/manualbuilder.cpp)

add_executable(test.out src/car.cpp src/carbuilder.cpp src/clientcode.cpp src/director.cpp src/manual.cpp src/manualbuilder.cpp test/test.cpp)

target_include_directories(test.out PRIVATE ${PROJECT_SOURCE_DIR}/include)

enable_testing()

add_test(NAME test.out COMMAND test.out)
