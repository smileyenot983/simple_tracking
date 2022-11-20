cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 17)

find_package(Eigen3 REQUIRED)
find_package(OpenCV REQUIRED)

add_executable(tracking src/tracking.cpp)
target_link_libraries(tracking  Eigen3::Eigen ${OpenCV_LIBS})