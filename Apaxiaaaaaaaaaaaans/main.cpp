/*
  Innocent Niyibizi
  3-28-17
  Kattis: 'Apaxiaaaaaaaaaaaans'
*/

#include <iostream>

int main()
{
  std::string curr, newString="";
  char prev=' ';
  std::cin>>curr;
  for(short i = 0; i<curr.length(); i++)
  {
    if(prev!=curr[i])
      newString += curr[i];
    prev = curr[i];
  }
  std::cout<<newString<<std::endl;
}
