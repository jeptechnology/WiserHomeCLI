cmake_minimum_required(VERSION 3.10)

project(WiserHomeCLI)

find_package(Threads REQUIRED)

add_executable(WiserHomeCLI
   main.cpp
   RestApiClient.cpp
   RestApiClient.h
   JsonPrettyPrinter.cpp
   JsonPrettyPrinter.h
   linenoise.hpp
   )

target_include_directories(WiserHomeCLI PUBLIC
   ${PROJECT_SOURCE_DIR}/../include
)

find_package (Threads)

target_link_libraries(WiserHomeCLI ${CMAKE_THREAD_LIBS_INIT})
