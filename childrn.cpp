#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include "dress.h"
#include "childrn.h"

using namespace std;
childrn::childrn()
        {
         get();
         fstream x("CHILD.txt",ios::app|ios::out);
         x<<dressname;
         x<<"\t"<<dressid;
         x<<"\t "<<price<<endl;
         x.close();
        }
