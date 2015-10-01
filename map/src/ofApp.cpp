#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    
    // link a float '777' as an index, to a string that you actually use 'sushi'
   // map<int, string> food;
    
    food["taco"] = 1;
    food["kimchi"] = 10;
    food["sushi"] = 100;
    
    cout << food["taco"] << endl; // this prints the corresponding string
    
    
    for (auto iter = food.begin(); iter != food.end(); ++iter ) {
        
        cout << "Food: " << iter->first << " Value: " << iter->second << endl;
        
        if (iter->first == "taco") {
            
            cout << "This Works!" << endl;
        }
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){

//Approach 1:
//    map<int, string>::iterator it = food.begin();
//    
//    for (it; it != food.end(); ++it)
//    {
//        string printMap = ofToString(it->first) + " " + it->second;
//        cout << printMap << endl;
//    }

//Approach 2:
    
    
    
   
    

        

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
