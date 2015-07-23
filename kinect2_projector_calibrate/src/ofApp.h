#pragma once

#include "ofMain.h"
#include "ofxKinectForWindows2.h"
#include "opencv2/opencv.hpp"

class ofApp : public ofBaseApp{

public:
    void setup();
    void update();
    void draw();

    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);

    ofxKFW2::Device kinect;
    cv::Mat image;
    cv::Size chessSize;
    vector<cv::Point2f> imagePointsCamera, imagePointsProjector;
};
