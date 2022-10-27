#include "mat.h"


int matem::bezwzg(int number){

    if (number >= 0)
        return number;
    else
        return number*(-1);

}

int matem::resz(int number, int second){
    int d;
    d = number / second;
    number = number - d * second;
    return number;


}

int matem::last(int number){
    int z;
    z = matem::resz(number, 10);
    return z;


}
