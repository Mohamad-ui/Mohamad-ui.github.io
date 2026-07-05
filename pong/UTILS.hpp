#ifndef UTILS_Hpp
#define UTILS_Hpp

#include <iostream>

using namespace std;

template<typename...Args>
    void println(Args... args) {
        (cout <<... << args) << std::endl;
        }    

template<typename...Args>
    void print(Args... args) {
        (cout <<... << args);
        }    
    
template<typename...Args>
    void input(Args&... args) {
        (cin >>... >> args);
        }        
    

#endif
