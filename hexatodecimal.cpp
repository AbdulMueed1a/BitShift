#include<iostream>
using namespace std;
int hexatodecimal(string num) {
    int size = num.size();
    int base = 1;
    int temp = 0;
    for (int i=size-1; i>=0; i--) {
        if (num[i]>='0' && num[i]<='9') {
            temp += (num[i] - 48)*base;
            base = base * 16;
        }
        else if (num[i]>='A' && num[i]<='F') {
            temp += (num[i] - 55)*base;
            base = base*16;
        }
    }
    return temp;
}