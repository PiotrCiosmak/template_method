#include "../include/AbstractClass.hpp"

void AbstractClass::templateMethod() const
{
    this->basicOperation1();
    this->requiredOperation1();
    this->basicOperation2();
    this->hook1();
    this->requiredOperation2();
    this->basicOperation3();
    this->hook2();
}

void AbstractClass::basicOperation1() const
{
    std::cout << "AbstractClass says: I am doing the bulk of the work\n";
}

void AbstractClass::basicOperation2() const
{
    std::cout << "AbstractClass says: But I let subclasses override some operations\n";
}

void AbstractClass::basicOperation3() const
{
    std::cout << "AbstractClass says: But I am doing the bulk of the work anyway\n";
}

void AbstractClass::hook1() const
{}

void AbstractClass::hook2() const
{}
