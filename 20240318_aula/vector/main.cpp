#include <vector>
#include <iostream>  
using namespace std;

char* szHW = "Hello World";  

int main(int argc, char* argv[])
{
  vector<char> vec;
  vector<char>::iterator vi;

  char* cptr = szHW;
  while (*cptr != '\0') {  
     vec.push_back(*cptr);  
     cptr++;  
  }

  for (vi=vec.begin(); vi!=vec.end(); vi++) {  
      cout << *vi;  
  } 

    cout << endl << "HUGO== ";

  for (int i = 0; i < vec.size(); i++){
      cout << vec[i];
  }

  cout << endl;
  return 0;
}
