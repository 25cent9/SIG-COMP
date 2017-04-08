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
  }
}
