Navigation package that fuse imu, uwb, radar sensors.

# Install
---
copy and paste below command in your own ROS2 workspace
```
git clone https://github.com/nnln-lno/sobang_nav_pkg.git
colcon build --packages-select sobang_navigation
source install/setup.bash
```

# Run
---
```
ros2 launch sobang_navigation navigation.launch.py
```

# Configuration
---
There are several parameters for navigation packages. (param/nav_params.yaml)

Description for some parameters are missing ! ( ASK TO ME )
