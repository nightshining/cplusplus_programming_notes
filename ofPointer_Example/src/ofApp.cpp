#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    /// Load all our sound assets that exist in folder path 'assets' ///
    
    ofDirectory soundDir;
    soundDir.listDir("assets");
    
    
    for (int i = 0; i < (int)soundDir.size(); i++){
        
        ofPtr<ofSoundPlayer> tempSound (new ofSoundPlayer());
        tempSound->loadSound(soundDir.getPath(i));
        tempSound->setLoop(false);
        tempSound->setMultiPlay(true);
        cout << "Loading Movie: " << soundDir.getPath(i) << endl;
        
        sounds.push_back(tempSound);
    }
    
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    for (auto & it : sounds) {
        
        if (ofGetSeconds() % 30 == 0 && it != NULL) {
        it->play();
        }
    }

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    switch (key) {
        case 'a':
            sounds[0]->play();
            break;
        case 's':
            sounds[1]->play();
            break;
        case 'd':
            sounds[2]->play();
            break;
        case 'f':
            sounds[3]->play();
            break;
        default:
            break;
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
