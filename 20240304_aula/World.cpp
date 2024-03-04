#include "World.h"
#include <iostream>


void World::sayIt(string msg){
    cout << msg << " " << nome << "! (( " << this << " ))" << endl;
}

World::World(string p1){
    nome = p1;
}

World::World(){
    nome = "Undefined";
}

void World::sayHello() {
    sayIt("Hello");
}