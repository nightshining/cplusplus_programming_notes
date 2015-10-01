
# C++ Programming Concepts Notes


### Maps

```c++

///define map

    map<string, int> food;

///approach 1
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

///approach 2
  map<int, string>::iterator it = food.begin();
    
    for (it; it != food.end(); ++it)
    {
        string printMap = ofToString(it->first) + " " + it->second;
        cout << printMap << endl;
    }
```

###Auto

```c++
    auto someStuff = "someString";
    auto someMoreStuff = 50.001f;
    auto someOtherStuff = 200;
    
    cout << someStuff << ' ' << someMoreStuff << ' ' << someOtherStuff << ' ' << endl;

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
    
```

###Iterator

```c++
///Create some C++ containers
    vector<string> names;
    map<string, int> numbers;
    vector<float> someFloats;

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
    
```

### openFrameworks Pointer
```c++
///create a vector of ofSoundPlayers that are all pointers

    vector< ofPtr<ofSoundPlayer> > sounds;
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


```

### State Checking

```c++

#include "ofApp.h"

bool projector_state;

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


```
















