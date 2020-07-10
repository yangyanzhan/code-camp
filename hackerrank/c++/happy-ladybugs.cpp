// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/happy-ladybugs.html .

string happyLadybugs(string colors) {
    map<char, int> cache;
    for (auto color : colors) {
        if (cache.find(color) == cache.end()) {
            cache[color] = 0;
        }
        cache[color]++;
    }
    for (auto it : cache) {
        if (it.first != '_' && it.second == 1) {
            return "NO";
        }
    }
    if (cache.find('_') == cache.end()) {
        char pre = '_';
        int count = 0;
        for (auto color : colors) {
            if (color == pre) {
                count++;
            } else {
                if (count == 1) {
                    return "NO";
                } else {
                    pre = color;
                    count = 1;
                }
            }
        }
    }
    return "YES";
}
