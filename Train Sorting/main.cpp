/*
  Innocent Niyibizi
  4-10-17
  Kattis: 'Train Sorting'
*/
#include <iostream>
#include <list>
using namespace std;

int main()
{
  list<int> cars;
  unsigned int weight, numCars;
  cin>>numCars;
  for(int i=0; i<numCars; i++)
  {
    cin>>weight;
    if(weight>cars.front() && weight>cars.back())
      cars.push_back(weight);
    else if(weight<cars.front() && weight<cars.back())
      cars.push_front(weight);
  }
  cout<<cars.size()<<endl;
  return 0;
}
