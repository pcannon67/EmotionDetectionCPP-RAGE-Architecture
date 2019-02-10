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


//! Include AssetManager and Base classes.
#include <AssetManager.h>
#include <Messages.h>
#include <Bridge.h>
#include <RageVersionInfo.h>
#include <BaseAsset.h>


//! Include Example Asset used for testing purposes.
#include <Asset.h>
#include <Logger.h>
#include <DialogueAsset.h>
#include <AssetSettings.h>

#include <iostream>
#include "main.h"
#include "face_landmark_detection_ex.h"

using namespace std;
using namespace rage;

/// <summary>
/// Handler for Published Events.
/// </summary>
///
/// <typeparam name="...Args"> Type of the ... arguments. </typeparam>
/// <param name="topic"> The topic. </param>
/// <param name="args">  Variable arguments providing the arguments. </param>
template <typename ...Args>
void MyEventHandler(std::string topic, Args... args)
{
	const char* sep = "";
	std::cout << "[PubSup]." << topic << " : [";

	//See folding expresions https://en.cppreference.com/w/cpp/language/fold
	//See https://stackoverflow.com/questions/25680461/variadic-template-pack-expansion
	int dummy[] = { 0, ((void)Messages::getInstance().EVENT_ARGS_EXPANDER(std::forward<Args>(args)),0)... };
	//(((std::cout << sep << args), sep = " "), ...);

	cout << "] (using a method)" << endl;
}

Asset* emotionDetectionCpp = nullptr;

Bridge* emotionDetectionCppBridge = new Bridge();

static void createANewAsset()
{
	emotionDetectionCpp = new Asset();

	// Call The Main Function To Run The Emotion Detection Asset
	int message = myMain();

	cout << message << endl;
}

void checkVersionAndDependency()
{
	cout << "Asset " << emotionDetectionCpp->getClassName() << "v" << emotionDetectionCpp->getVersion() << endl;

	std::map<std::string, std::string> dependencies = emotionDetectionCpp->getDependencies();

	std::map<std::string, std::string>::const_iterator it = dependencies.begin();
	for (; it != dependencies.end(); ++it)
	{
		cout << "Depends on " << it->first << it->second << endl;
	}

	cout << endl;

	cout << AssetManager::getInstance().getVersionAndDependenciesReport() << endl;

	cout << "Version: v" << emotionDetectionCpp->getVersion() << endl;

	cout << endl;
}

void createAssetToAssetAndBrigde()
{
	emotionDetectionCpp->publicMethod("Emotion Detection Cpp RAGE Architecture");

	AssetManager::getInstance().setBridge(emotionDetectionCppBridge);

	emotionDetectionCpp->publicMethod("Hello Different World (Game Engine Logging)");

	cout << endl;
}


void testSettings()
{
	//script.dialogueText.text = emotionDetectionCpp.DefaultSettings.Count.ToString();//["NewKey0"].;


	//! Log Default Settings
	cout << emotionDetectionCpp->settingsToXml<AssetSettings>() << endl;


	AssetSettings as1;
	as1.setTestProperty("MODIFIED_TEST_1");

	//! Load Runtime Settings.
	emotionDetectionCpp->setBridge(emotionDetectionCppBridge);
	emotionDetectionCpp->loadSettings<AssetSettings>("runtime-settings.xml");

	cout << emotionDetectionCpp->settingsToXml<AssetSettings>() << endl;
}

int main()
{
	cout << "DirectorySeparatorChar:" << PATH_SEPARATOR << endl;

	createANewAsset();

	//Still fails
	checkVersionAndDependency();

	createAssetToAssetAndBrigde();

	testSettings();

	std::cout << "Press Enter to continue...";
	std::cin.ignore();

	delete emotionDetectionCpp;

	delete emotionDetectionCppBridge;

	return EXIT_SUCCESS;
}