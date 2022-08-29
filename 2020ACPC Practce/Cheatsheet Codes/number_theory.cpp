#include<bits/stdc++.h>
using namespace std;
long powmod(long base, long exp, long modulus) {
    base %= modulus;
    long result = 1;
        while (exp > 0) {
        if (exp & 1) result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}
// returns g = gcd(a, b); finds x, y such that d = ax + by
int extended_euclid(int a, int b, int &x, int &y){
    int xx = y = 0;
    int yy = x = 1;
    while (b){
        int q = a / b; t = b;
        b = a%b; a = t;
        t = xx; xx = x - q*xx;
        x = t; t = yy;
        yy = y - q*yy;
        y = t;
    }
    return a;
}
// finds all solutions to ax = b (mod n)
vector modular_linear_equation_solver(int a, int b, int n)
{
    int x, y;
    vector ret;
    int g = extended_euclid(a, n, x, y);
    if (!(b%g)){
        x = mod(x*(b / g), n);
        for (int i = 0; i < g; i++)
            ret.push_back(mod(x + i*(n / g), n));
    }
    return ret;
}
// computes b such that ab = 1 (mod n), returns -1 on failure
int mod_inverse(int a, int n){
    int x, y;
    int g = extended_euclid(a, n, x, y);
    if (g > 1) return -1;
    return mod(x, n);
}
// Chinese remainder theorem (special case):
PII chinese_remainder_theorem(int m1, int r1, int m2, int r2)
{
    int s, t;
    int g = extended_euclid(m1, m2, s, t);
    if (r1%g != r2%g) return make_pair(0, -1);
    return make_pair(mod(s*r2*m1 + t*r1*m2, m1*m2) / g, m1*m2 / g);
}
PII chinese_remainder_theorem(const VI &m, const VI &r){
    PII ret = make_pair(r[0], m[0]);
    for (int i = 1; i < m.size(); i++){
        ret = chinese_remainder_theorem(ret.second, ret.first, m[i], r[i]);
        if (ret.second == -1) break;
    }
    return ret;
}
// computes x and y such that ax + by = c  returns whether the solution exists
bool linear_diophantine(int a, int b, int c, int &x, int &y){
    if (!a && !b){
        if (c) return false;
        x = 0;
        y = 0;
        return true;
    }
    if (!a){
        if (c % b) return false;
        x = 0;
        y = c / b;
        return true;
    }
    if (!b){
        if (c % a) return false;
        x = c / a;
        y = 0;
        return true;
    }
    int g = gcd(a, b);
    if (c % g) return false;
    x = c / g * mod_inverse(a / g, b / g);
    y = (c - a*x) / b;
    return true;
}

// euler's totient
// the positive integers less than or equal to n that are relatively prime to n.
int phi (int n){
    int result = n;
    for (int i=2; i*i<=n; ++i)
        if(n %i==0)
        {
            while(n %i==0)
                n /= i;
            result -= result / i;
        }
    if (n > 1)
    result -= result / n;
    return result;
}

tuple<int,int,int> gcd(int a, int b) {
    if (b == 0) {
        return {1,0,a};
    }
    else {
        int x,y,g;
        tie(x,y,g) = gcd(b,a%b);
        return {y,x-(a/b)*y,g};
    }
}
# x n mod m = x n mod (m−1) mod m, if m is prime and n is very large

# number of factors p(n) = product of(ai + 1), ai is exponent of factorization
# sum of factors s(n) = product of (pi^(ai + 1) - 1)/(pi - 1)
# product of factors u(n) = n^p(n)
# euler's totient t(n) = product of((pi^(ai - 1))*(pi - 1))
# x^t(m) mod m = 1
# mod inverse x^-1 = x^(t(m) - 1)
# if m is prime mod inverse is x^-1 = x^(m-2)
# diophantine equation first solution is (x, y) then all pairs are
# (x + kb/gcd(a,b), y - ka/gcd(a,b))
# chineese reminder xk = m1*m2*...*mn/mk
# x = a1*x1*inversemod(x1, m1) + ... + an*xn*inversemod(xn, mn)



