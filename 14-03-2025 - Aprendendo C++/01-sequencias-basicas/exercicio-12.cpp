#include <iostream>

using namespace std;

int main()
{
  float precoProduto;
  const float DESCONTO_EM_PORCENTAGEM = 5;

  cin >> precoProduto;

  cout << precoProduto - (precoProduto * DESCONTO_EM_PORCENTAGEM / 100);
  return 0;
}