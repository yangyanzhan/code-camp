// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/count-no-fill-zones.html .

int countNoFillZones(std::string words) {
    using namespace std;
    map<char, int> cache;
    cache['a'] = 1;
    cache['b'] = 1;
    cache['c'] = 0;
    cache['d'] = 1;
    cache['e'] = 1;
    cache['f'] = 0;
    cache['g'] = 1;
    cache['h'] = 0;
    cache['i'] = 0;
    cache['j'] = 0;
    cache['k'] = 0;
    cache['l'] = 0;
    cache['m'] = 0;
    cache['n'] = 0;
    cache['o'] = 1;
    cache['p'] = 1;
    cache['q'] = 1;
    cache['r'] = 0;
    cache['s'] = 0;
    cache['t'] = 0;
    cache['u'] = 0;
    cache['v'] = 0;
    cache['w'] = 0;
    cache['x'] = 0;
    cache['y'] = 0;
    cache['z'] = 0;
    cache['A'] = 1;
    cache['B'] = 2;
    cache['C'] = 0;
    cache['D'] = 1;
    cache['E'] = 0;
    cache['F'] = 0;
    cache['G'] = 0;
    cache['H'] = 0;
    cache['I'] = 0;
    cache['J'] = 0;
    cache['K'] = 0;
    cache['L'] = 0;
    cache['M'] = 0;
    cache['N'] = 0;
    cache['O'] = 1;
    cache['P'] = 1;
    cache['Q'] = 1;
    cache['R'] = 1;
    cache['S'] = 0;
    cache['T'] = 0;
    cache['U'] = 0;
    cache['V'] = 0;
    cache['W'] = 0;
    cache['X'] = 0;
    cache['Y'] = 0;
    cache['Z'] = 0;
    cache['0'] = 1;
    cache['1'] = 0;
    cache['2'] = 0;
    cache['3'] = 0;
    cache['4'] = 1;
    cache['5'] = 0;
    cache['6'] = 1;
    cache['7'] = 0;
    cache['8'] = 2;
    cache['9'] = 1;
    cache[' '] = 0;
    int res = 0;
    for (auto ch : words) {
        res += cache[ch];
    }
    return res;
}
