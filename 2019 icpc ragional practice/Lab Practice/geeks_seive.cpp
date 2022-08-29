// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the count of prime numbers <= n
#define n 1000000005
bool arr1[n + 1];
bool arr2[n + 1];

int countPrimesUpto()
{

	// To store the count of prime numbers
	int count = 0;

	// To mark all the prime numbers according
	// to the equation (y = 6*x -/+ 1)
	// where x = 1, 2, 3, 4, 5, 6, 7, ...


	// To mark all the Pseudo Prime Numbers
	// using the four equations
	// described in the approach

	// Starting with >= 5
	int d = 5;

	// 2 and 3 are primes
	arr1[2] = arr2[2] = 1;
	arr1[3] = arr2[3] = 1;

	// Initialize every element of arr1 with 0
	memset(arr1, 0, sizeof(arr1));

	// Initialize every element of arr2 with 1
	memset(arr2, 1, sizeof(arr2));

	// Update arr1[] to mark all the primes
	while (d <= n) {

		// For 5, (5 + 6), (5 + 6 + 6), ...
		memset(arr1 + d, 1, (sizeof(arr1)) / (n + 1));

		// For 7, (7 + 6), (7 + 6 + 6), ...
		memset(arr1 + (d + 2), 1, (sizeof(arr1)) / (n + 1));

		// Increase d by 6
		d = d + 6;
	}

	// Update arr2[] to mark all pseudo primes
	for (int i = 5; i * i <= n; i = i + 6) {
		int j = 0;

		// We will run while loop until we find all
		// pseudo prime numbers <= n
		while (1) {
			int flag = 0;

			// Equation 1
			int temp1 = 6 * i * (j + 1) + i;

			// Equation 2
			int temp2 = ((6 * i * j) + i * i);

			// Equation 3
			int temp3 = ((6 * (i + 2) * j)
						+ ((i + 2) * (i + 2)));

			// Equation 4
			int temp4 = ((6 * (i + 2) * (j + 1))
						+ ((i + 2) * (i + 2)) - 2 * (i + 2));

			// If obtained pseudo prime number <=n then its
			// corresponding index in arr2 is set to 0

			// Result of equation 1
			if (temp1 <= n) {
				arr2[temp1] = 0;
			}
			else {
				flag++;
			}

			// Result of equation 2
			if (temp2 <= n) {
				arr2[temp2] = 0;
			}
			else {
				flag++;
			}

			// Result of equation 3
			if (temp3 <= n) {
				arr2[temp3] = 0;
			}
			else {
				flag++;
			}

			// Result of equation 4
			if (temp4 <= n) {
				arr2[temp4] = 0;
			}
			else {
				flag++;
			}

			if (flag == 4) {
				break;
			}
			j++;
		}
	}

	// Include 2
	if (n >= 2)
		count++;

	// Include 3
	if (n >= 3)
		count++;

	// If arr1[i] = 1 && arr2[i] = 1 then i is prime number
	// i.e. it is a prime which is not a pseudo prime
	for (int p = 5; p <= n; p = p + 6) {
		if (arr2[p] == 1 && arr1[p] == 1)
			count++;

		if (arr2[p + 2] == 1 && arr1[p + 2] == 1)
			count++;
	}

	return count;
}

// Driver code
int main()
{
    clock_t time_req;
	time_req = clock();
    cout << countPrimesUpto()<<endl;
    time_req = clock()- time_req;
	cout << "Using geeks sieve function takes " << (float)time_req/CLOCKS_PER_SEC << " seconds" << endl;

}
