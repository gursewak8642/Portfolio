#include <iostream>

using namespace std;


int maxOfFour(int p, int q, int r, int s)

{

  int a[2],abs;

  a[0] = p, a[1] = q;


  bool b = (a[0] - a[1] + abs(a[0] - a[1]));

  swap(a[0], a[!b]);

  a[1] = r;

  b = (a[0] - a[1] + abs(a[0] - a[1]));

  swap(a[0], a[!b]);

  a[1] = s;

  b = (a[0] - a[1] + abs(a[0] - a[1]));

  swap(a[0], a[!b]);

  return a[0];

}

int main()

{

  int p, q, r, s;

  cin>>p>>q>>r>>s;

  cout << "Maximum of four : "

     << maxOfFour(p, q, r, s);

  return 0;

}
