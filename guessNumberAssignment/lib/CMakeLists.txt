cmake_minimum_required(VERSION 3.12)

project(scoreLib)

add_library(scoreLib STATIC scores.h viewScore.cpp loadScore.cpp saveScore.cpp)

set_target_properties(scoreLib PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)
