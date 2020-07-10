// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/finish-guess-the-number-game.html .

#include <stdexcept>

class Guesser {
  public:
    Guesser(int number, int lives) : number(number), lives(lives) {}

    bool guess(int n) {
        if (lives > 0) {
            if (n == number) {
                return true;
            } else {
                lives--;
                return false;
            }
        }
        throw std::exception();
    }

  private:
    int number, lives;
};
