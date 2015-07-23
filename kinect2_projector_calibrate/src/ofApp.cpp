#include "ofApp.h"

using namespace cv;

//--------------------------------------------------------------
void ofApp::setup(){
    kinect.open();
    kinect.initDepthSource();
    kinect.initColorSource();
}

//--------------------------------------------------------------
void ofApp::update(){
	kinect.update();
    bool patternWasFound;
//    patternWasFound = findChessboardCorners(image, chessSize, imagePointsCamera, CV_CALIB_CB_ADAPTIVE_THRESH | CV_CALIB_CB_FILTER_QUADS | CV_CALIB_CB_NORMALIZE_IMAGE);
}

//--------------------------------------------------------------
void ofApp::draw(){
	kinect.getColorSource()->draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
