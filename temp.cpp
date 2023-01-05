// Author: A9/Allenuh //

#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <utility>
#include <vector>
using namespace std;

#define FOR(i, a, n) for (register int i = (a); i < (int)(n); ++i)
#define all(x) (x).begin(), (x).end()
#define longer long long int
#define vec vector
#define um unordered_map
#define us unordered_set
#define pb(x) push_back(x)

void solve(){
}

int main(){
	ios::sync_with_stdio(0);//only cpp
	cin.tie(nullptr);      //console i/o streams are separated

	int n; cin >> n;
	string str; int R, S, D;
	map<string, int> comps;

	if (n == 1){
		cin >> str;
		cout << str;
		return 0;
	}

	FOR(i,0,n){
		cin >> str >> R >> S >> D;
		comps.insert({str,2*R + 3*S + D });
	}
	int max = 0;
	for(const auto& i: comps){
		if (i.second > max){
			max = i.second;
			str = i.first;
		}
		if (i.second == max){
			if ((i.first).compare(str) < 0){
				str = i.first;
			}
		}
	}
	cout << str << endl;
	comps.erase(str);
	max = 0;
	for(const auto& i: comps){
		if (i.second > max){
			max = i.second;
			str = i.first;
		}
		if (i.second == max){
			if ((i.first).compare(str) < 0){
				str = i.first;
			}
		}
	}
	cout << str << endl;
}
