#include "ros/ros.h"
#include "test_srv/Test.h"
#include <cstdlib>

int main(int argc, char **argv)
{
  if (argc < 3)
  {
    std::cout << "Usage: rosrun test_srv test_srv_client_node [tries] [num]" << std::endl;
    return 1;
  }

  ros::init(argc, argv, "test_client");

  ros::NodeHandle n;
  std::map<std::string, std::string> header;
  ros::ServiceClient client = n.serviceClient<test_srv::Test>("test", true);
  test_srv::Test srv;

  unsigned int tries = atoi(argv[1]);
  unsigned int num = atoi(argv[2]);
  ros::Duration total(0);

  ROS_INFO("We are doing %d tries of %d iterations ...", tries, num);
  for (unsigned j = 0; j < tries; ++j)
  {
    ros::Time start = ros::Time::now();
    for (unsigned int i = 0; i < num; ++i)
    {
      if (client.call(srv))
      {

      }
      else
      {
        ROS_ERROR("Failed to call service test");
        return 1;
      }
    }
    ros::Duration took = ros::Time::now() - start;
    total += took;

    ROS_INFO("[%d] - %d iteration took %.6f seconds --> %.2f microseconds per request", j+1, num, took.toSec(), took.toSec() / num * 1000000);
  }
  ROS_INFO("[AVERAGE] %.2f microseconds per request", total.toSec() / num / tries * 1000000);

  return 0;
}
