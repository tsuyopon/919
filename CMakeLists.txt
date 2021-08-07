cmake_minimum_required (VERSION 3.5)

project(919project)

# Add sub directories
add_subdirectory(lib)
add_subdirectory(include)
add_subdirectory(src)

# Enable the testing features.
enable_testing()
add_subdirectory(test)
