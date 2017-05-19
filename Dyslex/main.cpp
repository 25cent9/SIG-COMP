#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
void printIt(vector<string> &v, int width)
{
  sort(v.begin(), v.end());
  for(vector<string>::iterator it = v.begin(); it!=v.end(); it++)
  {
    reverse((*it).begin(), (*it).end());
    cout<<setw(width)<<*it<<endl;
  }
  v.clear();
}

int main()
{
  string word, rev;
  int maxLen = 0, len;
  vector<string> words;
  while(getline(cin, word))
  {
    len = word.length();
    if(len>maxLen)
      maxLen = len;
    if(word[0]-97>=0)
    {
      reverse(word.begin(), word.end());
      words.push_back(word);
    }
    else
    {
      printIt(words, maxLen);
      cout<<endl;
    }
  }
  printIt(words, maxLen);
  return 0;
}
