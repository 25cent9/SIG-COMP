/*
  Innocent Niyibizi
  4-2-17
  Kattis: 'Soylent'
*/

const int botCalories = 400;
#include <iostream>

int main()
{
  int testCases = 0, numCalories = 0, numBots = 0;
  std::cin>>testCases;
  for(int i=0; i<testCases; i++)
  {
    std::cin>>numCalories;
    numBots = (numCalories/botCalories);
    if(numBots<1)
    {
      numBots = 1;
    }
    std::cout<<numBots<<std::endl;
  }
  return 0;
}
