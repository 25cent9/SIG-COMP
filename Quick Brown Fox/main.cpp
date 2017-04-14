/*
  Innocent Niyibizi
  4-14-17
  Kattis: 'Quick Brown fox'
*/

#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main()
{
  bool letters[26]={false};
  string phrase, ws, missing="";
  int testCases, length=0;
  cin>>testCases;
  cin.ignore();
  for(int i = 0; i<testCases; i++)
  {
    getline(cin, phrase);
    missing = "";
    length = phrase.length();
    for(int j = 0; j<length; j++)
    {
      if(isalpha(phrase[j]))
      {
        letters[tolower(phrase[j])-97] = true;
      }
    }
    for(int j=0; j<26; j++)
    {
      if(letters[j]==false)
        missing+=static_cast<char>(j+97);
      letters[j]=false;
    }
    cout<<((missing.length()<1)?"pangram":"missing "+missing)<<endl;
  }
  return 0;
}
