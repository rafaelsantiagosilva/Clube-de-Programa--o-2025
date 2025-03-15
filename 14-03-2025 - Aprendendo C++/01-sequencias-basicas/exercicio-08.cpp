#include <iostream>

using namespace std;

int main()
{
  float distanciaEmMetros;
  cin >> distanciaEmMetros;

  cout << distanciaEmMetros / 1000 << "Km" << '\n';
  cout << distanciaEmMetros / 100 << "Hm" << '\n';
  cout << distanciaEmMetros / 10 << "Dam" << '\n';
  cout << distanciaEmMetros * 10 << "dm" << '\n';
  cout << distanciaEmMetros * 100 << "cm" << '\n';
  cout << distanciaEmMetros * 1000 << "mm" << '\n';

  return 0;
}