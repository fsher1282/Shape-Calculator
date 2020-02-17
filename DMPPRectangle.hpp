//
//  DMPPRectangle.hpp
//  DMPPProj3
//
//  Created by Daniel Mai Fisher on 2/14/18.
//  Copyright © 2018 Daniel Mai Fisher. All rights reserved.
//

#ifndef DMPPRectangle_hpp
#define DMPPRectangle_hpp


#include <stdio.h>
#include "DMPPSquare.hpp"

class Rectangle : public Square{
protected:
    double width;
    double area;
    
public:
    Rectangle(std::string name, double length, double width);
    void setWidth(double width);
    double getLength();
    double calculateArea();
    std::string ShapeString();
    
    ~Rectangle();
};

#endif /* DMPPRectangle_hpp */
