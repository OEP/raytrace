#ifndef SPHERE_H_
#define SPHERE_H_

class Sphere {
	private:
		double m_X;
		double m_Y;
		double m_Z;
		double m_R;
	protected:
	public:
		Sphere(double,double,double,double);

		bool contains(double, double, double);
};
#endif
