//
// Created by marcoslopez7 on 17/01/17.
//

#pragma once

#include <sstream>
#include <vector>
#include <iterator>
#include "Cifrado.h"

class Vinegere : public Cifrado {
public:
    Vinegere();
    void decrypt();

private:
    std::string msg = "IONDVQY DZH QNTY KLQRY BVISEK TYHME JERWLF ZHV YEYOAEW RRBEI WEFZE FI HRGTY EYG UNTH SS GLC WLR COEGIEY TYDX V EEK KEIK HVDVQ OT JHIZY TF PI ZUSK VXEGNXH XUGT DHR FNOLOH SKAI VIRONX WLNZ DVDXU G NVFIFYAIB IAJ WZOP PUMV ZLRT IK ZMYR CFPI";
};

Vinegere::Vinegere() { }

void Vinegere::decrypt() {
    std::istringstream ssmsg(msg);
    std::vector<std::string> words{std::istream_iterator<std::string>{ssmsg}, std::istream_iterator<std::string>{}};
    //for_each(words.begin(),words.end(), [=](string w){cout << w << endl;});
}