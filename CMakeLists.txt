# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(BloodstrikeESP VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(BloodstrikeESP main.cpp) # Update with your source files here

# Include other source files and libraries as needed
# add_subdirectory(src)  # Example of adding a subdirectory