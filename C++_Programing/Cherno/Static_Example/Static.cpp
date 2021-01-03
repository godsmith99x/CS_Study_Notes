//
// Created by joel on 1/3/21.
//

#include "Static.hpp"

//when marked static, the s_Variable is only visible in this file, and the build fails because we've told main.cpp to
// look for s_Variable in another file with the extern keyword
//static int s_Variable = 5;
int s_Variable = 5;

//this will cause a linking failure because there is another function with the same name in main.cpp
//void Function()
//{
//
//}

//this is fine because static means it's only visible in this file
static void Function()
{

}