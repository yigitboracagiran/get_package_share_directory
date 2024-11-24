cmake_minimum_required(VERSION 3.8)
project(get_package_share_directory)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set( dependencies
  ament_cmake
  rclcpp
  ament_index_cpp
)

include_directories( include )

foreach( dep ${dependencies} )
  find_package( ${dep} REQUIRED )
endforeach()

add_library( cpp_name SHARED src/get_package_share_directory.cpp )
ament_target_dependencies( cpp_name ${dependencies} )

add_executable( ${PROJECT_NAME} src/main.cpp )
ament_target_dependencies( ${PROJECT_NAME} ${dependencies} )
target_link_libraries( ${PROJECT_NAME} cpp_name)

install( DIRECTORY launch config DESTINATION share/${PROJECT_NAME}/ )
install( TARGETS ${PROJECT_NAME} DESTINATION lib/${PROJECT_NAME} )

ament_package()
