/*
  Innocent Niyibizi
  4-9-17
  Kattis: 'ABC'
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  short ABC[3];
  string input;
  for(short i = 0; i<3; i++)
    cin>>ABC[i];
  cin>>input;
  sort(ABC, ABC+3);
  for(short i = 0; i<3; i++)
  {
    if(input[i]=='A')
      cout<<ABC[0]<<" ";
    else if(input[i]=='B')
      cout<<ABC[1]<<" ";
    else
      cout<<ABC[2]<<" ";
  }
  return 0;
}
