#!/usr/bin/env python3

import launch_ros.actions
from launch import LaunchDescription

def generate_launch_description():

    get_package_share_directory = launch_ros.actions.Node(
        package="get_package_share_directory",
        executable="get_package_share_directory"
    )

    return LaunchDescription([
        get_package_share_directory
    ])

if __name__ == "__main__":
    generate_launch_description()