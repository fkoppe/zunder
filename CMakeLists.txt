cmake_minimum_required(VERSION 3.22 FATAL_ERROR)
project(zunder LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_library(zunder)

target_link_libraries(
    zunder
    PUBLIC
    darkstar
)

set(ZNDR_VERSION_MAJOR 0 CACHE INTERNAL "")
set(ZNDR_VERSION_MINOR 1 CACHE INTERNAL "")
set(ZNDR_VERSION_PATCH 0 CACHE INTERNAL "")
set(ZNDR_VERSION_TWEAK 0 CACHE INTERNAL "")

target_compile_definitions(
    zunder
    PUBLIC
    ___ZNDR_VERSION_MAJOR=${ZNDR_VERSION_MAJOR}
    ___ZNDR_VERSION_MINOR=${ZNDR_VERSION_MINOR}
    ___ZNDR_VERSION_STAGE=${ZNDR_VERSION_PATCH}
    ___ZNDR_VERSION_PATCH=${ZNDR_VERSION_TWEAK}
)

if(ZNDR_TEST_ENABLE)
	enable_testing()
	add_subdirectory(test)
endif()

add_subdirectory(include)
add_subdirectory(source)
