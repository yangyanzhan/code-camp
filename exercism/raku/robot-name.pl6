# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : 

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

