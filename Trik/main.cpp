/*
  Innocent Niyibizi
  4-8-17
  Kattis: 'Trik'
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  string cups = "100", input;
  short size;
  cin>>input;
  size = input.length();
  for(int i =0; i<size; i++)
  {
    if(input[i]=='A')
      swap(cups[0], cups[1]);
    else if (input[i]=='B')
      swap(cups[1], cups[2]);
    else
      swap(cups[2], cups[0]);
  }
  cout<<cups.find('1')+1<<endl;
  return 0;
}
