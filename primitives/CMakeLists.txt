add_library(primitives)

target_link_libraries(primitives)

target_sources(primitives
  PUBLIC
    FILE_SET primitives TYPE CXX_MODULES FILES
    primitives.mpp pv.mpp ray.mpp
)
#target_include_directories(Primitives INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
