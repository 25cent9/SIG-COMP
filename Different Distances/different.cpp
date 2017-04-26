#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float x1=-1, x2, y1, y2, p, xs, ys, dist;
  cin>>x1>>y1>>x2>>y2>>p;
  while(x1!=0)
  {
    xs = pow(abs(x1-x2),p);
    ys = pow(abs(y1-y2), p);
    dist = pow((xs+ys), (1/p));
    cout<<dist<<endl;
    cin>>x1>>y1>>x2>>y2>>p;
  }
  return 0;
}
