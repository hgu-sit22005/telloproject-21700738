cmake_minimum_required(VERSION 3.10)
project(tellopro)

# Find python and Boost - both are required dependencies
message( "Python lib:" ${PYTHON_LIBRARIES})
find_package(PythonLibs 3.6 REQUIRED)
message( "Boost lib:" ${Boost_INCLUDE_DIRS})
find_package(Boost COMPONENTS system python3 REQUIRED)

# Without this, any build libraries automatically have names "lib{x}.so"
set(CMAKE_SHARED_MODULE_PREFIX "")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ../bin)

# Add a shared module - modules are intended to be imported at runtime.
# - This is where you add the source files
add_library(TelloPro MODULE src/takeoff.cpp
							src/land.cpp
							src/python_interface.cpp)

# include directories
# include_directories(${PROJECT_SOURCE_DIR}/src)
include_directories(${PYTHON_INCLUDE_DIRS})
include_directories(${Boost_INCLUDE_DIRS})

# Set up the libraries and header search paths for this target
target_link_libraries(TelloPro ${Boost_LIBRARIES} ${PYTHON_LIBRARIES})
target_include_directories(TelloPro PRIVATE ${Boost_INCLUDE_DIRS} ${PYTHON_INCLUDE_DIRS})

