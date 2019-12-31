// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/space-age.html .

// space_age.h

namespace space_age {
    class space_age {
        long long _seconds;
        public:
            space_age(long long seconds): _seconds(seconds) {}
            long long seconds() const {
                return _seconds;
            }
            double on_earth() const;
            double on_mercury() const;
            double on_venus() const;
            double on_mars() const;
            double on_jupiter() const;
            double on_saturn() const;
            double on_uranus() const;
            double on_neptune() const;
    };
}

// space_age.cpp

#include "space_age.h"

namespace space_age {
    double space_age::on_earth() const {
        return seconds() / 31557600.0;
    }
    double space_age::on_mercury() const {
        return on_earth() / 0.2408467;
    }
    double space_age::on_venus() const {
        return on_earth() / 0.61519726;
    }
    double space_age::on_mars() const {
        return on_earth() / 1.8808158;
    }
    double space_age::on_jupiter() const {
        return on_earth() / 11.862615;
    }
    double space_age::on_saturn() const {
        return on_earth() / 29.447498;
    }
    double space_age::on_uranus() const {
        return on_earth() / 84.016846;
    }
    double space_age::on_neptune() const {
        return on_earth() / 164.79132;
    }
}

