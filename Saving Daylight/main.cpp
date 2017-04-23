/*
  Innocent Niyibizi
  4-14-17
  Kattis: 'Saving Daylight'
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void converNums(string original, int& hours, int& mins)
{
  hours = atoi(original.substr(0, original.find(':')).c_str());
  mins = atoi(original.substr(original.find(':')+1, original.length()-1).c_str());
}

int main()
{
  string month, day, year, sunRise, sunSet;
  int riseHr, riseMin, setHr, setMin;
  while(cin>>month)
  {
    cin>>day>>year>>sunRise>>sunSet;
    converNums(sunRise, riseHr, riseMin);
    converNums(sunSet, setHr, setMin);
    cout<<month<<" "<<day<<" "<<year<<" "<<abs(riseHr-setHr)<<" hours "<<abs(riseMin-setMin)<<" minutes"<<endl;
  }
  return 0;
}
