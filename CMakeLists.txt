cmake_minimum_required(VERSION 3.5)
project(GRADE CXX)

# require a C++11 compiler
# use it for all targets
##########################################
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
##########################################

# configure Qt
##########################################
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
##########################################

# find package for Qt
##########################################
find_package(Qt5 COMPONENTS Widgets Core Test REQUIRED)
##########################################

#set src
#put all source files here
##########################################
set(_src 
    )
##########################################

#set gui
#put all gui files here
##########################################
set(gui_src
    main_window.hpp main_window.cpp
  )
##########################################

# set test
#put all test files here
##########################################
set(test_src
  catch.hpp
  unittests.cpp
)
##########################################

# create the executable
##########################################
add_executable(grade grade.cpp ${_src} ${gui_src})
target_link_libraries(grade Qt5::Widgets)
##########################################

#create test executable
##########################################
add_executable(unittests ${_src} ${test_src})
##########################################

#enable testing
##########################################
enable_testing()
add_test(unittests unittests)
##########################################
