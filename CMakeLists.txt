cmake_minimum_required(VERSION 3.5)
project(diffdrive_hardware_interface)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

# Find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(hardware_interface REQUIRED)
find_package(ros2_control REQUIRED)

# Include directories
include_directories(
  include
)

# Create the executable
add_library(diffdrive_hardware_interface SHARED
  src/motor_driver_interface.cpp
  src/encoder_interface.cpp
  src/diffdrive_robot.cpp
)

ament_target_dependencies(diffdrive_hardware_interface
  rclcpp
  hardware_interface
  ros2_control
)

install(DIRECTORY include/
  DESTINATION include
)

install(TARGETS diffdrive_hardware_interface
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
