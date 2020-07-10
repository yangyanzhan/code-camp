// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/cities-conquering.html .

std::vector<int> citiesConquering(int n, std::vector<std::vector<int>> roads) {
    using namespace std;
    vector<int> res(n, -1);
    map<int, set<int>> graph;
    for (auto road : roads) {
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
    int pre = 0, day = 0;
    while (graph.size() != pre) {
        day++;
        pre = graph.size();
        vector<int> deleted;
        for (auto it : graph) {
            if (it.second.size() <= 1) {
                res[it.first] = day;
                deleted.push_back(it.first);
            }
        }
        for (auto m : deleted) {
            if (graph.find(m) != graph.end()) {
                graph.erase(graph.find(m));
            }
            for (auto &it : graph) {
                it.second.erase(m);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (res[i] == -1 && graph.find(i) == graph.end()) {
            res[i] = 1;
        }
    }
    return res;
}
