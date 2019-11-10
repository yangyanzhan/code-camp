# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/Zj5kfResdns

unit module ETL;

sub transform (%input) is export {
    my Int:D %output{Str:D};
    for %input.kv -> $score, @chars {
        for @chars -> $char {
            %output{$char.lc} = $score;
        }
    }
    return %output;
}
