#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    //Set Window title : "Test1"
    ofSetWindowTitle("Test1");
    //Set Window size : 1280x720
    //ofSetWindowShape(1280,700);
    //Set frame rate to 60Hz
    ofSetFrameRate(60);
    //set Window background : black
    ofBackground(ofColor::black);

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    ofPushMatrix();
    // Place the (0,0) to window centre . 
    ofTranslate( ofGetWidth()/2 , ofGetHeight()/2 );
    // ......
    // Now place the drawing code here 
    
    // Draw a Blue color Line 
    //Step1 : Set Color to Red 
    ofSetColor( 255,0,0 ); // Red , Green , Blue . So here Red component is 255 and Green and Blue component is zero.
    // Draw a Rectangle using ofDrawLine()
    ofSetLineWidth(5); //Set Line Width
    ofDrawLine(-100,-100,100,-100);
    ofDrawLine(100,-100,100,100);
    ofDrawLine(100,100,-100,100);
    ofDrawLine(-100,100,-100,-100);
    //-------------------------------------------
    ofSetColor(ofColor::yellow); //Set Color to yellow 
    ofSetLineWidth(1);
    ofNoFill();
    ofDrawRectangle(-150,-150,300,300);
    //----------------------------------------------
    ofSetColor(0,0,255,255); //Set Color Blue 
    ofFill(); // Fill of the drawn shape 
    ofDrawTriangle(-50,0,50,0,0,50);
    //Draw another triangle 
    ofSetLineWidth(8);
    ofNoFill();
    ofDrawTriangle(-50,-10,50,-10,0,-60);
    //----------------------------------------------
    ofSetLineWidth(.5);
    ofSetCircleResolution(1000);
    ofDrawCircle(0,300,20);

    ofSetColor(0,255,0); //Green Color
    ofFill();
    ofDrawCircle(0,-300,20);



    // ......
    ofPopMatrix();
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
