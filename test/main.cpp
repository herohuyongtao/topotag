#include <iostream>
#include <fstream>
#include "TopotagDetection.hpp"

int main(int argc, char **argv)
{
  // load config params
  if (!LoadConfigParams("./config/topotag_detection_params.yml")) {
    return -1;
  }

  // detect topotags
  std::vector<TopotagPose> topotag_pose_vec;
  if (DetectTopotag("./data/TopoTag_3x3_circle.png", topotag_pose_vec)) {
    //show results
    std::cout << ">> " << topotag_pose_vec.size() << " topotags in current image." << std::endl;
    for (size_t i = 0; i < topotag_pose_vec.size(); i++) {
      std::cout << ">>    TagID: " << topotag_pose_vec[i].id << std::endl;
      std::cout << ">>    Rotation: " << topotag_pose_vec[i].qw << ", " << topotag_pose_vec[i].qx << ", " << topotag_pose_vec[i].qy << ", " << topotag_pose_vec[i].qz << std::endl;
      std::cout << ">>    Position: " << topotag_pose_vec[i].x << ", " << topotag_pose_vec[i].y << ", " << topotag_pose_vec[i].z << std::endl;
      std::cout << std::endl;
    }
  }
  else {
    return -1;
  }
  
  return 0;
}
