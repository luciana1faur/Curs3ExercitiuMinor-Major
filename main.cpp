#include <iostream>
using namespace std;

int main(){
  //Cere introducerea unui numar intreg reprezentand varsta operatorului.
  int varsta;
  cout << "Varsta operatorului este: ";
  cin >> varsta;

  //Testeaza daca acesta este major.
  if(varsta >= 18)
    cout << "Operatorul este major.";
      else 
        cout << "Operatorul este minor";

  return 0;
}