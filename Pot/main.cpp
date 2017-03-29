/*
  Innocent Niyibizi
  3-27-17
*/

using namespace std;
#include <string.h>
#include <iostream>
#include <math.h>

int main()
{
  short nums;
  char expo;
  int num = 0;
  long total = 0;
  string inputNum;
  cin>>nums;
  for(int i =0; i < nums; i++)
  {
    cin>>inputNum;
    expo = inputNum[inputNum.length()-1];
    num = stoi(inputNum.substr(0, inputNum.length()-1));
    total += pow(num, expo-48);
  }
  cout<<total<<endl;
  return 0;
}
