/*
  Innocent Niyibizi
  4-1-17
  Kattis: 'Reverse Rot'
*/

#include <iostream>
#include <string.h>
using namespace std;
const char CHARS[28]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
                      'O','P','Q','R','S','T','U','V','W','X','Y','Z','_','.'};

void encrypt(string& orig, const int rotate)
{
  int length = orig.length();
  for(unsigned int i = 0; i<length/2; i++)
  {
    swap(orig[i], orig[length-i-1]);
  }

  for(unsigned int i =0; i<length; i++)
  {
    if(orig[i]=='_')
    {
      orig[i]=CHARS[((26)+rotate)%28];
    }
    else if(orig[i]=='.')
    {
      orig[i]=CHARS[((27)+rotate)%28];
    }
    else
    {
      orig[i]=CHARS[((orig[i]-65)+rotate)%28];
    }
  }
  return;
}

int main()
{
  int rotate = -1;
  string originalWord;
  while(rotate!=0)
  {
    cin>>rotate;
    if(rotate==0)
    {
      break;
    }
    cin>>originalWord;
    encrypt(originalWord, rotate);
    cout<<originalWord<<endl;
  }
  return 0;
}
