#include <iostream>
#include <memory>
#include "include/ConcreteClass1.hpp"
#include "include/ConcreteClass2.hpp"

void clientCode(const std::shared_ptr<AbstractClass>& abstract_class);

int main()
{
    std::cout << "Same client code can work with different subclasses:\n";
    std::shared_ptr<ConcreteClass1> concrete_class_1 = std::make_shared<ConcreteClass1>();
    clientCode(concrete_class_1);

    std::cout << "\nSame client code can work with different subclasses:\n";
    std::shared_ptr<ConcreteClass2> concrete_class_2 = std::make_shared<ConcreteClass2>();
    clientCode(concrete_class_2);
    return 0;
}

void clientCode(const std::shared_ptr<AbstractClass>& abstract_class)
{
    abstract_class->templateMethod();
}
