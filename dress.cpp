#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include "dress.h"

using namespace std;

void dress::get()
{
        cout << "\n ENTER  THE NAME OF THE CLOTHING ARTICLE  : ";
        cin >> dressname;
        cout << "\n ENTER THE ID OF THE ARTICLE : ";
        cin >> dressid;
        cout << "\n ENTER IT'S PRICE  : ";
        cin >> price;

        strcpy(filename,dressid);
        strcat(filename,".txt");
        ofstream  x(filename);

        x<<"\n\nARTICLE NAME  :"<<dressname;
        x<<"\n\nARTICLE ID  :"<<dressid;
        x<<"\n\nARTICLE PRICE     :"<<price;
        x.close();
}
