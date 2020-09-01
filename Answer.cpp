//
//  Answer.cpp
//  TestSystem
//
//  Created by Vanyusha on 01.09.2020.
//  Copyright © 2020 EasyExam. All rights reserved.
//

#include "Answer.hpp"
//реализация конструктора по умолчанию
template <typename T>
Answer<T>::Answer() : name("-")
{
    
}
// реализация ответа
template <typename T>

Answer<T>::Answer(T name) : name(name)
{
    
}
//вывод ответа
template <typename T>

void Answer<T>::displayAnsw()
{
    cout << "The entered answer is:" << name << endl;
}

