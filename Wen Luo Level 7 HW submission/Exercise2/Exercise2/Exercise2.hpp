#ifndef Excercise2_
#define Excercise2_

#include <iostream>
#include <vector>
#include <map>
#include <list>

using namespace std;

template <typename T>
double Sum(const T& a);

template <typename T>
double Sum(const T& a, const T& b);

template <>
double Sum(const map<string, double>& a);

template <>
double Sum(const map<string, double>::const_iterator& a, const map<string, double>::const_iterator& b);


#endif