#include<bits/stdc++.h>
using namespace std;
#define int long long 


mt19937 rng(chrono :: system_clock :: now().time_since_epoch().count());
long long random(long a, long long b){
if (a > b) return 0;
return a + rng() % (b - a + 1);
}


signed main()
{
	cout << 1 << endl; // Number of test cases (t)
	
	// keep n small initially for easy debugging, Increase if unable to find case
	int n = random(1,10);
	int l = random(1,10);
	int r = random(l,20); // Generates random number from l to r
	
	cout << n << " " << l << " " << r << endl;

	for(int i=0;i<n;i++)
		{
			int num = random(1,10);
			cout << num << " ";
		}
	
	cout << endl;
} 