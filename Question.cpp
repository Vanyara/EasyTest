//
//  Question.cpp
//  TestSystem
//
//  Created by Vanyusha on 01.09.2020.
//  Copyright © 2020 EasyExam. All rights reserved.
//

#include "Question.hpp"

Question::Question() : name("-") , correct(0) , correct1("-")
{
}

Question::Question(std::string name,std::string option1,std::string option2,std::string option3,std::string option4, int correct, std::string correct1) : name(name), option1(option1), option2(option2), option3(option3), option4(option4), correct(correct), correct1(correct1)
{
}

void Question::display()
{
    cout << "Name: " << name << endl;
    cout << "First option:" << option1 << endl;
    cout << "Second option:" << option2 << endl;
    cout << "Third option:" << option3 << endl;
    cout << "Fourth option:" << option4 << endl;
    cout << "Correct: " << correct << endl;
    cout << "Correct full answ:" << correct1 << endl;
    cout << endl;
}
