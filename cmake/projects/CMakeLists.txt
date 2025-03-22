cmake_minimum_required(VERSION 3.31.6)
project(projects)

enable_testing()

add_subdirectory(libs/googletest)

add_subdirectory(menu)
add_subdirectory(bubble_sort)

target_include_directories(MyClass PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
