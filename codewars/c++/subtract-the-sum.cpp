// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/subtract-the-sum.html .

#include <string>
using namespace std;

std::vector<std::string> fruits {
"kiwi", "pear", "kiwi", "banana", "melon", "banana", "melon", "pineapple", "apple", "pineapple",
"cucumber", "pineapple", "cucumber", "orange", "grape", "orange", "grape", "apple", "grape", "cherry",
"pear", "cherry", "pear", "kiwi", "banana", "kiwi", "apple", "melon", "banana", "melon",
"pineapple", "melon", "pineapple", "cucumber", "orange", "apple", "orange", "grape", "orange", "grape",
"cherry", "pear", "cherry", "pear", "apple", "pear", "kiwi", "banana", "kiwi", "banana",
"melon", "pineapple", "melon", "apple", "cucumber", "pineapple", "cucumber", "orange", "cucumber", "orange",
"grape", "cherry", "apple", "cherry", "pear", "cherry", "pear", "kiwi", "pear", "kiwi",
"banana", "apple", "banana", "melon", "pineapple", "melon", "pineapple", "cucumber", "pineapple", "cucumber",
"apple", "grape", "orange", "grape", "cherry", "grape", "cherry", "pear", "cherry", "apple",
"kiwi", "banana", "kiwi", "banana", "melon", "banana", "melon", "pineapple", "apple", "pineapple"
};

int sumDigits(int n)
{
  int sum = 0;
  while (n != 0) {
    sum += n%10;
    n = n/10;
  }
  return sum;
}

string SubtractSum(int n)
{
  int value = n - sumDigits(n);
  if (value > 100)
    return SubtractSum(value);
  return fruits[value-1];
}
