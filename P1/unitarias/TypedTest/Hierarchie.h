#include <iostream>
using namespace std;

class Base {
public:
    virtual int doSomething() = 0;
};

class Child1 : public Base  {
public:
    int doSomething() {
        cout << "Soy el 1\n";
        return 1;
    }

};

class Child2 : public Base  {
public:
    int doSomething() {
        cout << "Soy el 2\n";
        return 1;
    }

};

class Child3 : public Base  {
private:
    int v;

public:
    Child3(int v) : v(v){}

    int doSomething() {
        cout << "Soy el 3 y tengo " << v << endl;
        return 1;
    }

};