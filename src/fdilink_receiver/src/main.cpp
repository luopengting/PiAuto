#include "fdilink_receiver.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "receiver");
    auto recv = FdiLinkReceiver::FdiLinkReceiver();
    if (!recv.Init()) {
        ROS_WARN("Reveiver init failed.");
    }
    ros::spin();
    return 0;
}