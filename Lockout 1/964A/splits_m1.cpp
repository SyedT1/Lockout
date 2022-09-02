#include<bits/stdc++.h>
#define pb push_back
using namespace std;
using ll = long long int;
void fileio() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
}
int main() {
	// fileio();
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll num;
	cin >> num;
	cout << (num / 2 + 1) << endl;
}
