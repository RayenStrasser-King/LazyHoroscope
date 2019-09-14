#include<iostream>
#include "video.h"

using namespace std;

    Video::Video(string a,string b,string c,float f,int i)
    : a1(a), a2(b), a3(c), length(f), num(i)
    {}

    void Video::print()
    {
        cout<<a1<<", "<<a2<<", "<<a3<<", "<<length<<", ";
        for(int i =0 ; i < num; i++)
        {
            cout<<"*";
        }
        cout<<endl;
    } 
