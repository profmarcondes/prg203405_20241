#include <iostream>
#include <string>
#include "World.h"

using namespace std;

int main(){

    World objeto;
    World objeto2("Mordor");
    World objeto3("World");

    objeto.sayHello();
    objeto2.sayHello();
    objeto3.sayHello();

    return 0;
}