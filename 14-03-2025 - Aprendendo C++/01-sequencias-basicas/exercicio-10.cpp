#include <iostream>

using namespace std;

int main()
{
  float alturaParede, larguraParede, areaPintada, quantidadeTintaNecessaria;
  const int AREA_PINTADA_POR_LITRO_DE_TINTA = 2; // metros

  cin >> alturaParede >> larguraParede;

  areaPintada = alturaParede * larguraParede;
  quantidadeTintaNecessaria = areaPintada / AREA_PINTADA_POR_LITRO_DE_TINTA;

  cout << quantidadeTintaNecessaria << '\n';

  return 0;
}