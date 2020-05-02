#include "food.h"
#include "SDL.h"


Food::Food(FoodType type, int xval, int yval) : _type(type) {
    x = xval;
    y = yval;
    switch (type)
    {
        case Normal:
        _speedDiff = _speedDiff  + 0.01;
        _points = 1;
        _Rvalue = 0x00;
        _Gvalue = 0xFF;
        _Bvalue = 0x00;
        break;
        case Poison:
        _points = 0;
        _Rvalue = 0xFF; 
        _Gvalue = 0x00;
        _Bvalue = 0x00;
        break;
        default:
        _points = 1;
        _Rvalue = 0x00;
        _Gvalue = 0x00;
        _Bvalue = 0x00;
    }
}