// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/equal.html .

vector<int> Solution::equal(vector<int> &A) {
    map<int, vector<int>> cache;
    vector<int> best;
    int n = A.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = A[i] + A[j];
            if (cache.find(sum) == cache.end()) {
                cache[sum] = vector<int>{i, j};
            } else {
                vector<int> ij1 = cache[sum];
                int i1 = ij1[0], j1 = ij1[1];
                set<int> nums;
                nums.insert(i);
                nums.insert(j);
                nums.insert(i1);
                nums.insert(j1);
                if (nums.size() == 4) {
                    vector<int> res = vector<int>{i1, j1, i, j};
                    if (best.size() <= 0) {
                        best = res;
                    } else {
                        bool smaller = false;
                        for (int i = 0; i < 4; i++) {
                            if (res[i] < best[i]) {
                                smaller = true;
                            }
                            if (res[i] != best[i]) {
                                break;
                            }
                        }
                        if (smaller) {
                            best = res;
                        }
                    }
                }
            }
        }
    }
    return best;
}
