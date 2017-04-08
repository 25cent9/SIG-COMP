// Innocent Niyibizi
// 3-28-17
// Kattis: 'Left Beehind'

#include <iostream>

int main()
{
  unsigned int sweet, sour;
  do
  {
    std::cin>>sweet>>sour;
    if(sweet==0 && sour==0)
    {
      break;
    }
    else if(sweet+sour==13)
    {
      std::cout<<"Never speak again."<<std::endl;
    }
    else if(sweet>sour)
    {
      std::cout<<"To the convention."<<std::endl;
    }
    else if(sour>sweet)
    {
      std::cout<<"Left beehind."<<std::endl;
    }
    else if(sweet == sour && (sweet!=0 && sour!=0))
    {
      std::cout<<"Undecided."<<std::endl;
    }
  }while(sweet!=0 && sour!=0);
  return 0;
}
