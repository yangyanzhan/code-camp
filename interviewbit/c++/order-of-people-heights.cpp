// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/order-of-people-heights.html .

vector<int> Solution::order(vector<int> &heights, vector<int> &infronts) {
    vector<int> result(heights.size(), -1);
    map<int, int> htsAndFronts;
    for (int i = 0; i < heights.size(); i++) {
        htsAndFronts[heights[i]] = infronts[i];
    }
    for (map<int, int>::iterator it = htsAndFronts.begin();
         it != htsAndFronts.end(); ++it) {
        int i = 0;
        int j = 0;
        while (i != it->second) {
            if (result[j] == -1)
                i++;
            j++;
        }
        while (result[j] != -1)
            j++;
        result[j] = it->first;
    }
    return result;
}
