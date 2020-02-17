//
//  DMPPRectangle.cpp
//  DMPPProj3
//
//  Created by Daniel Mai Fisher on 2/14/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include "DMPPRectangle.hpp"
#include <iomanip>
#include <sstream>

//Constructor for Rectangle
Rectangle::Rectangle(std::string name2, double length2, double width1) : Square(name, length){
    length=length2;
    width=width1;
    name=name2;
    area=calculateArea();
}



void Rectangle::setWidth(double newWidth){
    if (newWidth>0) {
        newWidth=width;
    } else {
        width=1;
    }
}

//Define how to calculate area of Rectangle
double Rectangle::calculateArea(){
    area= length*width;
    return area;
    
}

//Setup display for name of shape, length, width and area
std::string Rectangle::ShapeString(){
    std::ostringstream output;
   
    output<<"The object’s name is "<< name
          <<". Its length is "<< length
          <<". Its width is "<< width
          <<". Its area is "<<area;
    
     return output.str();
}


//Destructor
Rectangle::~Rectangle(){
   
}
/*
___________________________________________
|              Shape                      |
|-----------------------------------------|
|       -name:string                      |
|-----------------------------------------|
|    <<constructor>>Shape(string)         |
|    +setName(string):void                |
|    +getName():string                    |
|    +calculateArea():pure virtual double |
|      +ShapeString():virtual string      |
|_________________________________________|
        |
        |
        |
        |             <-(Inheritence)-------|
        |                                   |
 _______|________________________________   |     ___________________________________________
 |           Square                     |   |     |       Rectangle                         |
 |--------------------------------------|   |     |-----------------------------------------|
 |  -length:double                      |   |     | -width:double                           |
 |  -area:double                        |   |     | -area:double                            |
 |--------------------------------------|   |     |-----------------------------------------|
 | <<constructor>>Square(string, double)|   v     |  <<constructor>>Rectangle(string,double,|
 |                                      |-------> |      double)                            |
 |  +setLength(double newLength) : void |         |  +setWidth(double width) : void         |
 |  +getLength() : double               |         |  +getLength() : double                  |
 |  +calculateArea() : double           |         |  +calculateArea() : double              |
 |  +ShapeString() : string             |         |  +ShapeString() : string                |
 |______________________________________|         |_________________________________________|
 
 
 */
