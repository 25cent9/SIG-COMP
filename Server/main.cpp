/*
  Innocent Niyibizi
  4-14-17
  Kattis: 'Server'
*/

#include <iostream>

int main()
{
  short numTasks, index;
  int maxTime, usedTime = 0, currTime;
  std::cin>>numTasks>>maxTime;
  for(index = 0; index<numTasks; index++)
  {
    std::cin>>currTime;
    if(usedTime+currTime > maxTime)
    {
      break;
    }
    else
    {
      usedTime+=currTime;
    }
  }
  std::cout<<index<<std::endl;
  return 0;
}
