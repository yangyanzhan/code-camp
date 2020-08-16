// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/heavy-metal-umlauts.html .

using namespace std;

std::string heavyMetalUmlauts(std::string boringText) {
    string::iterator it = boringText.begin();
    string res;

    for (; it != boringText.end(); ++it) {
        switch (*it) {
        case 'A':
            res.append("\u00c4");
            break;
        case 'a':
            res.append("\u00e4");
            break;
        case 'O':
            res.append("\u00d6");
            break;
        case 'o':
            res.append("\u00f6");
            break;
        case 'E':
            res.append("\u00cb");
            break;
        case 'e':
            res.append("\u00eb");
            break;
        case 'U':
            res.append("\u00dc");
            break;
        case 'u':
            res.append("\u00fc");
            break;
        case 'I':
            res.append("\u00cf");
            break;
        case 'i':
            res.append("\u00ef");
            break;
        case 'Y':
            res.append("\u0178");
            break;
        case 'y':
            res.append("\u00ff");
            break;
        default:
            res.append(1, *it);
            break;
        }
    }
    return res;
}
