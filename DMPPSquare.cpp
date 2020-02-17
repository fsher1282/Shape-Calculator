//
//  DMPPSquare.cpp
//  DMPPProj3
//
//  Created by Daniel Mai Fisher on 2/14/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include "DMPPSquare.hpp"
#include <iomanip>
#include <sstream>

//Constructor
Square::Square(std::string name1, double length1) : Shape(name){
    length=length1;
    area=calculateArea();
    name=name1;
}

void Square::setLength(double newLength){
    if (newLength>0) {
        newLength=length;
    } else {
        length=1;
    }
}

double Square::getLength()const{
    return length;
}

//Define how to calculate area of square
double Square::calculateArea(){
    area=length*length;
    return area;
}


//Setup display for name of shape, length and area
std::string Square::ShapeString(){
    std::ostringstream output;
    output<<"The object’s name is "<<name
          <<". Its length is "<<length
          <<". Its area is "<<area;
   
    return output.str();
    
}

//Destructor
Square::~Square(){
    
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
