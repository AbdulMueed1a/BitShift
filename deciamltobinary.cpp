#include "iostream"
using namespace std;
long long decimaltobinary(int decinum){
    int i=0;
    int returnbin=0;
    string tempbinary;
    int tempdecinum=decinum;
    while (tempdecinum>=1){
        if(tempdecinum%2==0){
            tempbinary+= "0";
        }
        if(tempdecinum%2!=0){
            tempbinary+= "1";
        }
        tempdecinum=tempdecinum/2;
    }
    int u=tempbinary.size();
    long long binarynum[u];
    while (decinum>=1){
        if(decinum%2==0){
            binarynum [i]= 0;
        }
        if(decinum%2!=0){
            binarynum [i]= 1;
        }
        decinum=decinum/2;

        i++;
    }
    i-=1;
    while(i>=0) {
        returnbin*=10;
        returnbin+=binarynum[i];
        --i;
    }
    return returnbin;
}