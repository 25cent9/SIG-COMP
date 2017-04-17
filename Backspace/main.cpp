/*
  Innocent Niyibizi
  3-29-17
  Kattis: 'Backspace'
*/

#include <iostream>
using namespace std;

int main()
{
  string input, output="";
  cin>>input;
  for(int i=0; i<input.length(); i++)
  {
    if(input[i]=='<')
    {
      output.erase(output.length()-1);
    }
    else
      output+=input[i];
  }
  cout<<output<<endl;
  return 0;
}
