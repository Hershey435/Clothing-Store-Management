#include<iostream>
#include<fstream>
//#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "dress.h"
#include "male.h"
#include "childrn.h"
#include "female.h"
#include "search.h"
#include "add.h"
#include "cut.h"

using namespace std;
 int main()

     {
         int i;

         //textcolor(5);
         //textbackground(0);

        system("clear"); 

        while(1)
               {
                system("clear");
		cout<<"\t \t \t ******************************* \t \t \t\n";
		cout<<"\t \t \t ******* CLOTHING STORE ******** \t \t \t\n";
		cout<<"\t \t \t ******************************* \t \t \t\n\n";
                cout<<"\t \t \t Choose an option\n\n";
                cout<< "\n\t \t \t01. Add a product.\n";
                cout<< "\n\t \t \t02. Search any product.\n";
                cout<< "\n\t \t \t03. Delete any product.\n";
                cout<< "\n\t \t \t04. Exit.";
                cout<< "\n\n\n\t \t \tEnter an option :";
                cin>>i;

                if(i==1)
                   {
                   add a;
                   }

                if(i==2)
                {

                    search s;

                }

                 if(i==3)
                {
                    cut c;
                }

                  if(i==4)
                  break;

               }

       return 0;

     }
