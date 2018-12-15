cmake_minimum_required(VERSION 3.9)
project(FancyLift)

set(CMAKE_CXX_STANDARD 14)

add_executable(FancyLift main.cpp Lift.cpp Lift.h House.cpp House.h Command.cpp Command.h)