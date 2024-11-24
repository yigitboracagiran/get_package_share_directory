#include "get_package_share_directory/get_package_share_directory.hpp"

int main ( int argc, char **argv ) {
    rclcpp::init( argc, argv ); 
    std::shared_ptr<GetPackageShareDirectory> node = std::make_shared<GetPackageShareDirectory>();
    // rclcpp::spin( node );
    return 0;
}