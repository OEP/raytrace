#ifndef RAY_H_
#define RAY_H_

#include "vector3.h"

class Ray
{
	private:
		vector3 m_Origin;
		vector3 m_Direction;
	protected:
	public:
		Ray();
		Ray(vector3&, vector3&);
};
#endif
