#include <iostream>
#include <math.h>

#include <png++/png.hpp>

#include "SceneManager.h"
#include "Sphere.h"

int main(int argc, char **argv)
{
	SceneManager mgr;

	mgr.setViewport(640, 480);

	mgr.addSphere(.0,.0,.0,1.0);

	mgr.render("scene.png");
}
