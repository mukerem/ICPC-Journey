#include <iostream>
using namespace std;
#define INF 10000

struct Point
{
    int x;
    int y;
};

bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
            q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return true;
    return false;
}

int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) -
            (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;
    return (val > 0)? 1: 2;
}

int doIntersect(Point p1, Point q1, Point p2, Point q2)
{

    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    if (o1 != o2 && o3 != o4)
        return 0;

    if (o1 == 0 && onSegment(p1, p2, q1)) return 1;

    if (o2 == 0 && onSegment(p1, q2, q1)) return 1;

    if (o3 == 0 && onSegment(p2, p1, q2)) return 1;

    if (o4 == 0 && onSegment(p2, q1, q2)) return 1;

    return 2;
}

bool isInside(Point polygon[], int n, Point p)
{
    if (n < 3) return 2;

    Point extreme = {INF, p.y};

      int decrease = 0, d;

    int count = 0, i = 0;
    do
    {
        int next = (i+1)%n;

          if(polygon[i].y == p.y) decrease++;
          d = doIntersect(polygon[i], polygon[next], p, extreme);
         if(d == 1)return 1;
        if (d == 0)
        {

            if (orientation(polygon[i], p, polygon[next]) == 0)
            return onSegment(polygon[i], p, polygon[next])?1:2;

            count++;
        }
        i = next;
    } while (i != 0);

      count -= decrease;

    return count&1 == 1 ? 0: 2;
}

int main()
{
    int n,m,x,y, d;
    cin>>n>>m;

    Point polygon1[n];
    for(int i=0; i<n; i++){
     cin>>x>>y;
     polygon1[i] = {x, y};
    }
    for(int i=0; i<m; i++){
             cin>>x>>y;
             Point p = {x, y};
             d = isInside(polygon1, n, p);
             if(d == 0)cout << "INSIDE\n";
             else if(d == 1)cout<<"BOUNDARY\n";
             else cout << "OUTSIDE\n";
    }
    return 0;
}
