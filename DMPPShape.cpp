//
//  DMPPShape.cpp
//  DMPPProj3
//
//  Created by Daniel Mai Fisher on 2/14/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#include "DMPPShape.hpp"
#include <string>
#include <iostream>
#include <sstream>

//Constructor
Shape::Shape(std::string name){
    
}

//
   void Shape:: setName(std::string name){
        
    }

    std::string Shape::getName(){
        return name;
    }
//Display Output
     std::string Shape::ShapeString(){
         std::ostringstream output;
         output<<"The objects name is"<<name;
         return output.str();
    }
//Destructor
Shape::~Shape(){
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
