#include "vector3.h"


vector3::vector3()
	: m_X(0.0), m_Y(0.0), m_Z(0.0)
{
	// Nothing to do.
}

vector3::vector3(double x, double y, double z)
	: m_X(x), m_Y(y), m_Z(z)
{
	// Nothing to do.
}

double vector3::getX()
{
	return m_X;
}

double vector3::getY()
{
	return m_Y;
}

double vector3::getZ()
{
	return m_Z;
}
