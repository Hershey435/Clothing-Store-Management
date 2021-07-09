#include<iostream>
#include<fstream>

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "search.h"

using namespace std;

search::search(){

   while(1)

   {

                     system("clear");
		     
		     cout<<"\t \t Search from the following categories : \n \n ";
                     cout<<"\n\n\t 01.Male";
                     cout<<"\n\n\t 02.Female";
                     cout<<"\n\n\t 03.Children";
                     cout<<"\n\n\t 04.Search by id";
                     cout<<"\n\n\t 05.Exit";
                     cout<<"\n\n\t Select an option :";
                     cin>>m;


                       if(m==1)

                        {

                         ifstream m("MALE.txt");
                         while(m)

                           {
                            m.get(ch);
                            cout<<ch;


                           }
                        getchar();                      

                          }

                       if(m==2)

                        {
                         ifstream m("FEMALE.txt");
                         while(m)

                           {
                             m.get(ch);
                             cout<<ch;


                           }
                     getchar();

                        }


                       if(m==3)
                        {
                          ifstream m("CHILD.txt");
                          while(m)
                           {
                             m.get(ch);
                             cout<<ch;


                           }
                    getchar();

                         }

                       if(m==4)
                        {
                          char id[10],filename[20];

                          cout<<"input id for search:";
                          cin>>id;
                          strcpy(filename,id);
                          strcat(filename,".txt");
                          ifstream m(filename);

                          while(m)

                               {
                               m.get(ch);
                               cout<<ch;


                            }
                     getchar();    
                        }

                        if(m==5)
                        break;
                       


                     
          }

        }
