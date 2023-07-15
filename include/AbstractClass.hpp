#pragma once

#include <iostream>

class AbstractClass
{
public:
    void templateMethod() const;

protected:
    void basicOperation1() const;
    void basicOperation2() const;
    void basicOperation3() const;
    virtual void requiredOperation1() const = 0;
    virtual void requiredOperation2() const = 0;
    virtual void hook1()const;
    virtual void hook2()const;
};
