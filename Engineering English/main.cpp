/*
  Innocent Niyibizi
  4-16-17
  Kattis: 'Engineering English'
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string lowercase(string orig)
{
  string newWord = "";
  for(int i =0; i<orig.length(); i++)
  {
    newWord+=tolower(orig[i]);
  }
  return newWord;
}

int main()
{
  string usedWords = "", curr;
  while(getline(cin, curr))
  {
    istringstream iss(curr);
    string word;
    while(iss>>word)
    {
      if(usedWords.find("."+lowercase(word)+".")==string::npos)
      {
        cout<<word<<" ";
      }
      else
        cout<<"."<<" ";
      usedWords+="."+lowercase(word)+".";
    }
    cout<<endl;

  }
  return 0;
}
