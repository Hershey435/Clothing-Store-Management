#include<iostream>
#include<fstream>
//#include<conio.h>
#include<string.h>
#include<stdio.h>
#include "dress.h"

using namespace std;

void dress::get()
{
        cout<<"\n ENTER  DRESS NAME  : ";
        cin>>dressname;
        cout<<"\n ENTER DRESS ID  NO : ";
        cin>>dressid;
        cout<<"\n ENTER DRESS PRICE  : ";
        cin>>price;

        strcpy(filename,dressid);
        strcat(filename,".txt");
        ofstream  x(filename);

        x<<"\n\nDRESS NAME  :"<<dressname;
        x<<"\n\nDRESS ID  :"<<dressid;
        x<<"\n\nPRICE     :"<<price;
        x.close();
}
