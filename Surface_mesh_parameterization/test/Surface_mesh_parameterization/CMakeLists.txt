# This is the CMake script for compiling this folder.


cmake_minimum_required(VERSION 3.1...3.15)
project( Surface_mesh_parameterization_Tests )



# Find CGAL
find_package(CGAL QUIET)

if ( CGAL_FOUND )


  find_package(Eigen3 3.1.0) #(requires 3.1.0 or greater)
  if(EIGEN3_FOUND)
    create_single_source_cgal_program( "extensive_parameterization_test.cpp" )
    CGAL_target_use_Eigen(extensive_parameterization_test)
  else(EIGEN3_FOUND)
    message(STATUS "NOTICE: The tests require Eigen 3.1 (or greater) and will not be compiled.")
  endif(EIGEN3_FOUND)

else()

  message(STATUS "NOTICE: This program requires the CGAL library, and will not be compiled.")

endif()

