cmake_minimum_required(VERSION 3.5)
project(Parcial_2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Nodo.h AAVL.h Diccionario.cpp Diccionario.h AVVL.cpp Cola.cpp Cola.h NodoC.cpp NodoC.h)
add_executable(Parcial_2 ${SOURCE_FILES})