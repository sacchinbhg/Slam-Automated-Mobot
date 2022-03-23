   1 #include <urdf/model.h>
   2 #include "ros/ros.h"
   3 
   4 int main(int argc, char** argv){
   5   ros::init(argc, argv, "my_parser");
   6   if (argc != 2){
   7     ROS_ERROR("Need a urdf file as argument");
   8     return -1;
   9   }
  10   std::string urdf_file = argv[1];
  11 
  12   urdf::linorobot model;
  13   if (!model.initFile(urdf_file)){
  14     ROS_ERROR("Failed to parse urdf file");
  15     return -1;
  16   }
  17   ROS_INFO("Successfully parsed urdf file");
  18   return 0;