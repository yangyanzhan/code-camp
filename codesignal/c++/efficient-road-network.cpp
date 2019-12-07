// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/efficient-road-network.html .

bool efficientRoadNetwork(int n, std::vector<std::vector<int>> roads) {
    using namespace std;
    map<int, set<int>> graph;
    for (auto road: roads) {
        int a = road[0], b = road[1];
        if (graph.find(a) == graph.end()) {
            graph[a] = set<int>();
        }
        if (graph.find(b) == graph.end()) {
            graph[b] = set<int>();
        }
        graph[a].insert(b);
        graph[b].insert(a);
    }
    for (int i = 0; i < n; i++) {
        set<int> visited{i};
        if (graph.find(i) != graph.end()) {
            for (int i1: graph[i]) {
                visited.insert(i1);
                if (graph.find(i1) != graph.end()) {
                    for (int i2: graph[i1]) {
                        visited.insert(i2);
                    }
                }
            }
        }
        if (visited.size() < n) {
            return false;
        }
    }
    return true;
}

