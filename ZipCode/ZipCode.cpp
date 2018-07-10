//
//  ZipCode.cpp
//  ZipCode
//
//  Created by Aileen Cacayorin on 7/9/18.
//  Copyright © 2018 com.aileenbull. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <string>
#include "ZipCode.h"

using namespace std;



ZipCode::ZipCode(int zip) : zipCode(zip) {};
ZipCode::ZipCode(string bar) {
    getZipFromBar(bar);
    zipCode = 12345;
    
};

void ZipCode::getZipFromBar(string bar){
//    int finalZip = 0;
//    int zipArr[5];
    
      int zipArrCounter = 0;
      int valueCounter;
      int sum;

    for (int i=1; i<25; i=i+5) {
        sum = 0;
        valueCounter = 1;
        for (int j=i; j<=i+4; j++) {
            if(valueCounter == 1){
                sum += (static_cast<int>(bar[j])*7);
                cout << sum << endl;
                valueCounter++;
            }
            else if(valueCounter == 2){
                sum += (static_cast<int>(bar[j])*4);
   
                valueCounter++;
            }
            else if(valueCounter == 3){
                sum += (static_cast<int>(bar[j])*2);

                valueCounter++;
            }
            else if(valueCounter == 4){
                sum += (static_cast<int>(bar[j])*1);
                valueCounter++;
            }
            else if(valueCounter == 5){
                sum += ((static_cast<int>(bar[j]))*0);
                valueCounter++;
            }
        }
        cout << sum << endl;
        if(sum == 11){
            sum = 0;
        }
        zipArrCounter ++;
        cout <<zipArrCounter <<  endl;
    }
};

int ZipCode::getZipCode() {
    return zipCode;
};

int main() {
    ZipCode zip4("100101010011100001100110001");
    return 0;
    
};

