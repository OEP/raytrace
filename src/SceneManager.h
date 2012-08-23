#ifndef SCENEMANAGER_H_
#define SCENEMANAGER_H_

#include <vector>

#include <png++/png.hpp>

#include "Sphere.h"
#include "vector3.h"

class SceneManager
{
	private:
		std::vector<Sphere*> m_Spheres;
		vector3 m_Viewport;
		vector3 m_ProjectionPosition;
		vector3 m_ProjectionSize;
		vector3 m_CameraPosition;
		
		void resyncCameraBacking();
		void computeColor(int, int, png::rgb_pixel&);
		
	protected:
	public:
		SceneManager();
		~SceneManager();

		void addSphere(double x, double y, double z, double r);
		void setViewport(int, int);
		void setProjectionPlane(double,double,double,double);
		void render(const char*);
		void setCameraBacking(double);
};

#endif
