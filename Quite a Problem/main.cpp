/*
  Innocent Niyibizi
  4-6-17
  Kattis: 'Quite A Problem'
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  const string SUBSTRING = "problem";

  string line;
  short length;
  while(getline(cin, line))
  {
    length = line.length();
    for(short i = 0; i<length; i++)
      line[i] = tolower(line[i]);
    if(line.find(SUBSTRING) != -1)
    {
      cout<<"yes"<<endl;
    }
    else
    {
      cout<<"no"<<endl;
    }
  }
  return 0;
}
