cmake_minimum_required(VERSION 3.24)
project(BitShift)

set(CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(BitShift main.cpp binarytodecimal.h binarytodecimal.cpp decimaltobinary.h deciamltobinary.cpp hexatodecimal.h decimaltohexa.h decimaltohexa.cpp hexatodecimal.cpp hexatobinary.cpp hexatobinary.h)
