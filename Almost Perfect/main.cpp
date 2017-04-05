/*
  Innocent Niyibizi
  4-4-17
  Kattis: 'Almost Perfect'
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int number = 0, newNum =0;
  long long sum, diff;
  while(cin>>number)
  {
    sum=0;
    for(unsigned int i = 1; i<number; i++)
    {
    	if(number%i==0)
    	{
      	sum+=i;
    	}
    }
    diff = abs(sum-number);
    if(diff==0)
    {
  	   cout<<number<<" perfect"<<endl;
    }
    else if(diff<=2)
    {
  	   cout<<number<<" almost perfect"<<endl;
    }
    else
    {
  	   cout<<number<<" not perfect"<<endl;
    }
  }
  return 0;
}
