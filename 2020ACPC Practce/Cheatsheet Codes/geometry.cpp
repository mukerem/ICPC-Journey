#include <bits/stdc++.h>
using namespace std;
struct Point
{
    int x, y;
};
int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;
    return (val > 0)? 1: 2;
}
void convexHull(Point points[], int n)
{
    if (n < 3) return;
    vector<Point> hull;
    int l = 0;
    for (int i = 1; i < n; i++)
        if (points[i].x < points[l].x)
            l = i;
    int p = l, q;
    do
    {
        hull.push_back(points[p]);
        q = (p+1)%n;
        for (int i = 0; i < n; i++)
        {
            if (orientation(points[p], points[i], points[q]) == 2)
                q = i;
        }
        p = q;
    }
    while (p != l);
    for (int i = 0; i < hull.size(); i++)
        cout << "(" << hull[i].x << ", "<< hull[i].y << ")\n";
}
void angle_between_planes(float a1, float b1, float c1, float a2, float b2, float c2)
{
    float d = (a1 * a2 + b1 * b2 + c1 * c2);
    float e1 = sqrt(a1 * a1 + b1 * b1 + c1 * c1);
    float e2 = sqrt(a2 * a2 + b2 * b2 + c2 * c2);

    d = d / (e1 * e2);
    float pi = 3.14159;
    float A = (180 / pi) * (acos(d));
    printf("Angle is %.2f degree", A);
}
# Area of a polygon with given n ordered vertices
Area =  1/2 * |[ (x1y2 + x2y3 + ... +xny1) - (x2y1 + x3y2 + ... + x1yn) ] |

# Calculate Volume of Dodecahedron
Volume = (15 + 7√5)*e 3 /4    Where e is length of an edge.

#Calculate volume and surface area of a cone
volume = 1/3(pi * r * r * h)
area = pi * r * s + pi * r^2
# Where s is the slant height of the cone, h is the height
# r^2 + h^2 = s^2

#Check if a line touches or intersects a circle
void checkCollision(int a, int b, int c, int x, int y, int radius){

    int dist = (abs(a * x + b * y + c)) / sqrt(a * a + b * b); // Finding the distance of line from center.
    if (radius == dist) cout << "Touch" << endl;
    else if (radius > dist) cout << "Intersect" << endl;
    else cout << "Outside" << endl;
}

# Check if four segments form a rectangle
struct Segment{
    int ax, ay;
    int bx, by;
};
int getDis(pair<int, int> a, pair<int, int> b) {
    return (a.first - b.first)*(a.first - b.first) +
    (a.second - b.second)*(a.second - b.second);
}

bool isPossibleRectangle(Segment segments[]){
    set< pair<int, int> > st;
    for (int i = 0; i < N; i++){
        st.insert(make_pair(segments[i].ax, segments[i].ay));
        st.insert(make_pair(segments[i].bx, segments[i].by));
    }
    if (st.size() != 4) return false;
    set<int> dist;

    for (auto it1=st.begin(); it1!=st.end(); it1++)
        for (auto it2=st.begin(); it2!=st.end(); it2++)
            if (*it1 != *it2)
                dist.insert(getDis(*it1, *it2));

    if (dist.size() > 3)
        return false;
    int distance[3];
    int i = 0;
    for (auto it = dist.begin(); it != dist.end(); it++)
        distance[i++] = *it;

    if (dist.size() == 2) // If line seqments form a square
        return (2*distance[0] == distance[1]);
    # distance of sides should satisfy pythagorean theorem
    return (distance[0] + distance[1] == distance[2]);
}

# integers value make a rectangle
bool isRectangle(int a, int b, int c, int d){
    if (a ^ b ^ c ^ d) return false;
    else return true;
}

# Check if three straight lines are concurrent or not
bool checkConcurrent(int a1, int b1, int c1, int a2,
                     int b2, int c2, int a3, int b3, int c3){
    return (a3 * (b1 * c2 - b2 * c1) +
            b3 * (c1 * a2 - c2 * a1) +  c3 * (a1 * b2 - a2 * b1) == 0);
}

# Check whether a given point lies inside a triangle or not
float area(int x1, int y1, int x2, int y2, int x3, int y3){
    return abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/2.0);
}

