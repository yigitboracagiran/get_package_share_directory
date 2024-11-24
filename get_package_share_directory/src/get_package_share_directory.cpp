#include "get_package_share_directory/get_package_share_directory.hpp"

GetPackageShareDirectory::GetPackageShareDirectory() : Node( "get_package_share_directory" ) { // Constructor
    // RCLCPP_INFO( rclcpp::Node::get_logger(), "get_package_share_directory Constructor!" );
    const std::string directory = ament_index_cpp::get_package_share_directory("get_package_share_directory");
    RCLCPP_INFO( rclcpp::Node::get_logger(), "Directory: %s", directory.c_str() );
}

GetPackageShareDirectory::~GetPackageShareDirectory() { // Destructor
    // RCLCPP_INFO( rclcpp::Node::get_logger(), "get_package_share_directory Destructor!" );
}
