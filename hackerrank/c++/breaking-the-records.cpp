// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/breaking-the-records.html .

vector<int> breakingRecords(vector<int> scores) {
    int max_score = scores[0], min_score = scores[0], max_count = 0,
        min_count = 0;
    for (int i = 1; i < scores.size(); i++) {
        int score = scores[i];
        if (score > max_score) {
            max_score = score;
            max_count++;
        }
        if (score < min_score) {
            min_score = score;
            min_count++;
        }
    }
    return {max_count, min_count};
}
