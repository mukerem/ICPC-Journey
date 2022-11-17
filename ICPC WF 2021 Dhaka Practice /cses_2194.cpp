#include<bits/stdc++.h>
using namespace std;
struct pt {
             long long x, y;
             bool operator==(const pt& a){
             return a.x == x && a.y == y;}
};
bool cmpX(pt p1, pt p2) { //to sort according to x value
             return p1.x < p2.x;
}
bool cmpY(pt p1, pt p2) { //to sort according to y value

          return (p1.y < p2.y);
}
long long dist(pt p1, pt p2) {
          long long x = abs(p1.x - p2.x);
          long long y = abs(p1.y - p2.y);
          if (x > INT_MAX || y > INT_MAX)
          return -1;
          return x*x + y*y;
}

long long findMinDist(pt pts[], long long n) {
             long long mint = LONG_MAX, d;
             for (long long i = 0; i < n; ++i)
             for (long long j = i+1; j < n; ++j){
                 if(pts[i] == pts[j])continue;
               d = dist(pts[i],pts[j]);
                if (d == -1)continue;
               mint = min(mint,d);
             }
             return mint;
}

long long stripClose(pt strip[], long long size, long long d) { //find closest distance of two polong longs in a strip
               long long mint = d;
               for (long long i = 0; i < size; ++i)
               for (long long j = i+1; j < size && (strip[j].y - strip[i].y) < mint; ++j){
               if(strip[i] == strip[j])continue;
               d = dist(strip[i],strip[j]);
                if (d == -1)continue;
               mint = min(mint,d);
               }
               return mint;
}
long long findClosest(pt xSorted[], pt ySorted[], long long n){
               if (n <= 3)
               return findMinDist(xSorted, n);
               long long mid = n/2;
               pt midPoint = xSorted[mid];
               pt ySortedLeft[mid];
               pt ySortedRight[n-mid];
               int leftIndex = 0, rightIndex = 0;
               for (int i = 0; i < n; i++) {
               if (leftIndex<mid && (ySorted[i].x < midPoint.x || (ySorted[i].x == midPoint.x && ySorted[i].y < midPoint.y)))
               ySortedLeft[leftIndex++] = ySorted[i];
               else
               ySortedRight[rightIndex++] = ySorted[i];
               }
               long long leftDist, rightDist, dist;

               rightDist = findClosest(ySorted + mid, ySortedRight, n-mid);
               leftDist = findClosest(xSorted, ySortedLeft, mid);
               dist = min(leftDist, rightDist);
               pt strip[n]; //hold polong longs closer to the vertical line
               long long j = 0;
               for (long long i = 0; i < n; i++)
               if (abs(ySorted[i].x - midPoint.x) <dist) {
               strip[j] = ySorted[i];
               j++;
               }
               //return dist;
               return min(dist, stripClose(strip, j, dist));
}
long long closestPair(pt pts[], long long n) {
                 pt xSorted[n];
                 pt ySorted[n];
                 for (long long i = 0; i < n; i++) {
                 xSorted[i] = pts[i];
                 ySorted[i] = pts[i];
                 }
                 sort(xSorted, xSorted+n, cmpX);
                 sort(ySorted, ySorted+n, cmpY);
                 return findClosest(xSorted, ySorted, n);
}
int main() {
                ios_base::sync_with_stdio(false);
                cin.tie(NULL);
                long long n;
                cin>>n;
                pt pts[n];
                for(int i=0; i<n; i++){
                cin>>pts[i].x>>pts[i].y;
                }
                cout<<closestPair(pts, n);
}
