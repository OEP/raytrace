#include <vector>

#include "SceneManager.h"
#include "Sphere.h"

SceneManager::SceneManager()
{
	setViewport(640,480);
	setProjectionPlane(0,0,1.0,0.75);
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
}

void SceneManager::render(const char *filename)
{
	// TODO
}
