// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/simplify-directory-path.html .

string Solution::simplifyPath(string A) {
    A += "/";
    stack<string> pathes;
    int pre = 0, now = 0;
    while (true) {
        now = A.find("/", now);
        if (now == string::npos) {
            break;
        }
        string path = "";
        if (now > pre) {
            path = A.substr(pre + 1, now - pre - 1);
        }
        if (path != "" && path != ".") {
            if (path == "..") {
                if (!pathes.empty()) {
                    pathes.pop();
                }
            } else {
                pathes.push(path);
            }
        }
        pre = now;
        now = now + 1;
    }
    string res;
    while (!pathes.empty()) {
        string path = pathes.top();
        pathes.pop();
        reverse(path.begin(), path.end());
        res += path + "/";
    }
    reverse(res.begin(), res.end());
    if (res == "") {
        res = "/";
    }
    return res;
}
