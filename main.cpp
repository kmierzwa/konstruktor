#include <iostream>
#include "event.h"
using namespace std;

int main()
{
    Event w1("Apokalipsa",6,8,2045,8,15);
    w1.show();
    w1.load();
}