#include<iostream>
using namespace std;

class Point {
public:
	constexpr Point(double xVal = 0, double yVal = 0) noexcept
		: x(xVal), y(yVal)
	{}

	constexpr double xValue() const noexcept { return x; }
	constexpr double yValue() const noexcept { return y; }

	void setX(double newX) noexcept { x = newX; }
	void setY(double newY) noexcept { y = newY; }



private:
	double x, y;



};


constexpr Point midpoint(const Point& p1, const Point& p2) noexcept {
	return { (p1.xValue() + p2.xValue()) / 2, (p1.yValue() + p2.yValue()) / 2 };
}


 Point reflection(const Point& p) noexcept {
	Point result;
	result.setX(-p.xValue());
	result.setY(-p.yValue());
	return result;
}


int main() {
	constexpr Point p1(9.4, 27.7);
	constexpr Point p2(28.8, 5.3);


	constexpr auto mid = midpoint(p1, p2);

    auto reflectedMid = reflection(mid);

	cout << "Midpoint: (" << mid.xValue() << ", " << mid.yValue() << ")" << '\n';
	cout << "Reflected midpoint: (" << reflectedMid.xValue() << ", " << reflectedMid.yValue() << ")" << '\n';
}