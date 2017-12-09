cmake_minimum_required(VERSION 3.6)
project(Ex1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES main.cpp Point.cpp Point.h Enum.cpp Enum.h Driver.cpp
        Driver.h Cab.cpp Cab.h Luxury.cpp Luxury.h Map.cpp Map.h MapObj.cpp MapObj.h Standard.cpp Standard.h
        Grid.cpp Grid.h Parser.cpp Parser.h Bfs.cpp Bfs.h Passenger.cpp Passenger.h CabFactory.h CabFactory.cpp
        Road.cpp Road.h Parser.h Tests/CabTest.cpp Tests/CabTest.h Tests/PointTest.cpp Trip.cpp Trip.h
        Tests/PointTest.h Tests/BfsTest.cpp Tests/BfsTest.h Tests/DriverTest.cpp
        MainFlow.h MainFlow.cpp TaxiCenter.h TaxiCenter.cpp Statistic.h Statistic.cpp
        Tests/DriverTest.h Tests/GridTest.cpp Tests/GridTest.h Obstacle.cpp Obstacle.h Tests/TaxiCentrTest.cpp Tests/TaxiCentrTest.h)
add_executable(Ex1 ${SOURCE_FILES})
target_link_libraries(Ex1 gtest gtest_main)
