cmake_minimum_required(VERSION 3.5.0)
set(CMAKE_TOOLCHAIN_FILE /home/luongthang0105/vcpkg/scripts/buildsystems/vcpkg.cmake)

project(caching-server VERSION 0.1.0 LANGUAGES C CXX)

add_executable(caching-server ./src/main.cpp)

find_package(httplib CONFIG REQUIRED)
target_link_libraries(caching-server PRIVATE httplib::httplib)

