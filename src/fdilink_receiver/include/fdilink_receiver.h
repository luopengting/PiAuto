#ifndef FDILINK_RECEIVER_H_
#define FDILINK_RECEIVER_H_

#include "ros/ros.h"
#include <sensor_msgs/Imu.h>

namespace FdiLinkReceiver
{

class FdiLinkReceiver
{
public:
    FdiLinkReceiver() {}
    ~FdiLinkReceiver() {}
    
    bool Init();

private:
    static void ReceiveImu(const sensor_msgs::Imu& imuData);

private:
    // Subscriber
    ros::Subscriber m_imuPub;
};

} // namespace FdiLinkReceiver

#endif