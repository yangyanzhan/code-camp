// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/phone-number.html .

// phone_number.h

#include <regex>
#include <string>

using namespace std;

namespace phone_number {
    class phone_number {
        string phone;
        public:
            phone_number(string raw);
            string number() const;
            string area_code() const;
            operator std::string() const {
                return "(" + phone.substr(0, 3) + ") " + phone.substr(3, 3) + "-" + phone.substr(6);
            }
    };
};

// phone_number.cpp

#include "phone_number.h"

namespace phone_number {
    phone_number::phone_number(string raw) {
        regex reg("[^\\d]");
        phone = regex_replace(raw, reg, "");
        if (phone.size() != 10) {
            if (phone.size() == 11 && phone[0] == '1') {
                phone = phone.substr(1);
            } else {
                phone = "0000000000";
            }
        }
    }
    
    string phone_number::number() const {
        return phone;
    }
    
    string phone_number::area_code() const {
        return phone.substr(0, 3);
    }
}

