// Created by nyanjuimarvin on 24/04/22.

/* Find the maximum and minimum values in a given array of Integers */

#include <iostream>
#include <array>
#include <cstddef>

void find_Max_Min(const int givenArray[], size_t size, int *min, int* max);

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::array<int, 20> array1 = {3,444,12,2123,343,12,223,-445,-23,3434,766,-78,878,33,5,55,54543122,422,467,3987};
    int array2[20] =  {3,444,12,2123,343,12,223,-445,-23,3434,766,-78,878,33,5,55,54543122,422,467,3987};

    int min1 = array2[0];
    int max1 = array2[0];
    size_t array1Size = 20;
    find_Max_Min(array2, array1Size, &min1, &max1);

    return 0;
}

void find_Max_Min(const int givenArray[], size_t size, int *minimum, int *maximum){

    for(size_t i = 1; i < size; i++){
        if(givenArray[i] > *maximum){
            *maximum = givenArray[i];
        }

        if (givenArray[i] < *minimum){
            *minimum = givenArray[i];
        }
    }

    std::cout << "Minimum is: " << *minimum << std::endl;
    std::cout << "Maximum is: " << *maximum << std::endl;
}
