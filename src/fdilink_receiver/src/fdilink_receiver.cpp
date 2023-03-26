#include "fdilink_receiver.h"

namespace FdiLinkReceiver
{

bool FdiLinkReceiver::Init()
{
    ros::NodeHandle nh("~");
    std::string imuTopic;
    nh.param("imu_topic", imuTopic, std::string("/imu"));
    ROS_INFO("imu topic: %s", imuTopic.c_str());

    // subsciber  创建发布对象
    m_imuPub = nh.subscribe(imuTopic.c_str(), 1000, ReceiveImu);
    return true;
}

void FdiLinkReceiver::ReceiveImu(const sensor_msgs::Imu& imuData)
{
    ROS_INFO("timestamp=%lf, frameId=%s, q=%lf %lf %lf %lf, linAcc=%lf %lf %lf",
        imuData.header.stamp.nsec / 1e9, imuData.header.frame_id.c_str(),
        imuData.orientation.w, imuData.orientation.x, imuData.orientation.y, imuData.orientation.z,
        imuData.linear_acceleration.x, imuData.linear_acceleration.y, imuData.linear_acceleration.z);
}

} // namespace FdiLinkReceiver