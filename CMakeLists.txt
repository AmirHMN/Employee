cmake_minimum_required(VERSION 3.17)
project(Address)

set(CMAKE_CXX_STANDARD 14)

add_executable(Address main.cpp Address.cpp Address.h Person.cpp Person.h Employee.cpp Employee.h Boss.cpp Boss.h Company.cpp Company.h)