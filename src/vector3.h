#ifndef VECTOR3_H_
#define VECTOR3_H_

class vector3
{
	private:
		double m_X;
		double m_Y;
		double m_Z;
	protected:
	public:
		vector3();
		vector3(double,double,double);
		double getX();
		double getY();
		double getZ();
		double magnitude();

		vector3 normalize();
};
#endif
