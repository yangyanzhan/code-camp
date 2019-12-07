// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/palindrome-index.html .

int palindromeIndex(string s) {
    int begin = 0, end = s.size() - 1;
    while (begin < end) {
        if (s[begin] != s[end]) {
            int ori_begin = begin, ori_end =end;
            begin++;
            while (begin < end) {
                if (s[begin] != s[end]) {
                    break;
                }
                begin++;
                end--;
            }
            if (begin >= end) {
                return ori_begin;
            }
            begin = ori_begin;
            end = ori_end - 1;
            while (begin < end) {
                if (s[begin] != s[end]) {
                    break;
                }
                begin++;
                end--;
            }
            if (begin >= end) {
                return ori_end;
            }
            break;
        }
        begin++;
        end--;
    }
    return -1;
}
