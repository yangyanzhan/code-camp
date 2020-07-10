// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/return-location.html .

class Person {
  public:
    Person(int x, int y, int z) : m_x(x), m_y(y), m_z(z) {}

    void location(int &x, int &y, int &z) {
        x = m_x;
        y = m_y;
        z = m_z;
    }

  private:
    int m_x;
    int m_y;
    int m_z;
};
