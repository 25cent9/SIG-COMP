/*
  Innocent Niyibizi
  3-31-17
  Kattis: 'Modular Arithmetic'
*/

#include <iostream>
#include <math.h>

int main()
{
  int a, total=0;
  unsigned int b;
  std::cin>>a>>b;
  for (int i = 1; i<=a; i++)
  {
    total+=pow(i,b);
    //std::cout<<total<<std::endl;
  }
  total%=a;
  std::cout<<total<<std::endl;
  return 0;
}
