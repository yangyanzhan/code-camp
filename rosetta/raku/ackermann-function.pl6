# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video :  .
# It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
# Disclaimer: this solution is quoted from Rosetta Code, for more solutions and code snippets, please visit Rosetta Code Website : http://rosettacode.org/wiki/Rosetta_Code . Thanks for the great work done by Rosetta maintainers and contributors, I could make video tutorials for Rosetta.

sub A(Int $m, Int $n) {
    if    $m == 0 { $n + 1 }
    elsif $n == 0 { A($m - 1, 1) }
    else          { A($m - 1, A($m, $n - 1)) }
}
