cmake_minimum_required(VERSION 3.12)
project(BigDemo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(BigDemo
        AllUIElement.h
        ConfigUIElement.cpp
        foodflows.h
        grunge.h
        predictor.cpp
        QwertyKeyboardUIElement.cpp
        TextPageUIElement.cpp
        UIController.cpp
        UIController.h
        unphone.cpp
        unphone.h
        testing.cpp testing.h)
