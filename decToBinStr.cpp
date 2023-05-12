#include<string.h>
#include<bitset>

//ここはＣ＋＋。「10進数」を「2進数の文字列」に変換する
std::string BinStr;
const char* decToBinStr(long long dec, int numBits)
{
    switch (numBits)
    {
    case  4: BinStr = std::bitset<4>(dec).to_string(); break;
    case  8: BinStr = std::bitset<8>(dec).to_string(); break;
    case 16: BinStr = std::bitset<16>(dec).to_string(); break;
    case 32: BinStr = std::bitset<32>(dec).to_string(); break;
    case 64: BinStr = std::bitset<64>(dec).to_string(); break;
    default: return "numBits Error! Use 4 or 8 or 16 or 32 or 64.";
    }

    return BinStr.c_str();
}