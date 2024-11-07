#include "Laptop.h"

int main() 
{
    Laptop myLaptop("Intel i7", 8, 3.5,
        16, "DDR4",
        512, "SSD",
        "NVIDIA GTX 1650", 4,
        15.6, "1920x1080");

    cout << "Laptop Specifications:" << endl;
    myLaptop.showSpecifications();

    return 0;
}