cmake_minimum_required (VERSION 2.6)
project (WeaponStores)
set(CMAKE_BUILD_TYPE Debug)

include_directories(include)

#file(GLOB SOURCES "src/*")

#add_executable(Test ${SOURCES})

add_executable(Test src/testIt.cpp src/WeaponBayClass.cpp src/WeaponClass.cpp)