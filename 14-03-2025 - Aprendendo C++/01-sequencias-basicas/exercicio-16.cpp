#include <iostream>
#include <iomanip> // input and output manipulation

using namespace std;

int main()
{
  const double PERDA_DE_VIDA_POR_CIGARRO_EM_MINUTOS = 10;
  const double HORAS_NO_DIA = 24;
  const double DIAS_NO_ANO = 365;
  const double MINUTOS_EM_UMA_HORA = 60;

  double quantidadeDeCigarrosFumadosPorDia, quantidadeDeAnosComoFumante;
  double quantidadeDeDiasPerdidos, minutosPerdidosPorDia, horasPerdidasPorDia;
  double quantidadeDeDiasComoFumante;

  cin >> quantidadeDeCigarrosFumadosPorDia >> quantidadeDeAnosComoFumante;

  minutosPerdidosPorDia = quantidadeDeCigarrosFumadosPorDia * PERDA_DE_VIDA_POR_CIGARRO_EM_MINUTOS;
  horasPerdidasPorDia = minutosPerdidosPorDia / MINUTOS_EM_UMA_HORA;

  quantidadeDeDiasComoFumante = DIAS_NO_ANO * quantidadeDeAnosComoFumante;
  quantidadeDeDiasPerdidos = horasPerdidasPorDia / HORAS_NO_DIA * quantidadeDeDiasComoFumante;

  // fixar em 2 casas decimais
  cout << fixed << setprecision(2) << quantidadeDeDiasPerdidos << '\n';

  return 0;
}