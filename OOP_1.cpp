#include <iostream>
class Derivative {
public:
    Derivative(double x, double h = 0.001) : x(x), h(h) {}

    double function(double x) {
        return pow(x, 2);
    }
protected:
    double x;
    double h;
};

class Right : public Derivative {
public:
    Right(double x, double h = 0.001) : Derivative(x, h) {}

    double right() {
        return (function(x + h) - function(x)) / h;
    }

};

class Left : public Derivative {
public:
    Left (double x, double h = 0.001) : Derivative(x, h) {}

    double left() {
        return (function(x) - function(x - h)) / h;
    }

};

class Central : public Derivative {
public:
    Central(double x, double h = 0.001) : Derivative(x, h) {}

    double central() {
        return (function(x + h) - function(x - h)) / (2 * h);
    }

};

int main()
{
    double x = 3;
    Left f(x);

    std::cout << f.left() << std::endl;    // 6.001
}

