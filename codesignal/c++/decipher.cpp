// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/decipher.html .

bool decipher(std::string cipher, std::string &plain) {
    using namespace std;
    if (cipher.size() == 0) {
        return true;
    }
    for (int i = 0; i < cipher.size(); i++) {
        string head = cipher.substr(0, i + 1);
        string tail = cipher.substr(i + 1);
        if (head.size() > 3) {
            break;
        }
        int h = stoi(head);
        if (!('a' <= h && h <= 'z')) {
            continue;
        }
        plain += char(h);
        if (decipher(tail, plain)) {
            return true;
        }
        plain = plain.substr(0, plain.size() - 1);
    }
    return false;
}

std::string decipher(std::string cipher) {
    using namespace std;
    string res = "";
    decipher(cipher, res);
    return res;
}
