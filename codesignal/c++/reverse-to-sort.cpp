// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/reverse-to-sort.html .

bool reverseToSort(std::vector<int> inputArray) {
    using namespace std;
    int n = inputArray.size();
    int start = -1, end = -1;
    for (int i = 1; i < n; i++) {
        if (inputArray[i] < inputArray[i - 1]) {
            if (end != -1) {
                return false;
            }
            if (start == -1) {
                start = i - 1;
            }
        } else if (inputArray[i] > inputArray[i - 1]) {
            if (start != -1 && end == -1) {
                end = i - 1;
            }
        } else {
            return false;
        }
    }
    if (start == -1) {
        return true;
    }
    if (start != -1 && end == -1) {
        end = n - 1;
    }
    if (start > 0) {
        if (inputArray[end] <= inputArray[start - 1]) {
            return false;
        }
    }
    if (end != n - 1) {
        if (inputArray[start] >= inputArray[end + 1]) {
            return false;
        }
    }
    return true;
}
