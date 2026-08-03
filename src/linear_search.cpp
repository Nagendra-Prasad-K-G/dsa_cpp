#include<print>
#include<vector>
#include<random>

void control(std::vector<int>& array);
int random_number(std::vector<int>& array);
int linear_search(const std::vector<int>& array, const int ele);

int main(){
    std::vector<int> array;
    control(array);   
    return 0;
}

void control(std::vector<int>& array){
    int element = random_number(array);
    int ele = linear_search(array,element);
    std::println("the element to be found is : {}", element);
    if(ele == -1){
        std::println("element is not found in the array");
    }
    else{
        std::println("the element is found at position : {}", ele);
    }
}

int random_number(std::vector<int>& array){
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_int_distribution<int> values(1,5000);

    int arrSize = 1000;
    for(int i=0; i<arrSize;i++){
        array.push_back(values(gen));
    }
    int element = values(gen);
    return element;
}

int linear_search(const std::vector<int>& array, const int ele){
    
    for(size_t pointer =0; pointer<array.size(); pointer++){
        if(array[pointer] == ele){
            return pointer;
        }
    }
    return -1;
}