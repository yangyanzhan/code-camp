// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/going-to-the-cinema.html .

#include <cmath>

class Movie {
public:
    static int movie(int card, int ticket, double perc) {
        int res = 0;
        double a = 0, b = card, c = ticket;
        while (round(b) >= a) {
            a += ticket;
            c *= perc;
            b += c;
            res++;
        }
        return res;
    }
};

