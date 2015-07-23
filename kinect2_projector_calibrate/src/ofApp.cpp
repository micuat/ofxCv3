#include "ofApp.h"

using namespace cv;

//--------------------------------------------------------------
void ofApp::setup(){
    kinect.open();
    kinect.initDepthSource();
    kinect.initColorSource();

    chessSize = Size(5, 4);
}

//--------------------------------------------------------------
void ofApp::update(){
	kinect.update();
    ofPixels& pixels = kinect.getColorSource()->getPixels();
    if (pixels.isAllocated() == false) return;

    if (image.empty())
        image = Mat(pixels.getHeight(), pixels.getWidth(), CV_MAKETYPE(CV_8U, 4), pixels.getPixels(), 0);
    else
        image.data = pixels.getPixels();
}

//--------------------------------------------------------------
void ofApp::draw(){
    kinect.getColorSource()->draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == ' ')
    {
        bool patternWasFound;
        patternWasFound = findChessboardCorners(image, chessSize, imagePointsCamera, CV_CALIB_CB_ADAPTIVE_THRESH | CV_CALIB_CB_FILTER_QUADS | CV_CALIB_CB_NORMALIZE_IMAGE);
        drawChessboardCorners(image, chessSize, imagePointsCamera, patternWasFound);
        imshow("camera", image);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
