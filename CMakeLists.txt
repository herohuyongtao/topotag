# Set the minimum required version of cmake.
cmake_minimum_required(VERSION 3.0)

project(TopoTag)

# add test project
include_directories(include)
add_executable(${PROJECT_NAME} test/main.cpp)
target_link_libraries(${PROJECT_NAME} 
    debug ${CMAKE_SOURCE_DIR}/lib/TopotagDetectiond.lib
    optimized ${CMAKE_SOURCE_DIR}/lib/TopotagDetection.lib
)

# copy all needed files (including test data and dlls) to binary dir (when cmake)
file(GLOB files_needed 
    config
    test/data
    bin/*.dll
)
file(COPY ${files_needed} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
