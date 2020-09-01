//
//  Question.hpp
//  TestSystem
//
//  Created by Vanyusha on 01.09.2020.
//  Copyright © 2020 EasyExam. All rights reserved.
//

#ifndef Question_hpp
#define Question_hpp

#include <stdio.h>

#pragma once
#include "pch.h"

class Question
{
    std::string name;
    std::string option1;
    std::string option2;
    std::string option3;
    std::string option4;
    int correct;
    std::string correct1;
public:
    Question();
    Question(std::string name,std::string option1,std::string option2,std::string option3,std::string option4, int correct, std::string correct1);
    void display();
};
#endif /* Question_hpp */
