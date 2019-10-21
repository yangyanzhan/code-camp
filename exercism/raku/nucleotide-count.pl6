# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/LDkDgkafAGQ

unit module NucleotideCount;

sub nucleotide-count ($strand) is export {
    die "Invalid nucleotide in strand" if $strand ~~ /<-[ATGC]>/;
    my %res;
    for $strand.comb {
        %res{$_}++;
    }
    return %res;
}
