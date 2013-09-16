#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
  //  ofBackground(0,0,0);
  ofEnableSmoothing();
  ofEnableAlphaBlending();
  ofSetFrameRate(30);
  ofSetColor(0);
  width = ofGetWidth();
  height = ofGetHeight();
  
  A1 = 100;
  f1 = 2.0;
  p1 = 1.0/16.0;
  d1 = 0.02;
  
  A2 = 100;
  f2 = 5.0;
  p2 = 3.0/2.0;
  d2 = 0.0315;
  
  A3 = 100;
  f3 = 4.0;
  p3 = 13.0/15.0;
  d3 = 0.02;

  A4 = 100;
  f4 = 3.0;
  p4 = 1.0;
  d4 = 0.02;
  
  prevX = 0;
  prevY = 0;

  t = 0;
}

//--------------------------------------------------------------
void testApp::update(){
  
}

//--------------------------------------------------------------
void testApp::draw(){
  for(float t = ofGetElapsedTimef(); t < ofGetElapsedTimef() + 100; t += 0.1) {
    ofPushMatrix();
    ofTranslate(width/2, height/2);
    
    x = A1 * sin(f1*t + PI*p1)*exp(-d1*t) + A2 * sin(f2*t + PI*p2)*exp(-d2*t);
    y = A3 * sin(f3*t + PI*p3)*exp(-d3*t) + A4 * sin(f4*t + PI*p4)*exp(-d4*t);
    
    ofLine(prevX, prevY, x, y);
    
    prevX = x;
    prevY = y;
    ofPopMatrix();
  }
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
