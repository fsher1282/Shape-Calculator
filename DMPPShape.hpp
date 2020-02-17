//
//  DMPPShape.hpp
//  DMPPProj3
//
//  Created by Daniel Mai Fisher on 2/14/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#ifndef DMPPShape_hpp
#define DMPPShape_hpp

#include <stdio.h>
#include <string>
#include <iostream>

class Shape{
protected:
    std::string name;
    
public:
    Shape(std::string name);
    void setName(std::string name);
    std::string getName();
    virtual double calculateArea()=0;
    virtual std::string ShapeString();
    
    ~Shape();
    
};

#endif /* DMPPShape_hpp */

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
