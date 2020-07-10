// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/longest-uncorrupted-segment.html .

std::vector<int> longestUncorruptedSegment(std::vector<int> sourceArray,
                                           std::vector<int> destinationArray) {
    using namespace std;
    int best_len = 0, best_idx = 0, len = 0, idx = 0;
    for (int i = 0; i < sourceArray.size(); i++) {
        if (sourceArray[i] == destinationArray[i]) {
            if (len == 0) {
                len = 1;
                idx = i;
            } else {
                len++;
            }
        }
        if (sourceArray[i] != destinationArray[i] ||
            i == sourceArray.size() - 1) {
            if (len > best_len) {
                best_len = len;
                best_idx = idx;
            }
            len = 0;
        }
    }
    return {best_len, best_idx};
}
