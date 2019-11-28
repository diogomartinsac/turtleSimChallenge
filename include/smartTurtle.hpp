#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/Pose.h"
#include "pid.hpp"

class smartTurtle {
 private:
    ros::NodeHandle n_;
 public:
    smartTurtle(/* args */);
    ~smartTurtle();
};

smartTurtle::smartTurtle(/* args */) {
}

smartTurtle::~smartTurtle() {
}
