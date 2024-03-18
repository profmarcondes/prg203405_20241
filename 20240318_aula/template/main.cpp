#include <iostream>
using namespace std;

template<typename T>
class MyClass {
  T _atributo;

public:
  MyClass(T value) { _atributo = value; }
  T getAtributo() { return _atributo; }
};

int main(int argc, char* argv[])
{
  cout << "Hello Templates" << endl;

  MyClass<int> obj(5.5);

  cout << "Atribute = " << obj.getAtributo() << endl;

  return 0;
}
