cmake_minimum_required(VERSION 3.10)
project(AdvGame)

# Require C++17 (SFML works with modern standards)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find SFML package (adjust version if needed)

find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

add_executable(AdvGame src/main.cpp src/Game.cpp)

target_include_directories(AdvGame PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(AdvGame PRIVATE sfml-graphics sfml-window sfml-system)
