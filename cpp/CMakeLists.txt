cmake_minimum_required(VERSION 3.1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(numMFcpp VERSION 0.1.0)

# Include dir
include_directories(/usr/local/include)

# Src
AUX_SOURCE_DIRECTORY(src SRC_FILES)

# Headers
set(PROJECT_SOURCE_DIR "src")
set(PROJECT_INCLUDE_DIR "include/numMFcpp_bits")

# Source files
set(SOURCE_FILES
    
    ${PROJECT_INCLUDE_DIR}/binModel01.hpp
    ${PROJECT_INCLUDE_DIR}/options01.hpp
    ${PROJECT_INCLUDE_DIR}/options02.hpp
    ${PROJECT_INCLUDE_DIR}/options03.hpp
    ${PROJECT_INCLUDE_DIR}/digitals.hpp
    ${PROJECT_INCLUDE_DIR}/binModel02.hpp
    ${PROJECT_INCLUDE_DIR}/options04.hpp
    ${PROJECT_INCLUDE_DIR}/options05.hpp
    ${PROJECT_INCLUDE_DIR}/defInt.hpp
    ${PROJECT_INCLUDE_DIR}/options06.hpp
    ${PROJECT_INCLUDE_DIR}/eurOptions.hpp
    ${PROJECT_INCLUDE_DIR}/options07.hpp
    ${PROJECT_INCLUDE_DIR}/options08.hpp
    ${PROJECT_INCLUDE_DIR}/binLattice.hpp
    ${PROJECT_INCLUDE_DIR}/options09.hpp
    ${PROJECT_INCLUDE_DIR}/bsModel.hpp
    ${PROJECT_INCLUDE_DIR}/solvers.hpp
    ${PROJECT_INCLUDE_DIR}/options10.hpp
    ${PROJECT_INCLUDE_DIR}/eurCall.hpp
    ${PROJECT_INCLUDE_DIR}/bsModel01.hpp
    ${PROJECT_INCLUDE_DIR}/pathDepOptions01.hpp
    ${PROJECT_INCLUDE_DIR}/pathDepOptions02.hpp
    ${PROJECT_INCLUDE_DIR}/gmtrAsianCall.hpp
    ${PROJECT_INCLUDE_DIR}/barrierCall.hpp
    
    ${PROJECT_SOURCE_DIR}/binModel01.cpp
    ${PROJECT_SOURCE_DIR}/options01.cpp
    ${PROJECT_SOURCE_DIR}/options02.cpp
    ${PROJECT_SOURCE_DIR}/options03.cpp
    ${PROJECT_SOURCE_DIR}/digitals.cpp
    ${PROJECT_SOURCE_DIR}/binModel02.cpp
    ${PROJECT_SOURCE_DIR}/options04.cpp
    ${PROJECT_SOURCE_DIR}/options05.cpp
    ${PROJECT_SOURCE_DIR}/defInt.cpp
    ${PROJECT_SOURCE_DIR}/options06.cpp
    ${PROJECT_SOURCE_DIR}/eurOptions.cpp
    ${PROJECT_SOURCE_DIR}/options07.cpp
    ${PROJECT_SOURCE_DIR}/options08.cpp
    ${PROJECT_SOURCE_DIR}/options09.cpp
    ${PROJECT_SOURCE_DIR}/bsModel.cpp
    ${PROJECT_SOURCE_DIR}/options10.cpp
    ${PROJECT_SOURCE_DIR}/eurCall.cpp
    ${PROJECT_SOURCE_DIR}/bsModel01.cpp
    ${PROJECT_SOURCE_DIR}/pathDepOptions01.cpp
    ${PROJECT_SOURCE_DIR}/pathDepOptions02.cpp
    ${PROJECT_SOURCE_DIR}/gmtrAsianCall.cpp
    ${PROJECT_SOURCE_DIR}/barrierCall.cpp

    
)

# Set up such that XCode organizes the files correctly
source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${SOURCE_FILES})

# Add library
add_library(numMFcpp SHARED ${SOURCE_FILES})

# Include directories
target_include_directories(numMFcpp PRIVATE include/numMFcpp_bits)

# Install
install(TARGETS numMFcpp DESTINATION lib)

# Install the headers
install(FILES include/numMFcpp DESTINATION include)

# Create base directory
install(DIRECTORY include/numMFcpp_bits DESTINATION include)