// Innocent Niyibizi
// 3-29-17
// Kattis: 'Detailed Differences'

#include <iostream>

int main()
{
  std::string first, second;
  unsigned int tests;
  unsigned short length;
  std::cin>>tests;
  for(int i=0; i<tests; i++)
  {
    std::cin>>first>>second;
    length=first.length();
    std::cout<<first<<std::endl<<second<<std::endl;
    for(int j=0; j<length; j++)
    {
      if(first[j]==second[j])
        std::cout<<".";
      else
        std::cout<<"*";
    }
    std::cout<<std::endl<<std::endl;
  }
  return 0;
}
