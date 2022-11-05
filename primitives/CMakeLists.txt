add_library(Primitives)

target_link_libraries(Primitives)

target_sources(Primitives
  PUBLIC
    FILE_SET primitives TYPE CXX_MODULES FILES
    primitives.cxx pv.cxx
)
#target_include_directories(Primitives INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

#enable_testing()

#add_executable(PVTest pv_test.cpp)

#target_link_libraries(PVTest gtest_main Primitives)

#include(GoogleTest)
#gtest_discover_tests(PVTest)
