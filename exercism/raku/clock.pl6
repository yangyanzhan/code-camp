# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/e3fSzK8xtt8
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/clock.html .

unit class Clock;

has $.hour;
has $.minute;

submethod BUILD(:$hour, :$minute) {
    $!minute = $minute % 60;
    my $extra-hour = $minute div 60;
    $!hour = ($hour + $extra-hour) % 24;
}

method time {
    sprintf("%02d:%02d", $!hour, $!minute)
}

method add-minutes($minute) {
    my $extra-hour = ($!minute + $minute) div 60;
    $!minute = ($!minute + $minute) % 60;
    $!hour = ($!hour + $extra-hour) % 24;
    return self;
}

method subtract-minutes($minute) {
    return self.add-minutes(-$minute);
}
