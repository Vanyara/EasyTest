//
//  main.cpp
//  TestSystem
//
//  Created by Vanya and Kostya on 01.09.2020.
//  Copyright © 2020 EasyExam. All rights reserved.
//

#include <iostream>
#include "Answer.hpp"
#include "Answer.cpp"
#include "Question.hpp"
#include "pch.h"

int main(int argc, const char * argv[]) {
    Question one("Where do pandas live?","1 - Ukraine","2 - Uganda","3 - Nigeria","4 - China", 4, "China");
    one.display();
    
    
    Answer<int> answ(2);
    Answer<std::string> answ1("two");
    
   answ.displayAnsw();
    answ1.displayAnsw();
    
    return 0;
}
