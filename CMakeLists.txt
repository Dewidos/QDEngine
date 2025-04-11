cmake_minimum_required(VERSION 3.30)
project(QDEngine)

set(CMAKE_CXX_STANDARD 20)

# set the output directory for built objects.
# This makes sure that the dynamic library goes into the build directory automatically.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

# This assumes the SDL source is available in vendored/SDL
add_subdirectory(vendored/SDL EXCLUDE_FROM_ALL)

# This assumes the SDL_image source is available in vendored/SDL_image
add_subdirectory(vendored/SDL_image EXCLUDE_FROM_ALL)

file(GLOB_RECURSE SOURCES "app/src/*.cpp")

# Create your game executable target as usual
add_executable(QDEngine WIN32
    app/main.cpp
    ${SOURCES}
)

target_include_directories(QDEngine PRIVATE app/include)

# Link to the actual SDL3 library.
target_link_libraries(QDEngine PRIVATE SDL3_image::SDL3_image SDL3::SDL3)