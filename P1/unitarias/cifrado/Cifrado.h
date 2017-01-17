//
// Created by marcoslopez7 on 17/01/17.
//
#pragma once

#include <string>

class Cifrado{
public:
    Cifrado();

private:

protected:
    virtual void decrypt() = 0;

};

Cifrado::Cifrado() { }