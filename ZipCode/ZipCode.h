//
//  ZipCode.hpp
//  ZipCode
//
//  Created by Aileen Cacayorin on 7/9/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//

#ifndef ZipCode_h
#define ZipCode_h
#include <string>
#include <stdio.h>

#endif /* ZipCode_h */

using namespace std;

class ZipCode {
    public:
        ZipCode(int zip);
        ZipCode(string bar);
        int getZipCode();
        int barValues[5];
    private:
        int zipCode;
        bool CheckBarCode();
        bool CheckZipCode();
        void getZipFromBar(string bar);
};
