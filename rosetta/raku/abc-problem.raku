# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/fp6uFbfal78 .
# It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
# Blog URL for this problem: https://yanzhan.site/rosetta/abc-problem.html .
# Disclaimer: this solution is quoted from Rosetta Code, for more solutions and code snippets, please visit Rosetta Code Website : http://rosettacode.org/wiki/Rosetta_Code . Thanks for the great work done by Rosetta maintainers and contributors, I could make video tutorials for Rosetta.

multi can-spell-word(Str $word, @blocks) {
    my @regex = @blocks.map({ my @c = .comb; rx/<@c>/ }).grep: { .ACCEPTS($word.uc) }
    can-spell-word $word.uc.comb.list, @regex;
}

multi can-spell-word([$head,*@tail], @regex) {
    for @regex -> $re {
        if $head ~~ $re {
            return True unless @tail;
            return False if @regex == 1;
            return True if can-spell-word @tail, list @regex.grep: * !=== $re;
        }
    }
    False;
}

my @b = <BO XK DQ CP NA GT RE TG QD FS JW HU VI AN OB ER FS LY PC ZM>;

for <A BaRK BOoK tREaT COmMOn SqUAD CoNfuSE> {
    say "$_     &can-spell-word($_, @b)";
}
