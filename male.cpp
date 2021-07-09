#include<iostream>
#include<fstream>
//#include<conio.h>
#include<string.h>
#include<stdio.h>
#include "dress.h"
#include "male.h"

using namespace std;
 male::male()
        {
         get();
         fstream x("MALE.txt",ios::app|ios::out);
         x<<dressname;
         x<<"\t"<<dressid;
         x<<"\t "<<price<<endl;
         x.close();
        }
