/*
  Innocent Niyibizi
  4-8-17
  Kattis: 'Grass Seed Inc.'
*/

#include <iostream>
#include <iomanip>

int main()
{
  double area, pricePer, len, width, total;
  short numLawns;
  std::cin>>pricePer>>numLawns;
  for(short i = 0; i<numLawns; i++)
  {
    std::cin>>len>>width;
    area+=(len*width);
  }
  total = (area*pricePer);
  std::cout << std::fixed;
  std::cout << std::setprecision(7);
  std::cout<<total<<std::endl;
  return 0;
}
