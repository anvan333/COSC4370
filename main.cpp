#include <iostream>
#include "BMP.h"
#include <cmath>

int main() {

    BMP bmpNew(200,200,false);
    bmpNew.fill_region(0, 0, 200, 200, 0, 0, 0, 0);
    for(int i=0;i<bmpNew.bmp_info_header.width;i++)
    {
        bmpNew.set_pixel(i, 100, 255, 255, 255, 0);
    }
    bmpNew.write("output.bmp");


}
