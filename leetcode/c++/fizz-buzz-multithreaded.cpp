// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/leetcode/fizz-buzz-multithreaded.html .

class FizzBuzz {
  private:
    int n;
    atomic<int> num_atom = 1;

  public:
    FizzBuzz(int n) { this->n = n; }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        while (true) {
            int num = num_atom.load();
            if (num > n) {
                return;
            }
            if (num % 3 == 0 && num % 5 != 0) {
                printFizz();
                num_atom++;
            }
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        while (true) {
            int num = num_atom.load();
            if (num > n) {
                return;
            }
            if (num % 3 != 0 && num % 5 == 0) {
                printBuzz();
                num_atom++;
            }
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
    void fizzbuzz(function<void()> printFizzBuzz) {
        while (true) {
            int num = num_atom.load();
            if (num > n) {
                return;
            }
            if (num % 3 == 0 && num % 5 == 0) {
                printFizzBuzz();
                num_atom++;
            }
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        while (true) {
            int num = num_atom.load();
            if (num > n) {
                return;
            }
            if (num % 3 != 0 && num % 5 != 0) {
                printNumber(num);
                num_atom++;
            }
        }
    }
};
