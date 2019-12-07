// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/hackerrank/count-triplets.html .

long countTriplets(vector<long> arr, long r) {
    long res = 0;
    map<long, long> mapping1;
    map<long, long> mapping2;
    for (auto num : arr) {
        if (num % r == 0) {
            long pre = num / r;
            if (mapping2.find(pre) != mapping2.end()) {
                res += mapping2[pre];
            }
        }
        if (mapping2.find(num) == mapping2.end()) {
            mapping2[num] = 0;
        }
        if (num % r == 0) {
            long pre = num / r;
            if (mapping1.find(pre) != mapping1.end()) {
                mapping2[num] += mapping1[pre];
            }
        }
        if (mapping1.find(num) == mapping1.end()) {
            mapping1[num] = 0;
        }
        mapping1[num]++;
    }
    return res;
}
