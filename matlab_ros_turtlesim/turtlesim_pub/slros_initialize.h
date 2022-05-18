#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block turtlesim_pub/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_turtlesim_pub_geometry_msgs_Twist> Pub_turtlesim_pub_1;

void slros_node_init(int argc, char** argv);

#endif
