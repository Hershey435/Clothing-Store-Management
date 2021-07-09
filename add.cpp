#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "add.h"
#include "male.h"
#include "female.h"
#include "childrn.h"

using namespace std;
add::add()
{
    system ("clear");

      while(1)
     {
        system ("clear");
        cout<<"\n\n";
	cout<<"\t Add products \n";
        cout<<"\t\t Categories of the dress products\n\n";
        cout<<"\n\n01. MALE. \n\n02. FEMALE. \n\n03. KIDS  ";
        cout<<"\n\n04. EXIT. ";
        cout<<"\n\n\n\t Enter your option :";
        cin>>i;


        if(i==1)
        {
            male m;
        }

        if(i==2)
        {
            female f;
        }

        if(i==3)
        {
            childrn c;
        }
        if(i==4)

        break;

     }
}

