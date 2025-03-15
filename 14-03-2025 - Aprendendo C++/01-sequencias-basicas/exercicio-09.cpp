#include <iostream>

using namespace std;

int main()
{
  float dinheiroNaCarteira, dolaresQuePodeComprar;
  const float VALOR_DOLAR_EM_REAIS = 3.45; // Criação de constante

  cin >> dinheiroNaCarteira;

  dolaresQuePodeComprar = dinheiroNaCarteira / VALOR_DOLAR_EM_REAIS;

  cout << dolaresQuePodeComprar << '\n';
  return 0;
}