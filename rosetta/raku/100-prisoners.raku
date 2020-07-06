# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
# For this specific algothmic problem, visit my Youtube Video :  .
# It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
# Disclaimer: this solution is quoted from Rosetta Code, for more solutions and code snippets, please visit Rosetta Code Website : http://rosettacode.org/wiki/Rosetta_Code . Thanks for the great work done by Rosetta maintainers and contributors, I could make video tutorials for Rosetta.

unit sub MAIN (:$prisoners = 100, :$simulations = 10000);
my @prisoners = ^$prisoners;
my $half = floor +@prisoners / 2;

sub random ($n) {
    ^$n .race.map( {
        my @drawers = @prisoners.pick: *;
        @prisoners.map( -> $prisoner {
            my $found = 0;
            for @drawers.pick($half) -> $card {
                $found = 1 and last if $card == $prisoner
            }
            last unless $found;
            $found
        }
        ).sum == @prisoners
    }
    ).grep( *.so ).elems / $n * 100
}

sub optimal ($n) {
    ^$n .race.map( {
        my @drawers = @prisoners.pick: *;
        @prisoners.map( -> $prisoner {
            my $found = 0;
            my $card = @drawers[$prisoner];
            if $card == $prisoner {
                $found = 1
            } else {
                for ^($half - 1) {
                    $card = @drawers[$card];
                    $found = 1 and last if $card == $prisoner
                }
            }
            last unless $found;
            $found
        }
        ).sum == @prisoners
    }
    ).grep( *.so ).elems / $n * 100
}

say "Testing $simulations simulations with $prisoners prisoners.";
printf " Random play wins: %.3f%% of simulations\n", random $simulations;
printf "Optimal play wins: %.3f%% of simulations\n", optimal $simulations;
