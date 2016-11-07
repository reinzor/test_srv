#include "ros/ros.h"
#include "test_srv/Test.h"

bool test(test_srv::TestRequest& req,
         test_srv::TestResponse& res)
{
//  ROS_INFO(res);
  return true;
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "test_server");
  ros::NodeHandle n;

  ros::ServiceServer service = n.advertiseService("test", test);
  ros::spin();

  return 0;
}
