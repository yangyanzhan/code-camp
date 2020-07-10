// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/interviewbit/excel-column-title.html .

string Solution::convertToTitle(int A) {
    string res;
    while (A > 0) {
        int residue = A % 26;
        if (residue == 0) {
            res += 'Z';
            A = A / 26 - 1;
        } else {
            res += residue - 1 + 'A';
            A = A / 26;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

