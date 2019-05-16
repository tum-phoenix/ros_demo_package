#include <ros/ros.h>

int main(int argc,char **argv) {
    ros::init(argc, argv, "DemoProgram");
    ros::NodeHandle nh;
    /* Your code starts here! */
    ROS_INFO("Hello World!");
    /* Necessary if you don't have your own loop */
    ros::spin();
}