bool isInside(int x1, int y1, int x2, int y2, int x3, int y3, int x, int y){
    float A = area (x1, y1, x2, y2, x3, y3);
    float A1 = area (x, y, x2, y2, x3, y3);
    float A2 = area (x1, y1, x, y, x3, y3);
    float A3 = area (x1, y1, x2, y2, x, y);
    return (A == A1 + A2 + A3);
}

# Check whether a point exists in circle sector or not.
void checkPoint(int radius, int x, int y, float percent, float startAngle){
    float endAngle = 360/percent + startAngle;
    float polarradius = sqrt(x*x+y*y);
    float Angle = atan(y/x);
    if (Angle>=startAngle && Angle<=endAngle && polarradius<radius)
        printf("Point (%d, %d) exist in the circle sector\n", x, y);
    else
        printf("Point (%d, %d) does not exist in the circle sector\n", x, y);
}

# Check whether four points make a parallelogram

struct point{
    double x, y;
    point() { }
    point(double x, double y)
        : x(x), y(y) { }
    bool operator<(const point& other) const
    {
        if (x < other.x){
            return true;
        }
        else if (x == other.x){
            if (y < other.y){
                return true;
            }
        }
        return false;
    }
};

point getMidPoint(point points[], int i, int j){
    return point((points[i].x + points[j].x) / 2.0, (points[i].y + points[j].y) / 2.0);
}

bool isParallelogram(point points[])
{
    map<point, vector<point> > midPointMap;
    int P = 4;
    for (int i = 0; i < P; i++){
        for (int j = i + 1; j < P; j++){
            point temp = getMidPoint(points, i, j);
            midPointMap[temp].push_back(point(i, j));
        }
    }
    int two = 0, one = 0;
    for (auto x : midPointMap)
    {
        if (x.second.size() == 2) two++;
        else if (x.second.size() == 1) one++;
        else
            return false;
    }

    if (two == 1 && one == 4)
        return true;
    return false;
}

# Circle and Lattice Points(Lattice Points are points with coordinates as integers in 2-D space.)
int countLattice(int r){
    if (r <= 0)
        return 0;
    int result = 4;
    for (int x=1; x<r; x++){
        int ySquare = r*r - x*x;
        int y = sqrt(ySquare);
        if(y*y == ySquare)
            result += 4;
    }
    return result;
}

# Count Integral points inside a Triangle
# Pick's Theeorem:
A = I + (B/2) -1
# A ==> Area of Polygon
# B ==> Number of integral points on edges of polygon
# I ==> Number of integral points inside the polygon
# Using the above formula, we can deduce,
# I = (2A - B + 2) / 2
# We can find A (area of triangle) using below Shoelace formula.
A = 1/2 * abs(x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2))
int getBoundaryCount(Point p,Point q){
    if (p.x==q.x)
        return abs(p.y - q.y) - 1;
    if (p.y == q.y)
        return abs(p.x-q.x) - 1;
    return gcd(abs(p.x-q.x),abs(p.y-q.y))-1;
}
// Returns count of points inside the triangle
int getInternalCount(Point p, Point q, Point r){
    int BoundaryPoints = getBoundaryCount(p, q) +
    getBoundaryCount(p, r) + getBoundaryCount(q, r) + 3;
    // 3 extra integer points for the vertices
    int doubleArea = abs(p.x*(q.y - r.y) + q.x*(r.y - p.y) + r.x*(p.y - q.y));

    return (doubleArea - BoundaryPoints + 2)/2;
}

# Count of parallelograms in a plane
int countOfParallelograms(int x[], int y[], int N){
    map<pair<int, int>, int> cnt; // Map to store frequency of mid points of diagonal
    for (int i=0; i<N; i++){
        for (int j=i+1; j<N; j++){
            int midX = x[i] + x[j];
            int midY = y[i] + y[j];
            cnt[make_pair(midX, midY)]++;
        }
    }
    int res = 0;
    for (auto it = cnt.begin(); it != cnt.end(); it++){
        int freq = it->second;
        res += freq*(freq - 1)/2
    }
    return res;
}

