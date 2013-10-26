cmake_minimum_required(VERSION 2.8)
project (RtlChecker)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_subdirectory (lib)
add_subdirectory (test)
