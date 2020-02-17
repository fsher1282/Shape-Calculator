//
//  DMPPSquare.hpp
//  DMPPProj3
//
//  Created by Daniel Mai Fisher on 2/14/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#ifndef DMPPSquare_hpp
#define DMPPSquare_hpp

#include <stdio.h>
#include "DMPPShape.hpp"


class Square: public Shape{
protected:
    double length;
    double area;
    
public:
    Square(std::string name1, double length1);
    void setLength(double newLength);
    double getLength()const;
    double calculateArea();
    std::string ShapeString();
    
    ~Square();
    
};

#endif /* DMPPSquare_hpp */
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
         |             <-(Inheritence)------|
         |                                  |
 ________|_______________________________   |     ___________________________________________
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
