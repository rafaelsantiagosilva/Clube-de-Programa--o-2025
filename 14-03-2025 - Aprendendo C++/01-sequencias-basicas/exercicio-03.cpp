#include <iostream>

using namespace std;

int main()
{
  string nomeFuncionario;
  float salarioFuncionario;

  cin >> nomeFuncionario >> salarioFuncionario;

  /*
    A linha acima é a mesma coisa que:
    cin >> nomeFuncionario;
    cin >> salarioFuncionario;
  */

  cout << nomeFuncionario << " recebe R$ " << salarioFuncionario << "\n";

  return 0;
}