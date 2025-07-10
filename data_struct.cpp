#include<iostream>
using namespace std;

class BaseClass {
public:
    // 公有成员
    int publicData;
 
protected:
    // 保护成员
    int protectedData;
};
 
class DerivedClass : public BaseClass {
public:
    // 在派生类中可以访问基类的保护成员
    void accessProtected() {
        protectedData = 42; // 正常访问
    }
 
private:
    // 派生类有自己的私有成员
    int derivedPrivate;
};
 
int main() {
    DerivedClass d;
    d.publicData = 10; // 可见，因为是公有的
    d.accessProtected(); // 可见，因为DerivedClass继承了BaseClass
 
    // BaseClass的对象尝试访问protectedData是不允许的
    // BaseClass base;
    // base.protectedData = 50; // 错误，protectedData仅对DerivedClass可见
 
    return 0;
}

