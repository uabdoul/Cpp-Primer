//
// @author Yue Wang
// @date   01.12.2014
//
// Exercise 10.1:
// The algorithm header defines a function named count that, like find,
// takes a pair of iterators and a value.count returns a count of how
// often that value appears.
// Read a sequence of ints into a vector and print the count of how many
// elements have a given value.
//
// Exercise 10.2:
// Repeat the previous program, but read values into a list of strings.
//


#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
//adding using std::vector, std::endl, std::cout 
//for better readability.

using std::vector;
using std::cout;
using std::list;
using namespace std;

int main()
{
    // 10.1
    // we initialize the vector list
    vector<int> v = { 1, 2, 3, 4, 5, 6, 6, 6, 2 };
    //output a mesage that tells how many times 6 is display
    
    cout<<"6 is displayed in ex 10.01: " <<std::count(v.cbegin(), v.cend(), 6) <<" times"<<endl<<endl;

    // 10.2
    list<string> l = { "aa", "aaa", "aa", "cc" };
    cout << "In ex 10.02: the string aa is displayed " <<std::count(l.cbegin(), l.cend(), "aa") <<" times"<<endl;

    return 0;
}
