// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/nqueens.html .

void solve(vector<int> &placed, int n, vector<vector<int>> &res) {
    int ti = placed.size();
    if (ti == n) {
        res.push_back(vector<int>(placed));
    }
    for (int tj = 0; tj < n; tj++) {
        bool found = false;
        for (int fi = 0; fi < placed.size(); fi++) {
            int fj = placed[fi];
            if (tj == fj) {
                found = true;
                break;
            }
            int di = abs(ti - fi), dj = abs(tj - fj);
            if (di == dj) {
                found = true;
                break;
            }
        }
        if (!found) {
            placed.push_back(tj);
            solve(placed, n, res);
            placed.pop_back();
        }
    }
}

string getRow(int num, int n) {
    string row;
    for (int i = 0; i < n; i++) {
        if (i == num) {
            row += "Q";
        } else {
            row += ".";
        }
    }
    return row;
}

vector<vector<string>> Solution::solveNQueens(int A) {
    vector<vector<int>> numRes;
    vector<int> placed;
    solve(placed, A, numRes);
    vector<vector<string>> res;
    for (vector<int> numItem : numRes) {
        vector<string> item;
        for (int num : numItem) {
            item.push_back(getRow(num, A));
        }
        res.push_back(item);
    }
    return res;
}
