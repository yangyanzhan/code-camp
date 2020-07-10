// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/grasshopper-grade-book.html .

char getGrade(int a, int b, int c) {
    double score = (0.0 + a + b + c) / 3;
    if (score < 60) {
        return 'F';
    } else if (score < 70) {
        return 'D';
    } else if (score < 80) {
        return 'C';
    } else if (score < 90) {
        return 'B';
    } else {
        return 'A';
    }
}
