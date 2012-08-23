#include <vector>

#include "SceneManager.h"
#include "Sphere.h"

SceneManager::SceneManager()
{
	// Nothing to do.
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
SceneManager::setViewport(int x, int y, int width, int height)
{
	m_ViewportPosition = vector3(x,y,0);
	
}

void SceneManager::render(const char *filename)
{
	// TODO
}
