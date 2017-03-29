/*
  Innocent Niyibizi
  3-27-17
  Kattis: 'Oddities'
*/

#include <iostream>

int main()
{
  unsigned short nums;
  std::cin>>nums;
  short number;
  for(int i =0; i <nums; i++)
  {
    std::cin>>number;
    if(number & 1)
      std::cout<<number<<" is odd"<<std::endl;
    else
      std::cout<<number<<" is even"<<std::endl;
  }
  return 0;
}
