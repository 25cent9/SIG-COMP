/*
  Innocent Niyibizi
  4-30-17
*/
#include <iostream>
using namespace std;

const string MONTHS[12][7] = {
  {"Thursday", "Friday", "Saturday","Sunday","Monday","Tuesday","Wednesday"}, //Jan
  {"Sunday","Monday","Tuesday","Wednesday","Thursday", "Friday", "Saturday"}, //Feb
  {"Sunday","Monday","Tuesday","Wednesday","Thursday", "Friday", "Saturday"}, //Mar
  {"Wednesday","Thursday", "Friday", "Saturday","Sunday","Monday","Tuesday"}, //Apr
  {"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"}, //May
  {"Monday","Tuesday","Wednesday","Thursday", "Friday", "Saturday","Sunday"}, //June
  {"Wednesday","Thursday", "Friday", "Saturday","Sunday","Monday","Tuesday"}, //July
  {"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday", "Friday"},  //Aug
  {"Tuesday","Wednesday","Thursday", "Friday", "Saturday","Sunday","Monday"},  //Seb
  {"Thursday", "Friday", "Saturday","Sunday","Monday","Tuesday","Wednesday"},  //Oct
  {"Sunday","Monday","Tuesday","Wednesday","Thursday", "Friday", "Saturday"},  //Nov
  {"Tuesday","Wednesday","Thursday", "Friday", "Saturday","Sunday","Monday"}  //Dec
};

int main()
{
  short D, M;
  cin>>D>>M;
  cout<<MONTHS[--M][--D%7]<<endl;
  return 0;
}
