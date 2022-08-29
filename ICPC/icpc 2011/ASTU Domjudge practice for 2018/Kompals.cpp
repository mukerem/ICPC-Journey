#include <bits/stdc++.h>
using namespace std;
long long amount,number;

map<int, int> freq;
void calculateMaskFrequencies(long long num){
        int mask = 0;

        while (num > 0) {
            mask = mask | (1 << (num % 10));
            num /= 10;
        }
        freq[mask]++;
}

// Function return the number of valid pairs
long long countPairs()
{
    long long numberOfPairs = 0;
    for (int i = 1; i < 1024; i++) {
        numberOfPairs += (freq[i] * (freq[i] - 1)) / 2;
        for (int j = i + 1; j < 1024; j++) {

            // if it contains a common digit
            if (i & j)  numberOfPairs += (freq[i] * freq[j]);
        }
    }
    return numberOfPairs;
}

// Driver Code to test above functions
int main()
{
    cin>>amount;
    for(int i=0;i<amount;i++){
        cin>>number;
        calculateMaskFrequencies(number);
    }

    cout << countPairs() << endl;
    return 0;
}

