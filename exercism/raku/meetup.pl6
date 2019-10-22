# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : 

unit module Meetup;

grammar MeetUp {
    has $.order-no is rw = 0;
    has $.day-no is rw = 0;
    has $.month-no is rw = 0;
    rule TOP {
        | <order> <day> 'of' <month> <year>
        | <tenth> 'of' <month> <year>
    }
    token order {
        | 'first' { $.order-no = 1 }
        | 'second' { $.order-no = 2 }
        | 'third' { $.order-no = 3 }
        | 'fourth' { $.order-no = 4 }
        | 'fifth' { $.order-no = 5 }
        | 'last' { $.order-no = -1 }
    }
    token day {
        | 'Monday' { $.day-no = 1 }
        | 'Tuesday' { $.day-no = 2 }
        | 'Wednesday' { $.day-no = 3 }
        | 'Thursday' { $.day-no = 4 }
        | 'Friday' { $.day-no = 5 }
        | 'Saturday' { $.day-no = 6 }
        | 'Sunday' { $.day-no = 7 }
    }
    token month {
        | 'January' { $.month-no = 1 }
        | 'February' { $.month-no = 2 }
        | 'March' { $.month-no = 3 }
        | 'April' { $.month-no = 4 }
        | 'May' { $.month-no = 5 }
        | 'June' { $.month-no = 6 }
        | 'July' { $.month-no = 7 }
        | 'August' { $.month-no = 8 }
        | 'September' { $.month-no = 9 }
        | 'October' { $.month-no = 10 }
        | 'November' { $.month-no = 11 }
        | 'December' { $.month-no = 12 }
    }
    token tenth {
        | 'monteenth' { $.day-no = 1 }
        | 'tuesteenth' { $.day-no = 2 }
        | 'wednesteenth' { $.day-no = 3 }
        | 'thursteenth' { $.day-no = 4 }
        | 'friteenth' { $.day-no = 5 }
        | 'saturteenth' { $.day-no = 6 }
        | 'sunteenth' { $.day-no = 7 }
    }
    token year {
        \d+
    }
}

class Actions {
    method TOP($/) {
        my $year = $<year>.Int;
        my $month = $/.month-no;
        my $day = 1;
        my $day-count = 0;
        if $<order> {
            for 1..31 -> $i {
                my $date = try Date.new($year, $month, $i);
                last if !defined $date;
                if $date.day-of-week == $/.day-no {
                    $day-count++;
                    $day = $i;
                    if $day-count == $/.order-no {
                        last;
                    }
                }
            }
        } else {
            for 10..19 -> $i {
                my $date = try Date.new($year, $month, $i);
                last if !defined $date;
                if $date.day-of-week == $/.day-no {
                    $day = $i;
                }
            }
        }
        make sprintf('%04d-%02d-%02d', $<year>.Int, $/.month-no, $day);
    }
}

sub meetup-date ($desc) is export {
    MeetUp.parse($desc, actions => Actions).made;
}

