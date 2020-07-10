// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/pawn-race.html .

std::string pawn_race(int wx, int wy, int bx, int by, char to_move) {
    using namespace std;
    if (wy == 7) {
        return "white";
    }
    if (by == 0) {
        return "black";
    }
    bool could_win = false, could_draw = false;
    if (to_move == 'w') {
        if (wy + 1 == by) {
            if (wx + 1 == bx || wx - 1 == bx) {
                could_win = true;
            } else if (wx == bx) {
                could_draw = true;
            } else {
                string res = pawn_race(wx, wy + 1, bx, by, 'b');
                if (res == "white") {
                    could_win = true;
                } else if (res == "draw") {
                    could_draw = true;
                }
            }
        } else {
            string res = pawn_race(wx, wy + 1, bx, by, 'b');
            if (res == "white") {
                could_win = true;
            } else if (res == "draw") {
                could_draw = true;
            }
        }
        if (wy == 1 && ((wx != bx) || (wy + 1 != by && wy + 2 != by))) {
            string res = pawn_race(wx, wy + 2, bx, by, 'b');
            if (res == "white") {
                could_win = true;
            } else if (res == "draw") {
                could_draw = true;
            }
        }
    } else {
        if (by - 1 == wy) {
            if (bx + 1 == wx || bx - 1 == wx) {
                could_win = true;
            } else if (bx == wx) {
                could_draw = true;
            } else {
                string res = pawn_race(wx, wy, bx, by - 1, 'w');
                if (res == "black") {
                    could_win = true;
                } else if (res == "draw") {
                    could_draw = true;
                }
            }
        } else {
            string res = pawn_race(wx, wy, bx, by - 1, 'w');
            if (res == "black") {
                could_win = true;
            } else if (res == "draw") {
                could_draw = true;
            }
        }
        if (by == 6 && ((bx != wx) || (by - 1 != wy && by - 2 != wy))) {
            string res = pawn_race(wx, wy, bx, by - 2, 'w');
            if (res == "black") {
                could_win = true;
            } else if (res == "draw") {
                could_draw = true;
            }
        }
    }
    if (could_win) {
        return to_move == 'w' ? "white" : "black";
    } else if (could_draw) {
        return "draw";
    } else {
        return to_move == 'w' ? "black" : "white";
    }
}

std::string pawnRace(std::string white, std::string black, char toMove) {
    using namespace std;
    int wx = white[0] - 'a', wy = white[1] - '1';
    int bx = black[0] - 'a', by = black[1] - '1';
    return pawn_race(wx, wy, bx, by, toMove);
}
