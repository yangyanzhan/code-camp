# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/_R6kCJMIoL8
# Blog URL for this problem: https://yanzhan.site/exercism/raku/robot-name.html .

unit class Robot;

our $test-all-names = False;

has $.name;

my %names;

submethod BUILD() {
    self.reset-name;
}

method reset-name() is export {
    loop {
        $!name = (|("A".."Z").pick(2), |(0..9).pick(3)).join("");
        if !(%names{$!name}:exists) {
            %names{$!name} = True;
            last;
        }
    }
}

