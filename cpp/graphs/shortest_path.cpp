/*
Problem: Shortest Path (Dijkstra)
Given weighted graph adjacency list.
*/
#include <bits/stdc++.h>
using namespace std;

typedef unordered_map<string, vector<pair<string,int>>> Graph;

unordered_map<string,int> dijkstra(Graph& g, const string& start) {
    // TODO: implement
    return {}; // placeholder
}

int main() {
    Graph g = {
        {"A", {{"B",1},{"C",4}}},
        {"B", {{"C",2},{"D",5}}},
        {"C", {{"D",1}}},
        {"D", {}}
    };
    auto dist = dijkstra(g, "A");
    for (auto &p : dist) cout << p.first << ':' << p.second << ' ';
    cout << endl; // expect A:0 B:1 C:3 D:4 (order may vary)
}
