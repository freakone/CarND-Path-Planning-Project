project(path_planning)

cmake_minimum_required (VERSION 3.5)

add_definitions(-std=c++11)

set(CXX_FLAGS "-Wall")
set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

set(sources src/main.cpp)

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin") 

include_directories(/usr/local/include)
include_directories(/usr/local/opt/openssl/include)
link_directories(/usr/local/lib)
link_directories(/usr/local/opt/openssl/lib)
link_directories(/usr/local/Cellar/libuv/1.11.0/lib)

endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin") 

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows") 
include_directories("C:/Users/kamil/dev/vcpkg/installed/x86-windows/include")
link_directories("C:/Users/kamil/dev/vcpkg/installed/x86-windows/debug/lib")
endif(${CMAKE_SYSTEM_NAME} MATCHES "Windows") 


add_executable(path_planning ${sources})

target_link_libraries(path_planning zlib ssleay32 libuv libeay32 uWS)
