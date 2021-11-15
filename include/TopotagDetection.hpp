/*
* TopotagDetection.hpp
* Copyright (C) 2021 Ximmerse. All rights reserved.
*/

/*
* API for topotag detection
* Author : Guoxing Yu
* Date   : November 2021
*/
#include <string>
#include <vector>

struct TopotagPose {
	int id;									// tag id
	double x, y, z;					// tag position, unit: m
	double qx, qy, qz, qw;	// tag rotation
};
//************************************
// @method: LoadConfigParams
// @brief: Load config params from yml file. This must be called before run detetion algorithm.
// @param[in]: parmas_file: The yml file name with calibration data and some params
//************************************
__declspec(dllexport) bool LoadConfigParams(const std::string & parmas_file);


//************************************
// @method: DetectTopotag
// @brief: Detect topotag from the input image file.
// @param[in]: image_file: image file name
// @param[out]: topotag_pose_vec: all detected topotags with 6dof pose
//************************************
__declspec(dllexport) bool DetectTopotag(const std::string &image_file, std::vector<TopotagPose> &topotag_pose_vec);
