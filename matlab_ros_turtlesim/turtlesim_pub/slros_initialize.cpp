#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "turtlesim_pub";

// For Block turtlesim_pub/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_turtlesim_pub_geometry_msgs_Twist> Pub_turtlesim_pub_1;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

