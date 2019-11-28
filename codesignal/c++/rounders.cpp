// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/rounders.html .

int rounders(int n) {
    using namespace std;
    string item = to_string(n);
    int carry = 0;
    for (int i = item.size() - 1; i >= 1; i--) {
        int digit = item[i] - '0' + carry;
        if (digit < 5) {
            carry = 0;
        } else {
            carry = 1;
        }
        item[i] = '0';
    }
    if (item[0] < '9') {
        item[0] = item[0] + carry;
    } else {
        item[0] = '0';
        item = "1" + item;
    }
    return stoi(item);
}

