//
// Created by marcoslopez7 on 17/01/17.
//

#pragma once

#include <algorithm>
#include "Cifrado.h"

class Cesar : public Cifrado {
public:
    Cesar();
    void decrypt();

private:
    std::string msg = "rlcopy";
    std::string abc = "abcdefghijklmnopqrstuvwxyz";
};

Cesar::Cesar() { }

void Cesar::decrypt() {

    std::string res ="";
    int pos=0;
    for (int i = 1; i <= 26; i++){
        res = "";
        std::for_each(msg.begin(),msg.end(),[&](char m){
            pos = abc.find(m);
            res += abc[((pos+i) % 26)];
        });
        std::cout << "despl: " << i << " output: " << res << std::endl;
    }


}