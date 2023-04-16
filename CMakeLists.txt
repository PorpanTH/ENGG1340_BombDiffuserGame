cmake_minimum_required(VERSION 3.19)
project(ENGG1340_BombDiffuserGame)

set(CMAKE_CXX_STANDARD 14)
set(Headers symbolCombi.h time.h)

add_executable(ENGG1340_BombDiffuserGame $(PROJECT_SOURCE_DIR)/ main.cpp symbolCombi.cpp)