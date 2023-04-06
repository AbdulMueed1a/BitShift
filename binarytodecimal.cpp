#include "binarytodecimal.h"
using namespace std;
int binarytodecimal(long long bin) {
    int two=1;
    unsigned long decinum=0;
    long long tempbin=bin;
    while (tempbin!=0){
        decinum+=(tempbin%10)*two;
        tempbin/=10;
        two*=2;
    }
    return decinum;
}
