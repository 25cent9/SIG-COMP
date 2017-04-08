/*
  Innocent Niyibizi
  3-31-17
  Kattis: 'Digit Sum'
*/

#include <cstdlib>
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
  unsigned short testCases;
  unsigned long long min, max, total, length;
  string a, b, num;
  cin>>testCases;
  for(int t=0; t<testCases; t++)
  {
    total = 0;
    cin>>a;
    cin>>b;
    min = atoi(a.c_str());
    max = atoi(b.c_str());
    for(int i =max; i>=min; i--)
    {
      num = to_string(i);
      length = num.length();
      for(int j=0; j<length; j++)
      {
        total+=(num[j]-48);
      }
    }
    cout<<total<<endl;
  }
  return 0;
}
