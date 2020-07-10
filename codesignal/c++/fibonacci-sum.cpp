// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/fibonacci-sum.html .

bool search(int n, std::vector<int> &fibs, std::vector<int> &visited) {
    using namespace std;
    if (n == 0) {
        return true;
    }
    for (int i = fibs.size() - 1; i >= 0; i--) {
        if (fibs[i] <= n) {
            if (!visited[i]) {
                visited[i] = true;
                if (search(n - fibs[i], fibs, visited)) {
                    return true;
                }
                visited[i] = false;
            }
            if (i - 1 >= 0 && !visited[i - 1]) {
                visited[i - 1] = true;
                if (search(n - fibs[i - 1], fibs, visited)) {
                    return true;
                }
                visited[i - 1] = false;
            }
            break;
        }
    }
    return false;
}

std::vector<int> fibonacciSum(int n) {
    using namespace std;
    vector<int> fibs{1, 1};
    while (fibs.back() < n) {
        fibs.push_back(fibs[fibs.size() - 1] + fibs[fibs.size() - 2]);
    }
    vector<int> visited(fibs.size(), false);
    search(n, fibs, visited);
    vector<int> res;
    for (int i = 0; i < visited.size(); i++) {
        if (visited[i]) {
            res.push_back(fibs[i]);
        }
    }
    return res;
}
