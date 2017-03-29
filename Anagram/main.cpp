/*
  Innocent Niyibizi
  3-28-17
  Kattis: 'Anagram Counting'
*/
//Implement big number
#include <iostream>
#include <string.h>

long long int fact(const long long int n)
{
  long long int temp;
  if(n<=1)
    return 1;
  temp = n * fact(n-1);
  std::cout<<temp<<std::endl;
  return temp;
}

int main()
{
  std::string phrase;
  while(std::cin>>phrase)
  {
    std::cout<<fact(phrase.length())<<std::endl;
  }
  return 0;
}
