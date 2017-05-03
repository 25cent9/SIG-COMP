/*
  Innocent Niyibizi
  4-29-17 1 in the morning 
*/
#include <iostream>
#include <string>

using namespace std;

string eraseIt(const string orig)
{
  int l = orig.length();
  string newOne = orig;
  for(int i =0; i<l; i++)
  {
    if(orig[i]=='0')
      newOne[i]='1';
    else
      newOne[i]='0';
  }
  return newOne;
}

int main()
{
  bool success = true;
  int N, l;
  string orig, newOne, correct;
  cin>>N;
  cin>>orig>>newOne;
  correct = orig;
  for(int i =0; i<N; i++)
    correct = eraseIt(correct);
  if(newOne != correct)
    cout<<"Deletion failed"<<endl;
  else
    cout<<"Deletion succeeded"<<endl;
  return 0;
}
