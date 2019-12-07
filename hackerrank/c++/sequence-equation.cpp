// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/sequence-equation.html .

vector<int> permutationEquation(vector<int> p) {
    map<int, int> mapping;
    for (int i = 0; i < p.size(); i++) {
        mapping[p[i]] = i + 1;
    }
    vector<int> res(p.size());
    for (int i = 0; i < p.size(); i++) {
        int num = i + 1;
        res[i] = mapping[mapping[num]];
    }
    return res;
}
