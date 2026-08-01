#include<print>

void insertion_sort(int array[10]);

int main(){

    int array[10] = {9,2,3,1,8,4,5,7,6,0};
    std::println("Before insertion sort array is : ");
    for(int ele : array){
        std::println(" {} ", ele);
    }
    insertion_sort(array);
    std::println("After insertion sort array is : ");
    for(int ele : array){
        std::println(" {} ", ele);
    }
    return 0;
}

void insertion_sort(int array[10]){
    for(int i=1; i<10; i++){
        int j = i-1;
        int key = array[i];
        while(j>=0){
            if(key<array[j]){
                array[j+1]=array[j];
                j--;
            }
            else{
                break;
            }
        }
        array[j+1] = key; 
    }
}