# Distance between a point and a Plane in 3D
Distance = (| a*x1 + b*y1 + c*z1 + d |) / (sqrt( a*a + b*b + c*c))
void shortest_distance(float x1, float y1, float z1,
                        float a, float b, float c, float d){
    float f = fabs((a * x1 + b * y1 + c * z1 + d));
    float e = sqrt(a * a + b * b + c * c);
    printf("Perpendicular distance is %f", f/e);
}

# Distance between two parallel Planes in 3-D
void distance(float a1, float b1, float c1, float d1,
              float a2, float b2, float c2, float d2){
    float x1,y1,z1,d;
    if (a1 / a2 == b1 / b2 && b1 / b2 == c1 / c2){
        x1 = y1 = 0;
        z1 =-d1 / c1;
        d = fabs(( c2 * z1 + d2)) / (sqrt(a2 * a2 + b2 * b2 + c2 * c2));
        printf("Perpendicular distance is %f\n", d);
    }
    else
        printf("Planes are not parallel");
}

# Direction of a Point from a Line Segment
int directionOfPoint(point A, point B, point P)
{
    int RIGHT = 1, LEFT = -1, ZERO = 0;
    #subtracting co-ordinates of point A from B and P, to make A as origin
    B.x -= A.x; B.y -= A.y;
    P.x -= A.x; P.y -= A.y;
    int cross_product = B.x * P.y - B.y * P.x;
    if (cross_product > 0)
        return RIGHT;
    if (cross_product < 0)
        return LEFT;
    return ZERO; // return ZERO if cross product is zero.
}

# closest pair
int compareX(const void* a, const void* b)  {
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->x - p2->x);
}

int compareY(const void* a, const void* b)  {
    Point *p1 = (Point *)a, *p2 = (Point *)b;
    return (p1->y - p2->y);
}

float dist(Point p1, Point p2)  {
    return sqrt( (p1.x - p2.x)*(p1.x - p2.x) +
                (p1.y - p2.y)*(p1.y - p2.y));
}
float bruteForce(Point P[], int n)  {
    float min = FLT_MAX;
    for (int i = 0; i < n; ++i)
        for (int j = i+1; j < n; ++j)
            if (dist(P[i], P[j]) < min)
                min = dist(P[i], P[j]);
    return min;
}

float min(float x, float y)  {
    return (x < y)? x : y;
}
float stripClosest(Point strip[], int size, float d)  {
    float min = d; // Initialize the minimum distance as d
    qsort(strip, size, sizeof(Point), compareY);
    for (int i = 0; i < size; ++i)
        for (int j = i+1; j < size && (strip[j].y - strip[i].y) < min; ++j)
            if (dist(strip[i],strip[j]) < min)
                min = dist(strip[i], strip[j]);
    return min;
}
float closestUtil(Point P[], int n){
    if (n <= 3)
        return bruteForce(P, n);
      int mid = n/2;
    Point midPoint = P[mid];
    float dl = closestUtil(P, mid);
    float dr = closestUtil(P + mid, n - mid);
      float d = min(dl, dr);
    Point strip[n];
    int j = 0;
    for (int i = 0; i < n; i++)
        if (abs(P[i].x - midPoint.x) < d)
            strip[j] = P[i], j++;
    return min(d, stripClosest(strip, j, d) );
}
float closest(Point P[], int n)  {
    qsort(P, n, sizeof(Point), compareX);
    return closestUtil(P, n);
}

# Determinant
void getCofactor(int mat[N][N], int temp[N][N], int p, int q, int n){
    int i = 0, j = 0;
    for (int row = 0; row < n; row++){
        for (int col = 0; col < n; col++){
            if (row != p && col != q){
                temp[i][j++] = mat[row][col];
                if (j == n - 1){
                    j = 0;
                    i++;
                }
            }
        }
    }
}
int determinantOfMatrix(int mat[N][N], int n){
    int D = 0; // Initialize result
    if (n == 1)
        return mat[0][0];
    int temp[N][N]; // To store cofactors
    int sign = 1; // To store sign multiplier
    for (int f = 0; f < n; f++){
        getCofactor(mat, temp, 0, f, n);
        D += sign * mat[0][f] * determinantOfMatrix(temp, n - 1);
        sign = -sign;
    }
    return D;
}
