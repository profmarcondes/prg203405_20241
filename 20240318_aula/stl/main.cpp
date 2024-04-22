#include <string.h>
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
	string line;
  int input;

	vector<int> numbers;
	vector<int>::iterator vi;

  cout << "Entre com a lista de valores do vetor: ";
  
  while (getline(cin, line)) {
      if (!line.empty()) {
         stringstream ss(line);
         while(ss >> input){

         }
      }
   }

  while (getline(cin, line)) {
      if (!line.empty()) {
         auto csv = parse_csv(line);
         Student s(csv);
         s.dump_info();
      }
   }


  return 0;

/*   do {
  //cout << "Entre com os valores (\"end\" para encerrar) : ";
      cin >> input;
      if(!cin.fail()){
          numbers.push_back(input);
          cout << "Added " << input << "/" << cin.tellg() << endl;
      } else {
    cin.clear();
    cin >> tmp;
    if(tmp == "end")
      break;
  }
  } while(!cin.eof()); */

	cout << "Os números informados foram: ";
	for (vi=numbers.begin(); vi!=numbers.end(); vi++) {
	   cout << *vi << " ";
	}
	cout << endl;

	cout << "O menor número informado é: " << *min_element(numbers.begin(), numbers.end()) << endl;
	cout << "O maior número informado é: " << *max_element(numbers.begin(), numbers.end()) << endl;

	sort(numbers.begin(), numbers.end());
	cout << "Ordem crescente dos números: ";
	for (vi=numbers.begin(); vi!=numbers.end(); vi++) {
		cout << *vi << " ";
	}
	cout << endl;

	cout << "Ordem decrescente dos números (Usando reverse interator): ";
	std::vector<int>::reverse_iterator rit;
	for (rit = numbers.rbegin(); rit!= numbers.rend(); rit++)
		cout << *rit << " ";
	
    cout << endl;

	return 0;
}