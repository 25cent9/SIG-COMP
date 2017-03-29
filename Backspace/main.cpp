/*
  Innocent Niyibizi
  3-29-17
  Kattis: 'Backspace'
*/

#include <iostream>
using namespace std;

int main()
{
  string input;
  cin>>input;
  for(int i=0; i<input.length(); i++)
  {
    if(input[i]=='<')
    {
      input=input.substr(0, i-1)+input.substr(i+1, input.length()-1);
      i-=2;
    }
  }
  cout<<input<<endl;
  return 0;
}
