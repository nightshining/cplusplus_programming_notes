#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    // Fill a vector // Fill a Map //
    
    names.push_back("Bobby");
    names.push_back("Billy");
    names.push_back("Joe");
    names.push_back("John");
    
    numbers["One"] = 1;
    numbers["Two"] = 2;
    numbers["Three"] = 3;
    
    for (int i = 0; i < 5; i++) {
        
        someFloats.push_back(ofRandom(5.0, 10.0));
    
    }

    // Iterate through them //
    // Iterate container is like a pointer to the arrays! //
    
    //Needs to be the same type as what you're iterating through//
    //vector<string>::iterator someIterator;
    
    for (vector<string>::iterator it = names.begin(); it != names.end(); it++) {
        
        cout << *it << endl;
    }
    
    
    for (map<string, int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        
        cout << "Key: " << it->first << " Type: " << it->second << endl;
    }
    
    for (vector<float>::iterator it = someFloats.begin(); it != someFloats.end(); it++) {
        
        float algo = sin(*it * ofGetElapsedTimef()) * 50;
        
        cout << "Algo using iterator instead of Int i: " << algo << endl;
        
    }
    

}

//--------------------------------------------------------------
void ofApp::update(){


    
}

//--------------------------------------------------------------
void ofApp::draw(){

    
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
