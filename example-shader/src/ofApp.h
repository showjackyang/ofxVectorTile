//
//  ofxTangramTile
//
//  Created by Patricio Gonzalez Vivo on 10/10/14.
//
//

#pragma once

#include "ofMain.h"
#include "ofxTangramTile.h"
#include "ofxTangramLabels.h"
#include "ofxTangramBuilder.h"

class ofApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofEasyCam   cam;
    ofLight     light;
    ofFbo       fbo;
    ofShader    shader;
    
    ofxTangramTile      tile;
    ofxTangramBuilder   builder;
    ofxTangramLabels    labels;
    ofVboMesh           tileMesh;
    
    bool    bShader;
};