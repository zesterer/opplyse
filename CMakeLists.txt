################
#### INITIAL####
################

#Make sure we have a minimum version
cmake_minimum_required(VERSION 2.6)

###############
#### SETUP ####
###############

#Set globally required variables
set(APPLICATION_NAME opplyse)
set(APPLICATION_LINK_LIBRARIES)

#Set the project name and primary language
project(${APPLICATION_NAME} CXX)

#Set the version numbers
set(APPLICATION_VERSION_MAJOR 0)
set(APPLICATION_VERSION_MINOR 0)
set(APPLICATION_VERSION_BUILD 0)
set(APPLICATION_VERSION "${APPLICATION_VERSION_MAJOR}.${APPLICATION_VERSION_MINOR}.${APPLICATION_VERSION_BUILD}")
set(APPLICATION_DEBUG_ENABLED true)

#Set the source files and directories we will use
set(APPLICATION_SOURCE_FILES)
set(APPLICATION_SOURCE_DIRS)

#Tell the compiler to include -std=c++11
add_definitions(-std=c++11 -Wall -g3)

#Set CMake modules path
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules")

#######################
#### ADD LIBRARIES ####
#######################

#############
# PkgConfig #
#############

find_package(PkgConfig)

#########
# GTKmm #
#########

#Find GTKmm
pkg_check_modules(GTKMM gtkmm-3.0)

set(APPLICATION_SOURCE_DIRS ${APPLICATION_SOURCE_DIRS} ${GTKMM_INCLUDE_DIRS})
set(APPLICATION_LINK_LIBRARIES ${APPLICATION_LINK_LIBRARIES} ${GTKMM_LIBRARIES})

##################
#### BUILDING ####
##################

#Include the src directory (all the project code)
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/src")

#Add all directories that need to be added
include_directories(${APPLICATION_SOURCE_DIRS})

#Take the code and turn it into the executable
add_executable(${APPLICATION_NAME} ${APPLICATION_SOURCE_FILES})

#Link the final executable to the needed libraries
target_link_libraries(${APPLICATION_NAME} ${APPLICATION_LINK_LIBRARIES})
