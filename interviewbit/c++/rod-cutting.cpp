// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/rod-cutting.html .

void makeCuts(vector<vector<pair<long long, int>>> &cache, vector<int> &B,
              int i, int j, vector<int> &cuts) {
    if (i + 1 >= j) {
        return;
    }
    int k = cache[i][j].second;
    cuts.push_back(B[k]);
    makeCuts(cache, B, i, k, cuts);
    makeCuts(cache, B, k, j, cuts);
}

vector<int> Solution::rodCut(int A, vector<int> &B) {
    B.insert(B.begin(), 0);
    B.push_back(A);
    int n = B.size();
    vector<vector<pair<long long, int>>> cache(n,
                                               vector<pair<long long, int>>(n));
    for (int i = 0; i < n; i++) {
        cache[i][i] = pair<long long, int>(0, i);
    }
    for (int i = 0; i < n - 1; i++) {
        cache[i][i + 1] = pair<long long, int>(0, i);
    }
    for (int len = 2; len < n; len++) {
        for (int i = 0, j = len; j < n; i++, j++) {
            long long bestCost = LLONG_MAX, bestCut;
            for (int k = i + 1; k <= j - 1; k++) {
                long long cost = cache[i][k].first + cache[k][j].first;
                if (cost < bestCost) {
                    bestCost = cost;
                    bestCut = k;
                }
            }
            cache[i][j] = pair<long long, int>(bestCost + B[j] - B[i], bestCut);
        }
    }
    vector<int> cuts;
    makeCuts(cache, B, 0, n - 1, cuts);
    return cuts;
}
