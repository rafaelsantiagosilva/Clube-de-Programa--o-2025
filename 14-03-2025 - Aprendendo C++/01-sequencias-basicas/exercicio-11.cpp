#include <iostream>

using namespace std;

int main()
{
  float a, b, c, delta;

  cin >> a >> b >> c;

  delta = b * b - 4 * a * c;

  cout << "DELTA=" << delta;

  return 0;
}