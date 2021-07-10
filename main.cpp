include<iostream>
#include<fstream>
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
         int i , choice;

        system("clear");

        while(1)
               {
                system("clear");
                cout<<"\t \t \t ******************************* \t \t \t\n";
                cout<<"\t \t \t ******* CLOTHING STORE ******** \t \t \t\n";
                cout<<"\t \t \t ******************************* \t \t \t\n\n";
                cout<<"\t \t \t Choose an option\n\n";
                cout<< "\n\t \t \t01. ADMIN\n";
                cout<< "\n\t \t \t02. USER.\n";
                cout<< "\n\t \t \t03. Exit.";
                cout<< "\n\n\n\t \t \tEnter an option :";
                cin>>choice;
                if( choice == 1 ) {

                        while(1) {

                        system("clear");
                        cout<<"\t \t \t ******************************* \t \t \t\n";
                        cout<<"\t \t \t *******    ADMIN       ******** \t \t \t\n";
                        cout<<"\t \t \t ******************************* \t \t \t\n\n";

                        cout<< "\n\t \t \t01. Add  any product.\n";
                        cout<< "\n\t \t \t02. Search for any product.\n";
			cout<< "\n\t \t \t03. Delete any product.\n";
                        cout<< "\n\t \t \t04. Exit.\n";
                        cout<< "\n\t \t \tEnter your choice\n";
                        cin >> i;


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

                }
                else if ( choice == 2 )
                {
                        while(1) {

                        system("clear");
                        cout<<"\t \t \t ******************************* \t \t \t\n";
                        cout<<"\t \t \t *******     USER       ******** \t \t \t\n";
                        cout<<"\t \t \t ******************************* \t \t \t\n\n";
                        cout<< "\n\t \t \t01. Search for any product.\n";
                        cout<< "\n\t \t \t02. Exit.\n";
                        cout<< "\n\t \t \tEnter your choice\n";
                        cin >> i;
                        if(i==1)
                        {
				search s;

                        }
                        if(i==2)
                                break;
                        }


                }
                else
                        break;

               }

       return 0;

     }



