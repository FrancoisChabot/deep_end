cmake_minimum_required(VERSION 3.1)

project(deep_end)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

add_definitions(-D_SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING)
add_subdirectory(third_party/googletest)

set_target_properties(gtest PROPERTIES FOLDER "third_party")
set_target_properties(gtest_main PROPERTIES FOLDER "tests")
set_target_properties(gmock PROPERTIES FOLDER "tests")
set_target_properties(gmock_main PROPERTIES FOLDER "tests")
add_subdirectory(01_count_words)
