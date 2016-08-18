#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	cir.init();
	for (int i = 0; i < 20; i++) {
		cir.pixCircle(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()), ofRandom(1, 20 + i), ofRandom(255), ofRandom(255), ofRandom(255));
	}
}

//--------------------------------------------------------------
void ofApp::update(){
	cir.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	cir.draw();
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
