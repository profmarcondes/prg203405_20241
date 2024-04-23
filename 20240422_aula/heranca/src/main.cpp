#include <iostream>
#include <vector>

using namespace std;

class Shape {
	public:
		virtual double area() = 0;

		double cost() {
			cout << "Shape::cost() called!" << endl;
			return 0.0;
		}
};

class Rectangle: public Shape {
	public:
		Rectangle(double w = 1.0, double h = 1.0){
			_width = w;
			_height = h;
		}

		double area() {
			cout << "Rectangle::area() called!" << endl;
			return _width * _height;
		}

		friend ostream& operator<<(ostream &out, const Rectangle &arg){
			out << "Rectangle(" << arg._width << "," << arg._height << ")";
			return out;
		}

	private:
		double _width;
		double _height;
};

class Circle: public Shape {
	public:
		Circle(double r = 1.0){
			_radius = r;
		}

		double area() {
			cout << "Circle::area() called!" << endl;
			return _radius * _radius * 3.14159;
		}

		friend ostream& operator<<(ostream &out, const Circle &arg){
			out << "Circle(" << arg._radius << ")";
			return out;
		}

	private:
		double _radius;
};

class EquilateralTriangle: public Shape {
	public:
		EquilateralTriangle(double w = 1.0){
			_width = w;
		}

		double area() {
			cout << "EquilateralTriangle::area() called!" << endl;
			return _width * _width * 0.433013;
		}

		friend ostream& operator<<(ostream &out, const EquilateralTriangle &arg){
			out << "EquilateralTriangle(" << arg._width << ")";
			return out;
		}

	private:
		double _width;
};

int main() {
	cout << "Hello, Heranca!!!" << endl;

	vector<Shape*> canvas;

	canvas.push_back(new Rectangle(3.4, 7.8));
	canvas.push_back(new Circle(5.75));
	canvas.push_back(new EquilateralTriangle(10.45));
	canvas.push_back(new Rectangle(7.0, 10.0));
	canvas.push_back(new Circle(0.45));
	canvas.push_back(new EquilateralTriangle(1.245));
	
	double totalArea = 0;

	for(auto ptr: canvas){
		cout << "Area = " << ptr->area() << endl;
		totalArea += ptr->area();
	}

	cout << "Area total = " << totalArea << endl;


	return 0;

}