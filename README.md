# A Caching Server

[Project URL](https://roadmap.sh/projects/caching-server)

# Setting up

## Prerequisites
- A C++ compiler
- Visual Studio Code and `CMake Tools` extension
- [vcpkg](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started?pivots=shell-bash)
- CMake

## Running the project (on Visual Studio Code)
After installing `vcpkg`, please change line 2 in [CMakeLists.txt](CMakeLists.txt) to the path to your `vcpkg`.

To compile the project, please do the following:
- Press `Ctrl + Shift + P` then choose `CMake: Configure`
- Then type the following into your terminal to run the project:
```bash
cd build
make
./caching-server
```