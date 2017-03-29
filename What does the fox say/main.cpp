// Innocent Niyibizi
// 3-28-17
// Kattis: 'What does the fox say'


#include <iostream>
#include <string.h>
using namespace std;
int main()
{
  string sounds[100]={" "};
  short tests, numSounds=0;
  cin>>tests;
  string input="", sound="", words="";
  cout<<tests<<endl;
  for(short i = 0; i<tests; i++)
  {
    getline(cin, words);
    cout<<i<<endl;
    cout<<words<<endl;
    for(int j =0; j< words.length(); j++)
    {
      if(input[j] !=' ')
        sound+=words[j];
      else
      {
        sounds[numSounds++]=sound;
        sound="";
      }
    }
    sounds[numSounds++]=sound;
    while(getline(cin, input))
    {
      //cout<<input<<endl;
      if(input.find(" goes ") != -1)
      {
        cout<<"goes"<<endl;
      }
      else
      {
        break;
      }
      cout<<input<<endl;
    }
  }
}
