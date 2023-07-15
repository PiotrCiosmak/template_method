#include "../include/ConcreteClass2.hpp"

void ConcreteClass2::requiredOperation1() const
{
    std::cout << "ConcreteClass2 says: Implemented Operation1\n";
}

void ConcreteClass2::requiredOperation2() const
{
    std::cout << "ConcreteClass2 says: Implemented Operation2\n";
}

void ConcreteClass2::hook1() const
{
    std::cout << "ConcreteClass2 says: Overridden Hook1\n";
}
