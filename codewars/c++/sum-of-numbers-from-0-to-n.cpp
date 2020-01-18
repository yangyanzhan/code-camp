// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/sum-of-numbers-from-0-to-n.html .

using namespace std;

class SequenceSum{
  int count;
  public:
  SequenceSum (int);
  string showSequence();

};

string SequenceSum::showSequence(){
    stringstream ss;
    if (count < 0) {
        ss << count << "<0";
        return ss.str();
    }
    if (count == 0) {
        return "0=0";
    }
    int sum = 0;
    for (int i = 0; i <= count; i++) {
        ss << i << (i == count ? "" : "+");
        sum += i;
    }
    ss << " = " << sum;
    return ss.str();
}

SequenceSum::SequenceSum (int c) {
  count = c;
}
