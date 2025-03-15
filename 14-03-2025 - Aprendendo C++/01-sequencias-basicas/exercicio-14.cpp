#include <iostream>

using namespace std;

int main()
{
  float quantidadeKmPercorridos, precoKmPagar, precoDiasPagar;
  int quantidadeDeDiasQueCarroFoiAlugado;

  const float PRECO_POR_KM_RODADO = 0.2, PRECO_POR_DIA = 90;

  cin >> quantidadeKmPercorridos >> quantidadeDeDiasQueCarroFoiAlugado;

  precoKmPagar = quantidadeKmPercorridos * PRECO_POR_KM_RODADO;
  precoDiasPagar = quantidadeDeDiasQueCarroFoiAlugado * PRECO_POR_DIA;

  cout << "R$" << precoKmPagar + precoDiasPagar << '\n';

  return 0;
}