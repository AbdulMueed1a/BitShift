#include "binarytodecimal.h"
#include "decimaltobinary.h"
#include "decimaltohexa.h"
#include "hexatobinary.h"
#include "hexatodecimal.h"
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
void delay() {
    for (int i = 0; i < 100000000; i++);
}

void displayBitShiftSlowly() {
    cout <<   "  _____       _     ____    _                ______    _" << endl;delay();
    cout << R"( B  _  \ _   | |   /  _ \  | |         _    /   _  \  | |)" << endl;delay();
    cout <<   " B |_) |(_) _| |__ | ( |_| | |        (_)   | /  |_| _| |__" << endl;delay();
    cout << R"( B     / _ /_   _/ \ \     | | __      _   _| |_    /_   _/)" << endl;delay();
    cout << R"( B  _  \| |  | |    _ \ \  | / __ \   | | |_   _|     | |)" << endl;delay();
    cout << R"( B |_) || |  | |__ | |_) | | /    \ \ | |   | |       | |__)" << endl;delay();
    cout << R"( B_____/|_|  \____\ \____/ |_|    |_| |_|   |_|       \____\)" << endl;delay();
    cout << "                            " << endl;delay();
    cout << endl;
}
int main() {
    displayBitShiftSlowly();
    string hexDecNum;
    int opt,input,decibin,z;
    while (5>4) {
    cout<<"1. Decimal to binary\n2. Binary to decimal\n3. Decimal to Hexadecimal\n4. Hexadecimal to Binary\n5. Hexadecimal to Decimal\n6. Binary to Hexadecimal";
    cout<<endl<<"Input Your Choice :: ";
    cin>>opt;
        switch (opt) {
            case 1 :
                cout << "Enter Decimal Number : ";
                cin >> input;
                cout << decimaltobinary(input)<<endl;
                break;
            case 2 :
                cout << "Enter Binary Number : ";
                cin >> input;
                cout << binarytodecimal(input)<<endl;
                break;
           case 3 :
                cout << "Enter Decimal Number : ";
                cin >> input;
                decimaltohexa(input);
                break;
                case 4 :
                cout<<"Enter the Hexadecimal Number: ";
                cin>>hexDecNum;
                hexatobinary(hexDecNum);
                cout<<endl;
                break;
                case 5 :
                cout<<"Enter the Hexadecimal Number: ";
                cin>>hexDecNum;
                cout<<hexatodecimal(hexDecNum)<<endl;
                break;
                case 6 :
                cout<<"Enter the binary Number: ";
                cin>>input;
                decibin = binarytodecimal(input);
                //cout<<decimaltohexa(decibin);
                decimaltohexa(decibin);
                break;
                default:
                cout << "Invalid Choice";
                z=getch();
                break;
        }
        for(int i=1 ;i<=10;i++ )
            cout<<"*";
        cout<<" Press Any Key ";
        for(int j=1 ;j<=10;j++ )
            cout<<"*";
       z=getch();
        system("CLS");
    }
}
