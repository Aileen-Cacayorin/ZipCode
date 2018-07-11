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
#include <iostream>

#endif /* ZipCode_h */

using namespace std;

class ZipCode {
    public:
        
        ZipCode(int zip);
        ZipCode(string bar);
        int getZipCode();
        string getBarCode();
        int barValues[5];
    private:
        int zipCode;
        bool CheckBarCode();
        bool CheckZipCode();
        int getZipFromBar(string bar);
        int calculateZipIntFromZipArr(int arr[5]);
        void getBarFromZip(int zip);
    
};
