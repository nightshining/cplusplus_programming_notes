#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetWindowShape(50,50);
    
    auto someShit = "someString";
    auto someMoreShit = 50.001f;
    auto someOtherShit = 200;
    
    cout<<someShit<<' '<<someMoreShit<<' '<<someOtherShit<<' '<<endl;

    vector<float> someNumbers;
    
    someNumbers.resize(5);
    
    for ( auto & someNumbers : someNumbers ) {
        
        someNumbers = ofRandom(5);
        cout << someNumbers << endl;
    }
    
    map<string, int> someNames;
    
    someNames["one"] = 1;
    someNames["two"] = 2;
    someNames["three"] = 3;
    someNames["four"] = 4;
    someNames["five"] = 5;
    
    for (auto i : someNames ) {
        cout << i.first << ' ' << i.second << endl;
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
