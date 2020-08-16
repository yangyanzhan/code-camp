// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/fun-with-operators.html .

using namespace std;

class Person {
  public:
    Person(int age) : m_age(age) {}

    bool operator==(const Person &other) const { return m_age == other.m_age; }

    bool operator!=(const Person &other) const { return m_age != other.m_age; }

    bool operator<=(const Person &other) const { return m_age <= other.m_age; }

    bool operator>=(const Person &other) const { return m_age >= other.m_age; }

    bool operator<(const Person &other) const { return m_age < other.m_age; }

    bool operator>(const Person &other) const { return m_age > other.m_age; }

  private:
    const int m_age;
};
