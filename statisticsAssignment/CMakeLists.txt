cmake_minimum_required( VERSION 3.5 )
project(statistics)
add_executable(analyze 
			analyze.cpp statFunctions.h 
			max.cpp min.cpp mean.cpp 
			pct.cpp std.cpp)
set_target_properties(analyze PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON)