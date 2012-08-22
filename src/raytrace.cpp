#include <math.h>
#include <png++/png.hpp>

int main(int argc, char **argv)
{
	png::image< png::rgb_pixel > image(128,128);
	for(size_t y = 0; y < image.get_height(); y++)
	{
		for(size_t x = 0; x < image.get_width(); x++)
		{
			double dmp = (1+abs(cos(0.01*(double)x)))/2;
			image[y][x] = png::rgb_pixel(dmp*x, dmp*y, dmp * (x+y));
		}
	}
	image.write("output.png");
}


