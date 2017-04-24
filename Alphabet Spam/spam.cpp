#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double spaceCount=0, symbolCount=0, upperCount=0, lowerCount=0, length;
  double spaceRatio, symbolRatio, upperRatio, lowerRatio;
  string input;
  cin>>input;
  length = input.length();
  for(int i=0; i<length; i++)
  {
    if(input[i]=='_')
    {
      spaceCount++;
    }
    else if(isalpha(input[i]))
    {
      if(input[i]>=97)
      {
        lowerCount++;
      }
      else
      {
        upperCount++;
      }
    }
    else
    {
      symbolCount++;
    }
  }
  spaceRatio = spaceCount/length;
  symbolRatio = symbolCount/length;
  upperRatio = upperCount/length;
  lowerRatio = lowerCount/length;
  cout << std::fixed;
  cout << std::setprecision(16);
  cout<<spaceRatio<<endl;
  cout<<lowerRatio<<endl;
  cout<<upperRatio<<endl;
  cout<<symbolRatio<<endl;
  return 0;
}
