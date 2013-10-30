link_directories (${PROJECT_BINARY_DIR}/lib) 

add_executable(testExactCompareCount testExactCompareCount.cpp)
#target_link_libraries (testExactCompareCount rtlChecker) 

add_executable(unitTestCounters unitTestCounters.cpp)
#target_link_libraries (unitTestCounters rtlChecker) 
