# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/_R6kCJMIoL8

unit module AllYourBase;

sub convert-base (:%bases!, :@digits!) is export {
    my $from = %bases{"from"};
    my $to = %bases{"to"};
    die "input base must be >= 2" if $from < 2 || $to < 2;
    for @digits -> $digit {
        die "all digits must satisfy 0 <= d < input base" if !(0 <= $digit < $from);
    }
    my $num = @digits.unshift(0).reduce({ $^a * $from + $^b });
    my @res = [];
    while $num >= $to {
        @res.unshift($num % $to);
        $num = $num div $to;
    }
    @res.unshift($num);
    return @res;
}
