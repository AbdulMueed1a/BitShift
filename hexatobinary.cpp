#include "hexatobinary.h"
#include <iostream>
#include <string>
using namespace std;
void hexatobinary(string hexDeciNum)
{
    int i=0;
    cout<<"\nEquivalent Binary Value = ";
    while(hexDeciNum[i])
    {
        switch(hexDeciNum[i])
        {
            case '0':
                cout<<"0";
                break;
            case '1':
                cout<<"1";
                break;
            case '2':
                cout<<"10";
                break;
            case '3':
                cout<<"11";
                break;
            case '4':
                cout<<"100";
                break;
            case '5':
                cout<<"101";
                break;
            case '6':
                cout<<"110";
                break;
            case '7':
                cout<<"111";
                break;
            case '8':
                cout<<"1000";
                break;
            case '9':
                cout<<"1001";
                break;
            case 'A':
            case 'a':
                cout<<"1010";
                break;
            case 'B':
            case 'b':
                cout<<"1011";
                break;
            case 'C':
            case 'c':
                cout<<"1100";
                break;
            case 'D':
            case 'd':
                cout<<"1101";
                break;
            case 'E':
            case 'e':
                cout<<"1110";
                break;
            case 'F':
            case 'f':
                cout<<"1111";
                break;
            default:
                cout<<"--Invalid Hex Digit ("<<hexDeciNum[i]<<")--";
        }
        i++;
    }
    cout<<endl;
}