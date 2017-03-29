/*
  Innocent Niyibizi
  3-27-17
  Kattis 'Aaah!'
*/

#include <iostream>
#include <string.h>

int main()
{
  std::string jon, doc;
  std::cin>>jon>>doc;
  if(jon.find('h') < doc.find('h'))
    std::cout<<"no"<<std::endl;
  else
    std::cout<<"go"<<std::endl;

  return 0;
}
