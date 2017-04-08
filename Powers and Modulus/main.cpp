/*
  Innocent Niyibizi
  3-31-17
  Kattis: 'Powers and modulous'
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  unsigned int a;
  unsigned short b;
  long long sum, modSum;
  cin>>a>>b;
  for (int i = 0; i < a; i++)
  {
    sum+=(pow(i, b));
    cout<<sum<<endl;
  }
  modSum = sum%a;
  cout<<modSum<<endl;
  return 0;

}
