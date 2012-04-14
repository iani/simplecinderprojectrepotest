#include "cinder/app/AppBasic.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class testproject1App : public AppBasic {
  public:
	void prepareSettings( Settings *settings );
	void setup();
	void mouseDown( MouseEvent event );	
	void update();
	void draw();
};

void testproject1App::setup()
{
}

void testproject1App::mouseDown( MouseEvent event )
{
}

void testproject1App::update()
{
}

float frand () { return ((float)(rand() % 256)) / 255; }

void testproject1App::prepareSettings( Settings *settings ){
	settings->setFrameRate( 3 );
	settings->setWindowSize( 1024, 768 );
}

void testproject1App::draw()
{
	// clear out the window with black
	gl::clear( Color( frand(), frand(), frand() ) ); 
}


CINDER_APP_BASIC( testproject1App, RendererGl )
