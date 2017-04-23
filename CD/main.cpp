/*
  Innocent Niyibizi
  4-15-17
  Kattis: 'CD'
*/

#include <iostream>

using namespace std;

int main()
{
  string jack = "", jill="", curr;
  int jackNum, jillNum, same;
  cin>>jackNum>>jillNum;
  while(jackNum != 0 && jillNum != 0)
  {
    for(int i =0; i<jackNum; i++)
    {
      cin>>curr;
      jack+=curr+'.';
    }
    for(int i =0; i<jillNum; i++)
    {
      cin>>curr;
      jill+=curr+'.';
    }
    if(jackNum > jillNum || jackNum == jillNum)
    {
      cout<<jack<<endl;
      for(unsigned int i =0; i<jack.length(); i++)
      {
        cout<<i<<endl;
        string subStr = jack.substr(i, jack.find('.')+1);
        cout<<subStr<<endl;
        i+=subStr.length()+1;
      }
    }
  }
  return 0;
}
