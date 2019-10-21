# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
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
