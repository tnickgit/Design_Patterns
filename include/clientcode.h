#pragma once
#include <iostream>
#include <string>

#include "director.h"
#include "carbuilder.h"
#include "manualbuilder.h"

void ClientCode1(Director& director);
void ClientCode2(Director& director);
void ClientCode3(Director& director);
std::pair<Car*, Manual*> ClientCode4(Director& director);