#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <turtlesim/Pose.h>
#include <math.h>
#include <iostream>
#include "smartTurtle.hpp"

int main(int argc, char **argv) {
  ros::init(argc, argv, "turtle_control");

  smartTurtle pedrita;

  pedrita.move2Goal();

  return 0;
}