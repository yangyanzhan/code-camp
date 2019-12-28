// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sorted-yes-no-how.html .

std::string is_sorted_and_how(std::vector<int> array) {
    int dir = 0;
    for (int i = 1; i < array.size(); i++) {
        if (array[i] > array[i - 1]) {
            if (dir == 0) {
                dir = 1;
            } else if (dir == -1) {
                return "no";
            }
        } else if (array[i] < array[i - 1]) {
            if (dir == 0) {
                dir = -1;
            } else if (dir == 1) {
                return "no";
            }
        }
    }
    return dir == 1 ? "yes, ascending" : "yes, descending";
}

