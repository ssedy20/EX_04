#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{ //declaring class 'Rectangle'//
private:
	double x, y; //declares x and y as doubles, as well as width and height//
	double width, height;

public:
	Rectangle()
	{
		x = 0;
		y = 0;
		height = 1;
		width = 1;
	}

	Rectangle(double x, double y, double width, double height)
	{
		this->x = x;
		this->y = y;
		this->width = width;
		this->height = height;
	}

	double getX() const
	{
		return x;
	}
void SetX(double x)
	{
		this->x = x;
	}

double getY() const
{
	return y;
	}

void setY(double y)
{
	this->y = y;
}

double getWidth() const
{
	return width;
}
void setWidth(double width)
{
	this->width = width;
}
double getHeight() const
{
	return height;
}
void setHeight(double height)
{
	this->height = height;
}

double getPerimeter() const
{
	return 2 * width + 2 * height; //will solve for perimeter//
}

double getArea() const
{
	return width * height; //will solve for area//
}

bool contains(double x, double y) const
{
	return (abs(x - this->x) <= width, height) && (abs(y - this->y) <= width, height);
}
bool contains(const Rectangle &rectangle) const //if rectangle is located within a rectangle//
{
	return contains(rectangle.x - rectangle.width + rectangle.height, rectangle.y) && contains(rectangle.x + rectangle.width + rectangle.height, rectangle.y)
		&& contains(rectangle.x, rectangle.y - rectangle.width + rectangle.height) && contains(rectangle.x, rectangle.y + rectangle.width + rectangle.height);
}

bool overlaps(const Rectangle &rectangle) const //if rectangles overlap//
{
	return distance(x, y, rectangle.x, rectangle.y) <= width + rectangle.width;
	return distance(x, y, rectangle.x, rectangle.y) <= height + rectangle.height;
}

static double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}

};

int main()
{
	Rectangle r1(2, 2, 5.5, 4.9); //setting up rectangle 1//
	cout << "Area:" << r1.getArea() << endl;
	cout << "Perimeter:" << r1.getPerimeter() << endl;

	Rectangle r2(4, 5, 10.5, 3.2);
	cout << r1.contains(r2) << endl;
	
	Rectangle r3(3, 5, 2.3, 5.4);
	cout << r1.overlaps(r3) << endl;

	return 0;
}
