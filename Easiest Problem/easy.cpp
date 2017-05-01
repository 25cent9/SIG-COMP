/*
  Innocent Niyibizi
  4-23-17
  Easy
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int sumIt(const int val)
{
  int total = 0;
  std::string value = std::to_string(val);
  cout<<val<<endl;
  for(int i = 0; i<value.length(); i++)
  {
    total+=value[i]-48;
  }
  return total;
}

int main()
{
  bool found = false;
  int N, count, sum, target;
  cin>>N;
  while(N!=0)
  {
    target = sumIt(N);
    while(!found)
    {
      sum = sumIt(count);
      if(sum == target)
        found = true;
      else
        found = false;
      count++;
    }
    cout<<count*N<<endl;
    cin>>N;
  }
  return 0;
}
