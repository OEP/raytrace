#include <vector>
#include <math.h>

#include <png++/png.hpp>

#include "SceneManager.h"
#include "Sphere.h"

SceneManager::SceneManager()
{
	setViewport(640,480);
	setProjectionPlane(0,0,1.0,0.75);
	setCameraBacking(0.5);
}

SceneManager::~SceneManager()
{
	while(m_Spheres.size() > 0)
	{
		Sphere *p = m_Spheres.back();
		m_Spheres.pop_back();
		delete p;
	}
}

void
SceneManager::addSphere(double x, double y, double z, double r)
{
	Sphere *p = new Sphere(x,y,z,r);
	m_Spheres.push_back(p);
}

void
SceneManager::setViewport(int width, int height)
{
	m_Viewport = vector3(width, height, 0);
}

void
SceneManager::setProjectionPlane(double x, double y, double w, double h)
{
	m_ProjectionPosition = vector3(x,y,0);
	m_ProjectionSize = vector3(w,h,0);
	resyncCameraBacking();
}

void
SceneManager::setCameraBacking(double z)
{
	// Projection position components.
	double px = m_ProjectionPosition.getX();
	double py = m_ProjectionPosition.getY();
	double pz = m_ProjectionPosition.getZ();

	// Projection size components.
	double pw = m_ProjectionSize.getX();
	double ph = m_ProjectionSize.getY();

	z = abs(z);
	
	m_CameraPosition = vector3(px + pw/2, py + ph/2, pz + z);
}

void
SceneManager::resyncCameraBacking()
{
	setCameraBacking( m_CameraPosition.getZ() );
}

void SceneManager::render(const char *filename)
{
	int width = m_Viewport.getX();
	int height = m_Viewport.getY();

	png::image<png::rgb_pixel> image(width, height);

	for(size_t y = 0; y < image.get_height(); y++)
	{
		for(size_t x = 0; x < image.get_width(); x++)
		{
			png::rgb_pixel color;
			computeColor(x, y, color);
			image[y][x] = color;
		}
	}

	image.write(filename);
}

void SceneManager::computeColor(int x, int y, png::rgb_pixel &color)
{
	color = png::rgb_pixel(x, 0, 0);
}
