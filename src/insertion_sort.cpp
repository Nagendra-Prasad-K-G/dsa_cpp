#include<print>
#include<vector>
#include <random>

void random_num(std::vector<int>& array);
void insertion_sort(std::vector<int>& array);

int main(){
    std::vector<int>array;
    random_num(array);
    std::println("after sorting the list is : ");
    for(int i : array){
        std::print(" {} ", i);
    }
    std::println();
    return 0;
}

void random_num(std::vector<int>& array){
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_int_distribution<int> values(1,1000);

    int arr_size = 1000;
    for(int i=0; i<arr_size;i++){
        array.push_back(values(gen));
    }

    std::print("unsorted list is :\n");
    for(int i:array){
        std::print(" {} ", i);
    }
    std::println();

    insertion_sort(array);
}

void insertion_sort(std::vector<int>& array){
    for(size_t i=1; i<array.size(); i++){
        int j = static_cast<int>(i)-1;
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