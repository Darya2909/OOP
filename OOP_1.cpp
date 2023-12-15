#include <iostream>
class Derivative {
public:
    virtual double function(double x) = 0;
    virtual double derivative() = 0;

};

class Right : public Derivative {
public:
    Right(double x, double h = 0.001) : x(x), h(h) {}

        double function(double x) override {
        return pow(x, 2);
    }

    double derivative() override {
        return (function(x + h) - function(x)) / h;
    }
                
private:
    double x;
    double h;

};

class Left : public Derivative {
public:
    Left(double x, double h = 0.001) : x(x), h(h) {}

        double function(double x) override {
        return pow(x, 2);
    }

    double derivative() override {
        return (function(x) - function(x - h)) / h;
    }

private:
    double x;
    double h;

};

class Central : public Derivative {
public:
    Central(double x, double h = 0.001) : x(x), h(h) {}

        double function(double x) override {
        return pow(x, 2);
    }

    double derivative() override {
        return (function(x + h) - function(x - h)) / (2 * h);
    }

private:
    double x;
    double h;

};


int main()
{
    double x = 3;
    Derivative* f = new Left(x);

    std::cout << f->derivative() << std::endl;   

    delete f;

    return 0;
};