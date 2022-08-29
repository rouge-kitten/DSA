#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ull unsigned long long
#define mod 98765431
#define vi vector<int>
#define vll vector<long long>
#define vull vector<unsigned long long>
#define vvi vector<vector<int>>
#define umii unordered_map<int, int>
#define umivi unordered_map<int, vector<int>>
#define printall(a) for(auto i : a) cout << i << " "
#define print(a) cout << a << endl
#define pb push_back
#define maxHeap  priority_queue<int>
#define minHeap  priority_queue<int, vector<int>, greater<int> >

ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b, a%b); }

ll modularMultiplication(ll a, ll b, ll m){
	ll res = 0;
	while(b > 0){
		if(b&1ll)
			res += a;
		a *= 2;
		b = b >> 1;
		res %= m;
		a %= m;
	}
	return res;
}

ll FastModularExp(ll a, ll b, ll m){
	ll res = 1ll;
	a %= m;
	while(b > 0){
		if(b&1ll){
			res = modularMultiplication(res, a, m);
		}
		a = modularMultiplication(a, a, m);
		b = b >> 1;
	}
	return res;
}

int main(){
	print(FastModularExp(5, 3, 1000000));
}
