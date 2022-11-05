cmake_minimum_required(VERSION 3.25)
project(Craytracer20 CXX)


set(CMAKE_EXPERIMENTAL_CXX_MODULE_CMAKE_API "3c375311-a3c9-4396-a187-3227ef642046")
if(WIN32)
  include(msvc_modules.cmake)
else()
  include(gcc_modules.cmake)
endif()

# specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# set the project name
project(Craytracer20
        VERSION 0.01
        LANGUAGES CXX)

# OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_subdirectory(Primitives)

# add the executable
add_executable(${PROJECT_NAME} craytracer.cpp)
target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS} Primitives)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
