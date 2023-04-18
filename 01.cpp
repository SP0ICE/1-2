#include <iostream>
class Road {
	public:
	double length;
	int width;
};
int main() {
	using namespace std;
	Road road;
	road.length=12.3;
	road.width=5;
	cout <<"Type length of road, m";
	cin>> road.length;
	cout<<"road.length"<<road.length<<endl;
	cout<<"Type width of road, m";
	cin>>road.width;
	cout<<"road.width"<<road.width<<endl;
	return 0;
}