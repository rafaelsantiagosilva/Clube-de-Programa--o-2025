#include <iostream>

using namespace std;

int main()
{
  float salarioFuncionario;
  const float PORCENTAGEM_DE_AUMENTO = 15;

  cin >> salarioFuncionario;

  cout << salarioFuncionario + (salarioFuncionario * PORCENTAGEM_DE_AUMENTO / 100) << endl;

  return 0;
}