#include <iostream>
#include <memory>
#include <fstream>
#include <rclcpp/rclcpp.hpp>
#include <ament_index_cpp/get_package_share_directory.hpp>

class GetPackageShareDirectory : public rclcpp::Node {
    public:
        GetPackageShareDirectory();
        ~GetPackageShareDirectory();
    private:
};