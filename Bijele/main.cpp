/*
  Innocent Niyibizi
  3-28-17
  Kattis: 'Bijele'
*/

#include <iostream>

int main()
{
  short pieces[6] = {1, 1, 2, 2, 2, 8};
  short input;
  for(short i =0; i<6; i++)
  {
    std::cin>>input;
    std::cout<<pieces[i]-input<<" ";
  }
  std::cout<<std::endl;
}
