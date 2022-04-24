// Created by nyanjuimarvin on 24/04/22.

/* Find the maximum and minimum values in a given array of Integers */

#include <iostream>
#include <array>
#include <cstddef>

void find_Max_Min(const int givenArray[],size_t size, int *min, int* max);

int main() {
    std::cout << "Hello, World!" << std::endl;
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

    std::cout << "Minimum is: %d" << minimum << std::endl;
    std::cout << "Maximum is %d" << maximum << std::endl;
}
