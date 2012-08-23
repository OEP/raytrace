
#include "Ray.h"

Ray::Ray()
: m_Origin( vector3(0,0,0)), m_Direction( vector3(0,0,0))
{
	// Nothing to do
}

Ray::Ray(vector3 &origin, vector3 &direction)
{
	m_Origin = vector3( origin );
	m_Direction = direction.normalize();
}
