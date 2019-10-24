cmake_minimum_required(VERSION 3.13)

project(myproject LANGUAGES C)

add_subdirectory(pkg)

add_executable(myprogram cmd/main.c)
target_include_directories(myprogram PUBLIC pkg)
target_link_libraries(myprogram PUBLIC binutils otherlib)
