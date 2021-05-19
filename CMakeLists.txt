cmake_minimum_required(VERSION 2.8)

set(PROJECT_NAME ArrList) 
project(${PROJECT_NAME})
 
set(ExceptionLib ExceptionLib)
set(ArrList ArrList)
set(ArrListLib ArrListLib)
set(ArrListTest ArrListTest)
set(QueueLib QueueLib)
set(StackLib StackLib)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE) 
 set(CMAKE_BUILD_TYPE Release) 
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ExceptionLib)
add_subdirectory(ExceptionLib)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/QueueLib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ArrListLib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/StackLib)
add_subdirectory(ArrList)
add_subdirectory(ArrListLib)
add_subdirectory(ArrListTest)
add_subdirectory(QueueLib)
add_subdirectory(StackLib)
add_subdirectory(gtest)
