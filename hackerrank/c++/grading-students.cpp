// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/grading-students.html .

vector<int> gradingStudents(vector<int> grades) {
    vector<int> res;
    for (auto grade: grades) {
        if (grade < 38) {
        } else if (grade % 5 != 0) {
            int target = (grade / 5 + 1) * 5;
            if (target - grade < 3) {
                grade = target;
            }
        }
        res.push_back(grade);
    }
    return res;
}
