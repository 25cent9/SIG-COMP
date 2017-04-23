#include <iostream>
#include <string>

using namespace std;

int sumIt(int num)
{
  string theNum = to_string(num);
  int total = 0;
  for(unsigned int i = 0; i<theNum.length(); i++)
  {
    total+=theNum[i]-48;
  }
  return total;
}

int main()
{
  int N, target, count=0, val, sum;
  bool found = false;
  cin>>N;
  while(N!=0)
  {
    target  = sumIt(N);
    count = 0;
    found = false;
    while(!found)
    {
      count++;
      val = count*N;
      sum = sumIt(val);
      if(target == sum && count>10)
        found = true;
      else
        found = false;
    }
    cout<<count<<endl;
    cin>>N;
  }
  return 0;
}
