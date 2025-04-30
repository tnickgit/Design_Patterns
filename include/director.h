#pragma once
#include <iostream>
#include <string>
#include "builder.h"

// Director works with any builder that client passes
class Director {
public:
    void makeSUV(Builder* builder);
    void makeSportsCar(Builder* builder);
    void makeLuxuryCar(Builder* builder);
};