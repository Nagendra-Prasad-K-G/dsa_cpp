#include<print>
#include<vector>
#include<random>

void control(std::vector<int>& array);
void random_number(std::vector<int>& array);
void bubble_sort(std::vector<int>& array);

int main(){
    std::vector<int> array;
    control(array);
    return 0;
}

void control(std::vector<int>& array){
    random_number(array);

    std::print("before sorting the array is : ");
    for(int i:array){
        std::print(" {} ", i);
    }
    std::println();

    bubble_sort(array);
    
    std::print("after sorting the array is : ");
    for(int i:array){
        std::print(" {} ", i);
    }
    std::println();
}

void random_number(std::vector<int>& array){
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_int_distribution<int> values(1,1000);
    int arr_size = 100;
    for(int i=0; i<arr_size; i++){
        array.push_back(values(gen));
    }
}

void bubble_sort(std::vector<int>& array){
    for(size_t i=1; i<array.size(); i++){
        for(size_t j = 0; j<array.size()-i; j++){
            if(array[j]>array[j+1]){
                int temp = array[j+1];
                 array[j+1]= array[j];
                array[j] = temp;
            }
        }
    }
}