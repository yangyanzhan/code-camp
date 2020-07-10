// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/package-boxing.html .

int packageBoxing(std::vector<int> pkg, std::vector<std::vector<int>> boxes) {
    using namespace std;
    int best_size = numeric_limits<int>::max();
    sort(pkg.begin(), pkg.end());
    int res = -1;
    for (int i = 0; i < boxes.size(); i++) {
        auto box = boxes[i];
        sort(box.begin(), box.end());
        bool valid = true;
        for (int j = 0; j < pkg.size(); j++) {
            if (pkg[j] > box[j]) {
                valid = false;
                break;
            }
        }
        int size = 1;
        for (int j = 0; j < box.size(); j++) {
            size *= box[j];
        }
        if (valid) {
            if (size < best_size) {
                best_size = size;
                res = i;
            }
        }
    }
    return res;
}
