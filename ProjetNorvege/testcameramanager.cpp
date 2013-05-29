#include "testcameramanager.h"
#include "testcamera.h"

TestCameraManager::TestCameraManager()
    : AbstractCameraManager(), foundCameras() {
    foundCameras.push_back(new TestCamera("Camera1"));
    foundCameras.push_back(new TestCamera("Camera2"));
    foundCameras.push_back(new TestCamera("Camera3"));

    std::vector<CameraProperty> props = std::vector<CameraProperty>();
    props.push_back(CameraProperty(CameraManager::BRIGHTNESS, 0, 255, 0, true));
    props.push_back(CameraProperty(CameraManager::GAIN, 0, 255, 0, true));
    props.push_back(CameraProperty(CameraManager::EXPOSURE, 0, 255, 0, true));
    props.push_back(CameraProperty(CameraManager::GAMMA, 0, 5, 2, false));
    props.push_back(CameraProperty(CameraManager::SHUTTER, 0, 255, 0, true));
    props.push_back(CameraProperty(CameraManager::FRAMERATE, 1, 60, 0, false));
    for(int i=props.size()-1; i>=0; i--){
        props.at(i).setValue(0.0);
    }
    setProperties(props);
}

void TestCameraManager::detectNewCameras(std::vector<AbstractCamera *> *newCameras){
    *newCameras = foundCameras;
}
void TestCameraManager::getCamerasPropertiesList() const{
    //Nothing here
}

std::string TestCameraManager::getName() const{
    return "TestManager";
}


