cmake_minimum_required(VERSION 3.5)
project(Blah)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES image2ascii.cpp)

add_executable(Blah ${SOURCE_FILES})
add_definitions( -DMAGICKCORE_QUANTUM_DEPTH=16 )
add_definitions( -DMAGICKCORE_HDRI_ENABLE=0 )
find_package(ImageMagick COMPONENTS Magick++)
include_directories(${ImageMagick_INCLUDE_DIRS})
target_link_libraries(Blah ${ImageMagick_LIBRARIES})
MESSAGE(${ImageMagick_FOUND})
MESSAGE(${ImageMagick_INCLUDE_DIRS})
MESSAGE(${ImageMagick_LIBRARIES})
MESSAGE(${ImageMagick_COMPILE_OPTIONS})
