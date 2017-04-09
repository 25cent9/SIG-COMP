/*
  Innocent Niyibizi
  4-8-17
  Kattis: 'Pet'
*/

#include <iostream>

int main()
{
  short index=0, score=0, input, temp=0;
  for(short i = 0; i<5; i++)
  {
    temp = 0;
    for(short j = 0; j<4; j++)
    {
      std::cin>>input;
      temp+=input;
    }
    if(temp>score)
    {
      score = temp;
      index = i;
    }
  }
  std::cout<<index+1<<" "<<score<<std::endl;
  return 0;
}
