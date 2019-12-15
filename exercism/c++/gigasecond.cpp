// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/exercism/gigasecond.html .

// gigasecond.h

#include "boost/date_time/gregorian/gregorian.hpp"

using boost::gregorian::date;

class gigasecond {
    public:
        static date advance(date baseDate);
};

// gigasecond.cpp

#include "gigasecond.h"

bool isLeap(int year) {
    return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int daysForYM(int year, int month) {
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 2:
            return isLeap(year) ? 29 : 28;
        default:
            return 30;
    }
}

void incMonth(int &month) {
    month %= 12;
    month += 1;
}

void decMonth(int &month) {
    month -= 1;
    month = month == 0 ? 12 : month;
}

date gigasecond::advance(date baseDate) {
    int year = baseDate.year(), month = baseDate.month(), day = baseDate.day();
    int remains = 1000000000 / (60 * 60 * 24) + day;
    decMonth(month);
    if (month == 12) {
        year -= 1;
    }
    while (true) {
        int newYear = year, newMonth = month;
        incMonth(newMonth);
        if (newMonth == 1) {
            newYear += 1;
        }
        int newDay = daysForYM(newYear, newMonth);
        if (remains >= newDay) {
            year = newYear;
            month = newMonth;
            remains -= newDay;
        } else {
            break;
        }
    }
    if (remains == 0) {
        return date(year, month, daysForYM(year, month));
    } else {
        incMonth(month);
        if (month == 1) {
            year += 1;
        }
        return date(year, month, remains);
    }
}
