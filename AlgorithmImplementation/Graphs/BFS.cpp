#include <bits/stdc++.h>

using namespace std;

void BFS(int** edges, int n, int sv) {
	queue<int>node;
	bool *visited = new bool[n];
	for (int i = 0; i < n; i++) {
		visited[i] = false;
	}
	node.push(sv);
	visited[sv] = true;
	while (!node.empty()) {
		int curr = node.front();
		cout << curr << " ";
		node.pop();
		for (int i = 0; i < n; i++) {
			if (curr == i) continue;
			if (edges[curr][i] == 1 && !visited[i]) {
				node.push(i);
				visited[i] = true;
			}
		}
	}
	delete[] visited;

}

int main() {
	int n, e;
	cin >> n >> e;
	int **edges = new int*[n];
	for (int i = 0; i < n; i++) {
		edges[i] = new int[n];
		for (int j = 0; j < n; j++) {
			edges[i][j] = 0;
		}
	}
	for (int i = 0; i < e; i++) {
		int f, s;
		cin >> f >> s;
		edges[f][s] = 1;
	}

	BFS(edges, n, 0);
	for (int i = 0; i < n; i++) {
		delete[] edges[i];
	}
	delete[] edges;
	return 0;
}