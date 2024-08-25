#include <iostream>
using namespace std;

#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

void GetShapeArea(Shape* shape_ptr) {
	shape_ptr->GetArea();
}
void GetShapesAreas(Shape* shape_ptr_arr[], int size) {
	for (int i = 0; i < size; i++) {
		shape_ptr_arr[i]->GetArea();
	}
}
int main()
{
	/*Shape* shape_ptr1 = new Rectangle(4, 7);
	Shape* shape_ptr2 = new Square(5);
	shape_ptr1->GetArea();*/

	Rectangle r1(10,5);
	Shape* p = &r1;
	GetShapeArea(p);

	Square sq1(6);
	Shape* p2 = &sq1;
	GetShapeArea(p2);

	Shape* shapes_arr[3];
	shapes_arr[0] = new Rectangle(4, 9);
	shapes_arr[1] = new Square(6);
	shapes_arr[2] = new Circle(8);

	GetShapesAreas(shapes_arr, 3);








}

