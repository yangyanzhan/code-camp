# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/Zj5kfResdns

unit module RNA;

sub to-rna ($dna) is export {
    $dna.trans("ATGC" => "UACG")
}
