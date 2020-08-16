// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/two-fighters-one-winner.html .

using namespace std;

string fight(Fighter *f1, Fighter *f2) {
    if (f1->getHealth() <= 0) {
        return f2->getName();
    }
    if (f2->getHealth() <= 0) {
        return f1->getName();
    }
    f2->setHealth(f2->getHealth() - f1->getDamagePerAttack());
    return fight(f2, f1);
}

std::string declareWinner(Fighter *fighter1, Fighter *fighter2,
                          std::string firstAttacker) {
    return fighter1->getName() == firstAttacker ? fight(fighter1, fighter2)
                                                : fight(fighter2, fighter1);
}
