/*
  Innocent Niyibizi
  4-6-17
  Kattis: 'A Different Problem'
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  long long left, right, diff;
  while(std::cin>>left)
  {
    std::cin>>right;
    diff = left-right;
    cout<<llabs(diff)<<endl;
  }
  return 0;
}
