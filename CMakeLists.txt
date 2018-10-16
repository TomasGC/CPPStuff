cmake_minimum_required(VERSION 3.2)

# The project name.
project (CPPStuff)

set(CMAKE_CXX_STANDARD 17)

# The version number.
set (CPPStuff_VERSION_MAJOR 1)
set (CPPStuff_VERSION_MINOR 0)


# Add the subdirectories containing cpp files.
add_subdirectory(libDesignPatterns)
add_subdirectory(libAlgorithms)

set(SRCS main.cpp)

# Add the executable.
add_executable(CPPStuff ${SRCS})

# Add the libraries.
target_link_libraries(CPPStuff libDesignPatterns libAlgorithms)
