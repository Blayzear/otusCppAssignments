cmake_minimum_required (VERSION 3.14)
set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.1.${PATCH_VERSION})

project(otusAssignments VERSION ${PROJECT_VERSION})
add_subdirectory(CICD)
