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
  int number = 0, newNum =0, squareNum;
  long long sum, diff;
  while(cin>>number)
  {
    sum=1;
    squareNum = (int) sqrt(number)+1;
    for(unsigned int i = 1; i<squareNum; i++)
    {
    	if(number%i==0)
    	{
      	if(number/i != number)
      	{
      	  sum+=(number/i)+i;
      	}
    	}
    }
    diff = abs(sum-number);
    if(diff==0)
  	   cout<<number<<" perfect"<<endl;
    else if(diff<=2)
  	   cout<<number<<" almost perfect"<<endl;
    else
  	   cout<<number<<" not perfect"<<endl;
  }
  return 0;
}
