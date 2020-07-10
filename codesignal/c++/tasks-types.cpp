// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/tasks-types.html .

std::vector<int> tasksTypes(std::vector<int> deadlines, int day) {
    using namespace std;
    int today = 0, upcoming = 0, later = 0;
    for (auto num : deadlines) {
        if (num <= day) {
            today++;
        } else if (num <= day + 7) {
            upcoming++;
        } else {
            later++;
        }
    }
    return {today, upcoming, later};
}
