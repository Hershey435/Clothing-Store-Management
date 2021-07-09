#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include "dress.h"
#include "female.h"

using namespace std;
female::female()
        {
         get();
         fstream x("FEMALE.txt",ios::app|ios::out);
         x<<dressname;
         x<<"\t"<<dressid;
         x<<"\t "<<price<<endl;
         x.close();
        }
