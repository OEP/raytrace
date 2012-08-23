#ifndef SCENEMANAGER_H_
#define SCENEMANAGER_H_

#include <vector>

#include "Sphere.h"
#include "vector3.h"

class SceneManager
{
	private:
		std::vector<Sphere*> m_Spheres;
		vector3 m_ViewportPosition;
		vector3 m_ViewportWidth;
		

		
	protected:
	public:
		SceneManager();
		~SceneManager();

		void addSphere(double x, double y, double z, double r);
		void setViewport(int, int, int, int);
		void render(const char*);
};

#endif
