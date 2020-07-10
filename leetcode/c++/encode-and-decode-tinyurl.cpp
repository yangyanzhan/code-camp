// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/encode-and-decode-tinyurl.html .

class Solution {
    int count = 0;
    map<string, string> cache;
    string prefix = "http://tinyurl.com/";

  public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        count++;
        cache[to_string(count)] = longUrl;
        return prefix + to_string(count);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        auto token = shortUrl.substr(prefix.size());
        return cache[token];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
