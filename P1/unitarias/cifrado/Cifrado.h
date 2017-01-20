//
// Created by marcoslopez7 on 17/01/17.
//
#pragma once

#include <string>
#include <iostream>
using namespace std;
class Cifrado{
public:
    Cifrado();

private:

public:
    virtual string decrypt() = 0;

};

Cifrado::Cifrado() { }