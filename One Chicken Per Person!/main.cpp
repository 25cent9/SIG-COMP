/*
  Innocent Niyibizi
  4-9-17
  Kattis: 'One Chicken Per Person!'
*/

#include <iostream>
#include <cmath>
int main()
{
  int numGuests, numChicks, diff;
  std::cin>>numGuests>>numChicks;
  diff = abs(numGuests-numChicks);
  std::cout<<"Dr. Chaz ";
  std::cout<<((numGuests < numChicks)?"will have ":"needs ")<<diff<<((numGuests < numChicks)?"":" more");
  std::cout<<((diff>1)?" pieces of chicken":" piece of chicken");
  std::cout<<((numGuests > numChicks)?"!":" left over!")<<std::endl;
  return 0;
}
