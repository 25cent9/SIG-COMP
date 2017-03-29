// Innocent Niyibizi
// 3-28-17
// Kattis: 'Cold-puter Science'

#include <iostream>

int main()
{
  short numTemp = 0;
  int numTempLess=0, temp;
  std::cin>>numTemp;
  for(short i = 0; i<numTemp; i++)
  {
    std::cin>>temp;
    if(temp<0)
      numTempLess++;
  }
  std::cout<<numTempLess<<std::endl;
}
