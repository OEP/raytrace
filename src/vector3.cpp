#include "math.h"
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

double vector3::magnitude()
{
	return sqrt( m_X*m_X + m_Y*m_Y + m_Z*m_Z);
}

vector3 vector3::normalize()
{
	double mag = magnitude();
	return vector3(m_X/mag, m_Y/mag, m_Z/mag);	
}

vector3 vector3::operator+(vector3 other)
{
	return vector3(m_X + other.getX(),
		m_Y + other.getY(),
		m_Z + other.getZ());
}

vector3 vector3::operator-(vector3 other)
{
	return vector3(m_X - other.getX(),
		m_Y - other.getY(),
		m_Z - other.getZ());
}

double vector3::operator*(vector3 other)
{
	return m_X * other.getX() + m_Y * other.getY() + m_Z + other.getZ();
}
