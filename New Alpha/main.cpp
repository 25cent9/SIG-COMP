/*
  Innocent Niyibizi
  3-28-17
  Kattis: 'A New Alphabet'
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <iostream>
using namespace std;
const string ALPHA[26] = {"@","8","(","|)","3","#","6","[-]","|","_|","|<","1",
"[]\\/[]","[]\\[]","0","|D","(,)","|Z","$","']['","|_|","\\/","\\/\\/","}{","`/","2"};


int main()
{
  string line, newLine="";
  char character;
  getline(cin, line);
  for(int i=0; i<line.length(); i++)
  {
    character = line[i];
    if(!isalpha(character))
      newLine+=line[i];
    else
      newLine+=ALPHA[tolower(character)-97];
  }
  cout<<newLine<<endl;
}
