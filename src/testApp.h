#pragma once

#include "ofMain.h"

class testApp : public ofBaseApp{
 public:
  void setup();
  void update();
  void draw();
  
  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y);
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);
  
 private:
  int numPoints;
  float A1, A2, A3, A4;
  float f1, f2, f3, f4;
  float p1, p2, p3, p4;
  float d1, d2, d3, d4;
  float width, height;
  float prevX, prevY;
  float x,y;
  float t;
};
