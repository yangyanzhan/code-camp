# For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/LDkDgkafAGQ

unit class Bob;

method hey ($msg) {
    given $msg {
        when /^<[A..Z\s]>+\?$/ { "Calm down, I know what I'm doing!" }
        when /^\s*$/ { "Fine. Be that way!" }
        when /\?\s*$/ { "Sure." }
        when /^<-[a..z]>*<[A..Z]><-[a..z]>*$/ { "Whoa, chill out!" }
        default { "Whatever." }
    }
}
