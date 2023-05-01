// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> points;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		points.push_back({x});
	}
	for(int i = 0; i < n; i++){
		int y;
		cin >> y;
		points[i].push_back(y);
	}

	int tmax = 0;

	for(int i = 0; i < points.size(); i++) {
		vector<int> point;
		int max = 0;
		for(int j = 0; j < points.size(); j++) {
			int distance;
			int dx;
			int dy;
			dx = points[i][0] - points[j][0];
			dy = points[i][1] - points[j][1];
			distance = (dx*dx) + (dy*dy);
			if(distance > max) max = distance; 
					cout << to_string(i) << ", " << to_string(j) << endl;
					cout << distance << endl;
		}
		if(max > tmax) tmax = max;
	}
	cout << tmax;
}
