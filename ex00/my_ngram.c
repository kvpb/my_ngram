#include <stdio.h>


void fill_array(int* array,char* string){
    int index = 0;
    while (string[index] != '\0'){
        array[(int)string[index]]++;
        index++;
    }
}

#define array_size 178


int main(int argc, char* argv[]){
    int index = 1;
    int array[array_size] = {0};

    for (index = 1; index < argc; index++){
        fill_array(&array[0], argv[index]);
    }
    for (index = 0; index < array_size; index++){
        if (array[index] != '"' && array[index] > 0){
            printf("%c:%d\n", index, array[index]);
        }
    }
    return(0);
}