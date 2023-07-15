cmake_minimum_required(VERSION 3.25)
project(template_method)

set(CMAKE_CXX_STANDARD 23)

add_executable(template_method main.cpp src/AbstractClass.cpp include/AbstractClass.hpp src/ConcreteClass1.cpp include/ConcreteClass1.hpp src/ConcreteClass2.cpp include/ConcreteClass2.hpp)
