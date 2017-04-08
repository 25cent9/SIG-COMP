/*
  Innocent Niyibizi
  4-4-17
  Kattis: 'Stack Construction'
*/
#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int main()
{
  short tests;
  int opCount = 0, msgIndex = 0;
  string msg, output="";
  stack<char> theStack;
  cin>>tests;
  for(int i = 0; i<tests; i++)
  {
    opCount = 0;
    msgIndex = 0;
    cin>>msg;
    while(output != msg || !theStack.empty())
    {
      if(theStack.empty())
      {
        theStack.push(msg[msgIndex++]);
        opCount++;
      }
      else
      {
        output+=theStack.top();
        theStack.pop();
        opCount++;
        cout<<output<<endl;
      }
    }
    cout<<opCount<<endl;
    cout<<output<<endl;
  }
  return 0;
}
