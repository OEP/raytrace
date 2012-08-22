#include<math.h>
#include "Sphere.h"

Sphere::Sphere(double x, double y, double z, double r)
	: m_X(x), m_Y(y), m_Z(z), m_R(r)
{
	// Nothing to do.	
}

bool Sphere::contains(double x, double y, double z)
{
	double dx = m_X - x;
	double dy = m_Y - y;
	double dz = m_Z - z;
	return sqrt( dx*dx + dy*dy + dz*dz ) < m_R;
}
