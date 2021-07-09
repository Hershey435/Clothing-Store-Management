#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "cut.h"

using namespace std;
cut::cut()
     {         
           char id[20],filename[20];
           cout<<"\n\nEnter the id to delete : ";
           cin>>id;
           strcpy(filename,id);
           strcat(filename,".txt");
           fstream x(filename,ios::out);
           x<<"INFORMATION IS UNAVALABLE";
           x.close();
     }


