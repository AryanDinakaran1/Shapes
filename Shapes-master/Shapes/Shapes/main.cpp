//
//  main.cpp
//  Shapes
//
//  Created by Aryan Dinakaran on 12/01/20.
//  Copyright © 2020 Aryan Dinakaran. All rights reserved.
//

#include <iostream>
using namespace std;

void r()
{
    char con;
    double l,b;
    
    cout<<"========="<<endl;
    cout<<"Rectangle"<<endl;
    cout<<"========="<<endl<<endl;
    
    cout<<"What do you want to find Area: a or Perimeter: p\n";
    cin>>con;
    
    switch (con) {
        case 'a':
            
            cout<<"Enter Length"<<"\n>> ";
            cin>>l;
            
            cout<<"\n";
            
            cout<<"Enter Breadth"<<"\n>> ";
            cin>>b;
            
            cout<<"\n";
            
            cout<<"Area of Rectangle: "<<l*b<<endl;
            break;
            
            case 'p':
            
            cout<<"Enter Length"<<"\n>> ";
            cin>>l;
            
            cout<<"\n";
            
            cout<<"Enter Breadth"<<"\n>> ";
            cin>>b;
            
            cout<<"\n";
            
            cout<<"Perimeter of Rectangle: "<<2*(l+b)<<endl;
            
            break;
            
        default:
            cout<<"choose between a or p"<<endl;
            break;
    }
}

void s()
{
    char con1;
    double side;
    double p;
    
    cout<<"======"<<endl;
    cout<<"Square"<<endl;
    cout<<"======"<<endl<<endl;
    
    cout<<"What do you want to find Area: a or Perimeter: p";
    cin>>con1;
    
    switch (con1) {
        case 'a':
            cout<<"Enter Perimeter\n"<<">>";
            cin>>p;
            
            cout<<"\n";
            
            cout<<"Area of Square: "<<p/4<<endl;
            break;
            
        case 'p':
            cout<<"Enter Side"<<"\n>> ";
            cin>>side;
            
            cout<<"Perimeter of Square: "<<side*side<<endl;
            break;
            
        default:
            cout<<"Choose between a or p";
            break;
    }
}

void t()
{
    char con2;
    
    double side1,side2,side3;
    double base,height;
    
    cout<<"What do you want to find (Area: a, Perimeter: p)\n>> ";
    cin>>con2;
    
    cout<<"\n";
    
    switch (con2) {
            
            case 'a':
            cout<<"Enter Base\n>> ";
            cin>>base;
            
            cout<<"\n";
            
            cout<<"Enter Height\n>> ";
            cin>>height;
            
            cout<<"\n";
            
            cout<<"The Area of Triangle: "<<(base*height)/2<<"\n";
            break;
            
        case 'p':
            cout<<"Enter First Side\n>> ";
            cin>>side1;
            
            cout<<"\nEnter Second Side\n>> ";
            cin>>side2;
            
            cout<<"\nEnter Third Size\n>> ";
            cin>>side3;
            
            cout<<"\n";
            
            cout<<"The Perimeter of the Triangle: "<<((side1+side2+side3))<<"\n";
            break;
            
        default:
            cout<<"Choose between a or p";
            break;
    }
}

int main()
{
    char ans;
    
    cout<<"Which shape do you want?"<<"\nOptions:(Rectangle: r, Square: s,Triangle: t)"<<"\n>> ";
    cin>>ans;
    
    cout<<endl;
    
    switch (ans) {
        case 'r':
            r();
            break;
            
        case 's':
            s();
            break;
            
            case 't':
            t();
            break;
            
        default:
            cout<<"choose r, s or t\n";
            break;
    }
}
