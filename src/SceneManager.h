#ifndef SCENEMANAGER_H_
#define SCENEMANAGER_H_

#include <vector>

#include "Sphere.h"

class SceneManager
{
	private:
		std::vector<Sphere*> m_Spheres;
		
		
	protected:
	public:
		SceneManager();
		~SceneManager();

		void addSphere(double x, double y, double z, double r);
};

#endif
