#include "../includes/functions_inc.hpp"
void waiting(const int wait){
    usleep(wait);
    if(wait == 1){
        cout << "The system can't print this MS try 100000000" << endl;
    }else{
        cout << "NoNo" << endl;
    }
}