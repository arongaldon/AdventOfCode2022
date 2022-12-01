project(AdventOfCode2022UnitTests)

include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

enable_testing()
find_package(GTest REQUIRED)

add_subdirectory(day01)
# add_subdirectory(day02)
