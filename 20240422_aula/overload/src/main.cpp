#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Box {
	double _width;
	double _height;
	double _breadth;

public:
	Box(double w = 1.0, double h = 1.0, double b = 1.0){
		_width = w;
		_height = h;
		_breadth = b;
	}

	double width() { return _width; }
	double height() { return _height; }
	double breadth() { return _breadth; }
	double volume() const { return _width * _height * _breadth; }

	bool operator<(const Box& arg){
		return this->volume() < arg.volume();
	}

	friend Box operator+(const Box& arg1, const Box& arg2);
	friend ostream& operator<<(ostream& out, const Box& arg); 
};

ostream& operator<<(ostream& out, const Box& arg){
	out << "Box(" << arg._width << ",";
	out << arg._height << ",";
	out << arg._breadth << ")";
	out << " volume = " << arg.volume();

	return out;
}

Box operator+(const Box& arg1, const Box& arg2) {
	Box result(0,0,0);

	result._width = arg1._width + arg2._width;
	result._height = arg1._height + arg2._height;
	result._breadth = arg1._breadth + arg2._breadth;

	return result;
}


int main() {

	cout << "Hello, Overload !!!" << endl;

	vector<Box> boxes;
	boxes.push_back(Box(20,7,2));
	boxes.push_back(Box());
	boxes.push_back(Box(2,4,5));

	for(auto item: boxes){
		cout << item << endl;
	}

	boxes[1] = boxes[0] + boxes[2];

	cout << "Added boxes [0] + [2]" << endl;
	for(auto item: boxes){
		cout << item << endl;
	}

	sort(boxes.begin(), boxes.end());

	cout << "Sorted boxes" << endl;
	for(auto item: boxes){
		cout << item << endl;
	}

	return 0;
}