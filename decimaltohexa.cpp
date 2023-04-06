#include <iostream>
#include "decimaltohexa.h"

#include <string>
using namespace std;
string decimaltohexa(int decinum){
    string hexa;
    while (decinum>0){
        int rem = decinum%16;
        switch (rem) {
            case 0:
                hexa+="0";break;
            case 1:
                hexa+="1";break;
            case 2:
                hexa+="2";break;
            case 3:
                hexa+="3";break;
            case 4:
                hexa+="4";break;
            case 5:
                hexa+="5";break;
            case 6:
                hexa+="6";break;
            case 7:
                hexa+="7";break;
            case 8:
                hexa+="8";break;
            case 9:
                hexa+="9";break;
            case 10:
                hexa+="A";break;
            case 11:
                hexa+="B";break;
            case 12:
                hexa+="C";break;
            case 13:
                hexa+="D";break;
            case 14:
                hexa+="E";break;
            case 15:
                hexa+="F";break;
        }
        decinum=decinum/16;
    }
    for (int i=hexa.size();i>=0;i--)
    cout<<hexa[i];
    cout<<endl;
    return hexa;
}