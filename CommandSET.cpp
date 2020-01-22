//
//  CommandSET.cpp
//  IF-Interpreter Final Version
//
//  Created by Benjamin Morrison on 11/30/18.
//  Copyright © 2018 Benjamin Morrison. All rights reserved.
//

#include "Header.h"
#include <stdio.h>

void CommandSET::setVarAndsetTest()
{
    if (s.find("true") != string::npos) { // if find true, then compare to map
        testVal = true;
    }
    else {
        testVal = false;
    }
    
    unsigned int pos = s.find(SPECIAL_VARCHAR); // starting position of instant of $ (variable)
    string g = s.substr(pos + 1, s.find(")") - pos + 1);
    unsigned int space = g.find(" "); // find position for " "; now create a substring
    variable = g.substr(0, space);
}
