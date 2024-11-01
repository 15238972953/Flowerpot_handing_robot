#include<ros/ros.h>
#include<radar_msgs/array.h>
#include<radar_msgs/radar.h>
void processdataCallback(const radar_msgs::array::ConstPtr& msg)
{
    for(const auto& radar_data: msg->array){
        ROS_INFO_STREAM("n=" << radar_data.n
                                           <<",r="<<radar_data.r
                                           <<",phi="<<radar_data.phi);
    }
}

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "processdata_node");
    ros::NodeHandle nh;
    ros::Subscriber radar_processed_sub = nh.subscribe("Array_Radar", 1000, &processdataCallback);
    ros::spin();
    return 0;
}
