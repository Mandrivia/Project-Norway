#include "emptycameramanager.h"

EmptyCameraManager::EmptyCameraManager()
<<<<<<< HEAD
    : AbstractCameraManager(true) {
=======
    : /*AbstractCameraManager::*/AbstractCameraManager(true) {
>>>>>>> origin/FlyCapture
}
void EmptyCameraManager::detectNewCameras(){
    //Nothing here
}
void EmptyCameraManager::getCamerasPropertiesList() const{
    //Nothing
}

std::string EmptyCameraManager::getName() const{
    return "Select";
}
