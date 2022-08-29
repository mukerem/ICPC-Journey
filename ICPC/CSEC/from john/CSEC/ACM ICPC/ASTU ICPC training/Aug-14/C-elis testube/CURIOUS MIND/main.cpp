#include <iostream>

using namespace std;

int Mix[80];


int main(){
	int N, no = 1;
    Mix[1] = 1;
    Mix[2] = Mix[3] = 2;

    for(int i = 4; i <= 76; ++i)
    {
    	Mix[i] = Mix[i - 2] + Mix[i - 3];

    }

    Mix[1] = Mix[2] = 0;
    Mix[3] =1;


    while(cin >> N && N)
    {
        cout<<"Case #" << no++ << ": " << Mix[N] << endl;

    }

    return 0;
}
