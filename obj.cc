#include <iostream>

using namespace std;

// 基类
class Animal {
private:
    string name;
public:
    Animal(string name) {
        
        this->name = name;
    }
    string showName() {
        cout << "name = " << this->name << endl;
        return this->name;
    }
};

// 派生类
class Dog: public Animal {
public:
    Dog():Animal("dog") {}
};



int main() {
    Dog d;
    d.showName();
    return 0;
}