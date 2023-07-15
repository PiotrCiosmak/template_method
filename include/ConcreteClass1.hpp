#pragma once

#include "AbstractClass.hpp"

class ConcreteClass1 : public AbstractClass
{
protected:
    void requiredOperation1() const override;
    void requiredOperation2() const override;
};
