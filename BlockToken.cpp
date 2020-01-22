//
//  BlockToken.cpp
//  IF-Interpreter Final Version
//
//  Created by Benjamin Morrison on 11/30/18.
//  Copyright © 2018 Benjamin Morrison. All rights reserved.
//

#include "Header.h"
#include <stdio.h>

BlockToken::BlockToken(string strng)
{
    if (strng.empty())
    {
        s = strng;
    }
    else
    {
        // looking for name,
        unsigned int posit = strng.find("name") +6; // name="start" so begin at "s"
        int temp = strng.find('"', posit);
        name = strng.substr(posit, temp - posit);
        // name has been found!
        
        unsigned int firstInst = strng.find_first_of('[') + 1;
        unsigned int updatedfirstInst = strng.find_last_of(']');
        string passText;
        passText = "\n" + strng.substr(firstInst, updatedfirstInst-firstInst) + "\n";
        s = passText;
    }
}
