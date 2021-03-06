#ifndef TEMPLET_DB_Dialog_H
#define TEMPLET_DB_Dialog_H
#include <map>
#include <tuple>
#include <string>
#include <vector>
#include <eosiolib/eosio.hpp>
using namespace std;
using namespace eosio;
struct DB_Dialog_Data
{
};
class DB_Dialog;
static DB_Dialog* DB_Dialog_instanse = nullptr;
class DB_Dialog
{
public:
static DB_Dialog* getInstanse()
{
    if(DB_Dialog_instanse)
        return  DB_Dialog_instanse;
        DB_Dialog_instanse = new DB_Dialog();
    return  DB_Dialog_instanse;
}
int getCount()
{
    return db_data.size();
}
vector<int> getAllIds()
{
    vector<int> ids;
    for(auto &it : db_data)
    {
        ids.push_back(it.first);
    }
    return ids;
}
const DB_Dialog_Data& getDataById(int id)
{
    auto iter = db_data.find(id);
    eosio_assert(iter==db_data.end(),"id is not exist");
    return iter->second;
};
private:
    map<int,DB_Dialog_Data> db_data;
public:
DB_Dialog()
{
    db_data[1] = {};
    db_data[2] = {};
    db_data[3] = {};
    db_data[4] = {};
    db_data[5] = {};
    db_data[6] = {};
    db_data[7] = {};
    db_data[8] = {};
    db_data[9] = {};
    db_data[10] = {};
    db_data[11] = {};
    db_data[12] = {};
    db_data[13] = {};
    db_data[14] = {};
    db_data[15] = {};
    db_data[16] = {};
    db_data[17] = {};
    db_data[18] = {};
    db_data[19] = {};
    db_data[20] = {};
    db_data[21] = {};
    db_data[22] = {};
    db_data[23] = {};
    db_data[24] = {};
    db_data[25] = {};
    db_data[26] = {};
    db_data[27] = {};
    db_data[28] = {};
    db_data[29] = {};
    db_data[30] = {};
    db_data[31] = {};
    db_data[32] = {};
    db_data[33] = {};
    db_data[34] = {};
    db_data[35] = {};
    db_data[36] = {};
    db_data[37] = {};
    db_data[38] = {};
    db_data[39] = {};
    db_data[40] = {};
    db_data[41] = {};
    db_data[42] = {};
    db_data[43] = {};
    db_data[44] = {};
    db_data[45] = {};
    db_data[46] = {};
    db_data[47] = {};
    db_data[48] = {};
    db_data[49] = {};
    db_data[50] = {};
    db_data[51] = {};
    db_data[52] = {};
    db_data[53] = {};
    db_data[54] = {};
    db_data[55] = {};
    db_data[56] = {};
    db_data[57] = {};
    db_data[58] = {};
    db_data[59] = {};
    db_data[60] = {};
    db_data[61] = {};
    db_data[62] = {};
    db_data[63] = {};
    db_data[64] = {};
    db_data[65] = {};
    db_data[66] = {};
    db_data[67] = {};
    db_data[68] = {};
    db_data[69] = {};
    db_data[70] = {};
    db_data[71] = {};
    db_data[72] = {};
    db_data[73] = {};
    db_data[74] = {};
    db_data[75] = {};
    db_data[76] = {};
    db_data[77] = {};
    db_data[78] = {};
    db_data[79] = {};
    db_data[80] = {};
    db_data[81] = {};
    db_data[82] = {};
    db_data[83] = {};
    db_data[84] = {};
    db_data[85] = {};
    db_data[86] = {};
    db_data[87] = {};
    db_data[88] = {};
    db_data[89] = {};
    db_data[90] = {};
    db_data[91] = {};
    db_data[92] = {};
    db_data[93] = {};
    db_data[94] = {};
    db_data[95] = {};
    db_data[96] = {};
    db_data[97] = {};
    db_data[98] = {};
    db_data[99] = {};
    db_data[100] = {};
    db_data[101] = {};
    db_data[102] = {};
    db_data[103] = {};
    db_data[104] = {};
    db_data[105] = {};
    db_data[106] = {};
    db_data[107] = {};
    db_data[108] = {};
    db_data[109] = {};
    db_data[110] = {};
    db_data[111] = {};
    db_data[112] = {};
    db_data[113] = {};
    db_data[114] = {};
    db_data[115] = {};
    db_data[116] = {};
    db_data[117] = {};
    db_data[118] = {};
    db_data[119] = {};
    db_data[120] = {};
    db_data[121] = {};
    db_data[122] = {};
    db_data[123] = {};
    db_data[124] = {};
    db_data[125] = {};
    db_data[126] = {};
    db_data[127] = {};
    db_data[128] = {};
    db_data[129] = {};
    db_data[130] = {};
    db_data[131] = {};
    db_data[132] = {};
    db_data[133] = {};
    db_data[134] = {};
    db_data[135] = {};
    db_data[136] = {};
    db_data[137] = {};
    db_data[138] = {};
    db_data[139] = {};
    db_data[140] = {};
    db_data[141] = {};
    db_data[142] = {};
    db_data[143] = {};
    db_data[144] = {};
    db_data[145] = {};
    db_data[146] = {};
    db_data[147] = {};
    db_data[148] = {};
    db_data[149] = {};
    db_data[150] = {};
    db_data[151] = {};
    db_data[152] = {};
    db_data[153] = {};
    db_data[154] = {};
    db_data[155] = {};
    db_data[156] = {};
    db_data[157] = {};
    db_data[158] = {};
    db_data[159] = {};
    db_data[160] = {};
    db_data[161] = {};
    db_data[162] = {};
    db_data[163] = {};
    db_data[164] = {};
    db_data[165] = {};
    db_data[166] = {};
    db_data[167] = {};
    db_data[168] = {};
    db_data[169] = {};
    db_data[170] = {};
    db_data[171] = {};
    db_data[172] = {};
    db_data[173] = {};
    db_data[174] = {};
    db_data[175] = {};
    db_data[176] = {};
    db_data[177] = {};
    db_data[178] = {};
    db_data[179] = {};
    db_data[180] = {};
    db_data[181] = {};
    db_data[182] = {};
    db_data[183] = {};
    db_data[184] = {};
    db_data[185] = {};
    db_data[186] = {};
    db_data[187] = {};
    db_data[188] = {};
    db_data[189] = {};
    db_data[190] = {};
    db_data[191] = {};
    db_data[192] = {};
    db_data[10000] = {};
    db_data[10001] = {};
    db_data[10002] = {};
    db_data[10003] = {};
    db_data[10004] = {};
    db_data[10005] = {};
    db_data[10006] = {};
    db_data[10007] = {};
    db_data[10008] = {};
    db_data[10009] = {};
    db_data[10010] = {};
    db_data[10011] = {};
    db_data[10012] = {};
    db_data[10013] = {};
    db_data[10014] = {};
}
};
#endif //TEMPLET_DB_BATTLEAI_H
