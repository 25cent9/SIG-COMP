/*
  Innocent Niyibizi
  4-8-17
  Kattis: 'Tarifa'
*/

#include <iostream>
using namespace std;
int main()
{
  short alloted, months;
  int used, reserve = 0;
  cin>>alloted>>months;
  for(short i = 0; i < months; i++)
  {
    cin>>used;
    reserve+=alloted-used;
  }
  cout<<reserve+alloted<<endl;
  return 0;
}
