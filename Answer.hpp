//
//  Answer.hpp
//  TestSystem
//
//  Created by Vanyusha on 01.09.2020.
//  Copyright © 2020 EasyExam. All rights reserved.
//

#ifndef Answer_hpp
#define Answer_hpp

#include <stdio.h>
#include "pch.h"

template<typename T>
class Answer{
//    ответ введенный пользователем
    T name;
public:
//    конструктор по умолчанию
    Answer();
//    инициализация ответа
    Answer(T name);
//    вывод ответа
    void displayAnsw();
//    все реализации функций находятся в "Answer.cpp"
};

#endif /* Answer_hpp */
