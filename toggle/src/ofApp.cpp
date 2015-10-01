#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    projector_state = false;
    ofBackground(255);
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (projector_state == false && ofGetWeekday() >= 1 && ofGetWeekday() <= 5 ) { // && ofGetSeconds() <= 1
        
        if (ofGetSeconds() > 45 && ofGetSeconds() <= 55) {
            
            //projectorControlOn();
            cout << "on" << endl;
            
            projector_state = !projector_state; // this just flips is each time this statement happens
        }
    
    }
    
    if (projector_state == true ) { // && ofGetSystemTime() <= 1
        
        if (ofGetSeconds() < 44 || ofGetSeconds() > 55) {
            
            //projectorControlOff();
            cout << "off" << endl;
            
            projector_state = !projector_state;
        }
        
    }
    
}



//--------------------------------------------------------------
void ofApp::draw(){

    ofSetColor(ofColor::black);
    ofDrawBitmapString("Projector State: " + ofToString(projector_state), ofGetWidth() * .5, ofGetHeight() * .5);
    
     ofDrawBitmapString("Seconds: " + ofToString(ofGetSeconds()), ofGetWidth() * .5, ofGetHeight() * .65);
    
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
