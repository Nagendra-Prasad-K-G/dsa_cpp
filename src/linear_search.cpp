#include<print>

int linear_search(int array[], const int size ,const int ele);

int main(){

    int array[10] = {1,9,6,5,3,8,7,2,0,4};
    int ele = 0;
    std::println(" given array is : ");
    for(int i:array){
        std::print(" {} ", i);
    }
    std::println("given element to be find in array is : {} ", ele);
    int element = linear_search(array, 10, ele);
    if(element!= -1){
        std::println("element is found at index : {} ", element);
    }
    else{
        std::println(" unable to find the given element in the array ");
    }
    return 0;
}

int linear_search(int array[],const int size,const int ele){
    for(int pointer =0; pointer<size; pointer++){
        if(array[pointer] == ele){
            return pointer;
        }
       
    }
    return -1;
}