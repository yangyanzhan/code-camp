// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/bit-work.html .

int execute(int res, string op, int num) {
    if (op == "") {
    } else if (op == "&") {
        res = res & num;
    } else if (op == "|") {
        res = res | num;
    } else if (op == "^") {
        res = res ^ num;
    } else if (op == "<<") {
        res = res << num;
    } else if (op == ">>") {
        res = res >> num;
    } else if (op == "SB") {
        res = res | (1 << num);
    } else if (op == "CB") {
        res = res & ~(1 << num);
    }
    return res;
}

int bitWork(std::string instructions) {
    using namespace std;
    int res = 0, n = instructions.length();
    for (int i = 0; i < n; i++) {
        res += instructions[i];
    }
    string ins = instructions + "E";
    string preOp = "";
    int preNum = 0;
    bool preIsNum = true;
    for (int i = 0; i < ins.length(); i++) {
        char ch = ins[i];
        if (!('0' <= ch && ch <= '9')) {
            if (preIsNum) {
                res = execute(res, preOp, preNum);
                preOp = "";
                preOp += ch;
                preNum = 0;
            } else {
                preOp += ch;
            }
            preIsNum = false;
        } else {
            preNum = preNum * 10 + (ch - '0');
            preIsNum = true;
        }
    }
    res = res ^ (1 << n);
    cout << res << endl;
    return res;
}
