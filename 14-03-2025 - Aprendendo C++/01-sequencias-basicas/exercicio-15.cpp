#include <iostream>

using namespace std;

int main()
{
  const int HORAS_TRABALHADAS_POR_DIA = 8;
  const float VALOR_HORA_TRABALHADA = 25; // reais

  int diasTrabalhadosNoMes, totalHorasTrabalhadasNoMes;
  float salario;

  cin >> diasTrabalhadosNoMes;

  totalHorasTrabalhadasNoMes = diasTrabalhadosNoMes * HORAS_TRABALHADAS_POR_DIA;
  salario = totalHorasTrabalhadasNoMes * VALOR_HORA_TRABALHADA;

  cout << "R$" << salario << endl;
  return 0;
}