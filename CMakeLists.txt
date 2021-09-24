cmake_minimum_required(VERSION 3.0)
project(fluffy_succotash)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)
FetchContent_Declare(
        mundy_math
        # Specify the commit you depend on and update it regularly.
        URL https://github.com/jpschafer/mundy-math/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(mundy_math)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(fluffy_succotash_app main.cpp)

# Link Mundy Math to Test Executable
target_link_libraries(fluffy_succotash_app mundy_math_lib)
target_include_directories(fluffy_succotash_app PUBLIC ${mundy_math_SOURCE_DIR})