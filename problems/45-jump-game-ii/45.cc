// ml:opt = 0
// ml:ccf += -g
#include <iostream>
#include "45.hh"

int main()
{
    std::cout << Solution{}.jump(
        {8,2,6,4,0,0,1,1,1,6,5,1,7,0,3,8,1,8,0,9,4,2,8,2,0,1,2,3,3,4,2,1,6,8,7,9,8,9,0,1,7,7,3,4,0,6,2,1,6,5,0,0,9,0,4,0,1,9,5,4,3,7,8,9,6,7,8}
    ) << "\n";
}
