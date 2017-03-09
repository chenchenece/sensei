#include "ofApp.h"
#include "ofxTimeMeasurements.h"

//========================================================================
int main() {
  // ofSetupOpenGL(640*2, 360*2, OF_WINDOW);
  ofSetupOpenGL(1920, 1080, OF_WINDOW);

  // Set the framework to something sane, otherwise the frame rate will be unbounded
  // and eat your CPU alive.
  ofSetFrameRate(30);
  ofSetVerticalSync(false);
  ofSetDataPathRoot("data");
  ofSetWindowTitle("sensei");
  ofSetFullscreen(true);

  TIME_SAMPLE_SET_FRAMERATE(30.0f);
  TIME_SAMPLE_GET_INSTANCE()->setUIActivationKey('T');
  TIME_SAMPLE_GET_INSTANCE()->setUiScale(2.0);
  TIME_SAMPLE_DISABLE();

  // this kicks off the running of my app
  // can be OF_WINDOW or OF_FULLSCREEN
  // pass in width and height too:
  ofRunApp(new ofApp());
}
