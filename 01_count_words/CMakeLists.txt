include_directories(.)

add_executable(01_count_words
  count_words.cpp
  tests.cpp
)

target_link_libraries(01_count_words gtest gtest_main)
