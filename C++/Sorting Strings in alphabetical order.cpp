#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main()
{
        char str[7][20], t[20];
        int i, j;
        cout<<"Enter any 7 strings ->";
        for(i=0; i<7; i++)
        {
                cin>>str[i];
        }
        for(i=1; i<7; i++)
        {
                for(j=1; j<7; j++)
                {
                        if(strcmp(str[j-1], str[j])>0)
                        {
                                strcpy(t, str[j-1]);
                                strcpy(str[j-1], str[j]);
                                strcpy(str[j], t);
                        }
                }
        }
        cout<<endl<< "Names Sorted in Alphabetical Order ->"<<endl;
        for(i=0;i<7;i++)
        {
                cout<<str[i]<<endl;
        }
        return 0;
}
