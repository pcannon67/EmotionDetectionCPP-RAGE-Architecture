/*
* Facial Emotion Recognition in C++ version 3.0 (Updated on Sunday 10 February 2019).
*
* Emotion recognition is done based on facial expressions using image files and the webcam.
*
* Copyright 2017 Open University of the Netherlands (OUNL)
*
* Author: Kiavash Bahreini.
* Organization: Open University of the Netherlands (OUNL).
* Project: The RAGE project
* Project URL: http://rageproject.eu.
* Task: T2.3 of the RAGE project; Development of assets for emotion detection.
*
* Cite this work as:
* Bahreini, K., van der Vegt, W. & Westera, W. Multimedia Tools and Applications (2019). https://doi.org/10.1007/s11042-019-7250-z
* 
* For any questions please contact:
*
* Kiavash Bahreini via kiavash.bahreini [AT] ou [DOT] nl
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* This project has received funding from the European Union’s Horizon
* 2020 research and innovation programme under grant agreement No 644187.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/*
* This code is based on the dlib c++ library.
*
* URL: http://dlib.net/.
*/

/*
* In order to capture the video from a camera this code uses
* the Opencv version 2.4.11 and/or higher.
* URL: https://sourceforge.net/projects/opencvlibrary/files/opencv-win/
*/

#ifndef FACE_LANDMARK_DETECTION_EX_Hh_
#define FACE_LANDMARK_DETECTION_EX_Hh_

#include "../dlib/geometry.h"
#include "../dlib-master/dlib/image_processing/full_object_detection_abstract.h"
#include <vector>
#include "../dlib/serialize.h"

//To capture the video from a camera
#include "include/opencv2/highgui.hpp"

#include <../dlib/image_transforms.h>
#include <../dlib/image_processing/render_face_detections_lines.h>

using namespace dlib;
using namespace std;

long double calculateEuclideanDistance(const short int x, const short int y, const short int a, const short int b);

long double * setPointsToCalculateEuclideanDistance(full_object_detection shape);

long double calculateCosines(const long double a, const long double b, const long double c);

long double * callCalculateCosines(const long double * EuclideanDistanceArrayPointer);

long double calculateArcCosines(const long double a);

long double * callCalculateArcCosines(const long double * CosinesArrayPointer);

int myMain();

int webcam();

#endif // FACE_LANDMARK_DETECTION_EX_Hh_
