#include <iostream>
#include <queue>
using namespace std;

int main()
{
 int n, d, k;
 priority_queue<int> pq;
 cin >> n >> d >> k;
 bool destroyed = false;
 int hit = 0;
 int vac;
 for (int i = 0; i < n; i++)
 {
  cin >> vac;
  pq.push(vac);
 }

 while (k--)
 {
  hit++;
  int mx = pq.top();
  d -= mx;

  if (d <= 0)
  {
   destroyed = true;
   break;
  }
  pq.pop();
  pq.push(mx / 2);
 }

 if (destroyed)
  cout << hit << endl;
 else
  cout << -1 << endl;

 return 0;
}