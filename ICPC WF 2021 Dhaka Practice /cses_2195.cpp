#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct Point{
    ll x, y;
};

Point p0;

Point nextToTop(stack<Point> &S){
    Point p = S.top();
    S.pop();
    Point res = S.top();
    S.push(p);
    return res;
}

void swap(Point &p1, Point &p2){
    Point temp = p1;
    p1 = p2;
    p2 = temp;
}

ll distSq(Point p1, Point p2){
    return (p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y);
}

ll orientation(Point p, Point q, Point r){
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    return (val > 0)? 1: 2;
}

int compare(const void *vp1, const void *vp2)
{
   Point *p1 = (Point *)vp1;
   Point *p2 = (Point *)vp2;

   ll o = orientation(p0, *p1, *p2);
   if (o == 0)
     return (distSq(p0, *p2) >= distSq(p0, *p1))? -1L : 1L;

   return (o == 2)? -1L: 1L;
}

void convexHull(Point points[], ll n)
{
   ll ymin = points[0].y, min = 0;
   for (ll i = 1; i < n; i++)
   {
     ll y = points[i].y;
     if ((y < ymin) || (ymin == y && points[i].x < points[min].x))
        ymin = points[i].y, min = i;
   }

   swap(points[0], points[min]);

   p0 = points[0];
   qsort(&points[1], int(n-1), sizeof(Point), compare);

   ll m = 1;
   vector<Point>pp;
   pp.push_back(points[0]);
   for (ll i=1; i<n; i++){
       while (i < n-1 && orientation(p0, points[i], points[i+1]) == 0)i++;
       //points[m++] = points[i];
       pp.push_back(points[i]);
   }
    m = pp.size();
   if (m < 3) return;


   stack<Point> S;
   S.push(pp[0]);
   S.push(pp[1]);
   S.push(pp[2]);

   for (ll i = 3; i < m; i++)
   {

      while (S.size()>1 && orientation(nextToTop(S), S.top(), pp[i]) == 1)
         S.pop();
      S.push(pp[i]);
   }
    cout<<S.size()<<endl;
   while (!S.empty())
   {
       Point p = S.top();
       cout <<p.x << " " << p.y<<endl;
       S.pop();
   }
   /*
   cout<<m<<endl;
   for(auto u: pp)cout<<u.x<<" "<<u.y<<endl;
   */
}

int main()
{
    ll n;
    cin>>n;
    Point points[n];
    for(ll i = 0; i<n; i++)cin>>points[i].x>>points[i].y;
    convexHull(points, n);
    return 0;
}
