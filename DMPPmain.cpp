//
//  main.cpp
//  DMPPProj3
//
//  Created by Daniel Mai Fisher on 2/14/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include <iostream>
#include "DMPPShape.hpp"
#include "DMPPSquare.hpp"
#include "DMPPRectangle.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
 //Setup data for inputs
    double w=1;
    double l=1;
    char shape;
    
    //Intial instructions for user and prompt for which shape the user wants to find the area of
    cout << "Hello, I calculate areas of squares and rectangles.  Enter in a 'S' if you would like the area of the square or 'R' for rectangle\n";
    cin>>shape; //Input for Shape
 
    
    
    //Conditions if user wants a Square
     if (shape=='S') {
        cout<<"Enter length of Square"<<endl; //Prompt input for length
        cin>>l;                               //Input value of length
        
        Square square("square", l);
        cout<<square.ShapeString()<<endl;
    }
  
    //Conditions if user wants a rectangle
    else if (shape=='R') {
        cout<<"Enter in length then press enter..."<<endl; //Prompt input for length
        cin>>l;                                            //Input value of length
        cout<<"Enter in width then press enter..."<<endl;  //Prompt input for width
        cin>>w;                                            //Prompt input for width
   
        Rectangle rectangle("Rectangle", l, w);
        cout<<rectangle.ShapeString()<<endl;
    
    }
   
    //Error message for incorrect input
    else{
        cout<<"invalid input\n"<<"Please put in either a capital 'R' or 'S' or you can just go rethink your life"<<endl;
        cin>>shape;
    }
   
    return 0;
}
