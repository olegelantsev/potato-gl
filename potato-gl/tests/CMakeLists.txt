
enable_testing()

add_executable(${PROJECT_NAME}_test
  src/tests.cpp
)

target_link_libraries(${PROJECT_NAME}_test
  ${PROJECT_NAME}
  potato-gl
  gtest_main
  gtest
)

add_test(AllTests ${PROJECT_NAME}_test)

