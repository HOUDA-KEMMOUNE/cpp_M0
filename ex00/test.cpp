#include <iostream>
#include <string>

int	main()
{
	// Calculating the area of a rectangle: width * height
	int		height;
	int		width;
	int		area;


	height = 20;
	width = 30;
	area = height * width;

	std::cout << "The height is: " << height << std::endl;
	std::cout << "The width is: " << width << std::endl;
	std::cout << "The area is: " << area << std::endl;
	
	return (0);
}
