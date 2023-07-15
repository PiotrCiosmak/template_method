#pragma once

#include "AbstractClass.hpp"

class ConcreteClass2 : public AbstractClass
{
protected:
    void requiredOperation1() const override;
    void requiredOperation2() const override;
    void hook1() const override;
};
