#include <string>

using namespace std;

class World {
private:
    string nome;

public:
    World(string p1);
    World();
    void sayHello();

private:
    void sayIt(string msg);

};