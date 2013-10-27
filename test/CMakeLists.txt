link_directories (${PROJECT_BINARY_DIR}/lib) 

add_executable(testExactCompareCount testExactCompareCount.cpp)
target_link_libraries (testExactCompareCount rtlChecker) 
