// Time: 2019-11-19 17:38:06
// title: Low Order Zeros
// language: C++


#include<bits/stdc++.h>
using namespace std;
int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
int lastNon0Digit(int n)
{
	if (n < 10)
		return dig[n];
	if (((n/10)%10)%2 == 0)
		return (6*lastNon0Digit(n/5)*dig[n%10]) % 10;
	else
		return (4*lastNon0Digit(n/5)*dig[n%10]) % 10;
}

int main()
{
	int n;
	while(cin>>n&&n){
        cout<<lastNon0Digit(n)<<endl;
	}
}
