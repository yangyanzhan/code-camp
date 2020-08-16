// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/compose-protocol-packet.html .

#include <cstdio>

unsigned char crc8(const unsigned char *pc_block, unsigned int len);

int compose_packet(unsigned char *packet, unsigned int id_number,
                   unsigned char state, unsigned long long int scenario_mask,
                   unsigned int volume, unsigned int status) {
    if (id_number > 0xFFFF || state > 0x7F || scenario_mask > 0xFFFFFFFFFFFF ||
        volume > 999999 || status < 0xFF || status > 0xFFFF) {
        return -1;
    }

    packet[0] = 0x2;
    snprintf((char *)packet + 1, 30, "%04X%02X%012llX%06d%04X", id_number,
             state, scenario_mask, volume, status);
    packet[29] = 0x3;
    packet[30] = crc8(packet + 1, 28);

    return 1;
}
