cmake_minimum_required(VERSION 3.5)

project(01.guessNumber)

add_executable(guessNumber
            guessNumber.cpp
            compare.h
            compare.cpp 
            getComparsionMessage.h
            getComparsionMessage.cpp 
            getGuessNumber.h
            getGuessNumber.cpp)

set_target_properties(guessNumber PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
)

target_include_directories(guessNumber PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../lib>
)

target_link_libraries(guessNumber scoreLib)