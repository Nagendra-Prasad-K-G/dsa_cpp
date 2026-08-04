#include<print>
#include<vector>
#include<algorithm>
#include<random>

void control(std::vector<int>& list);
int random(std::vector<int>& list);
int binary_search(const std::vector<int>& list, const int ele);

int main(){
    std::vector<int> list;
    control(list);
    return 0;
}

void control(std::vector<int>& list){
    int element = random(list);
    std::sort(list.begin(), list.end());
    std::println("element to be found is : {} ", element);

    int ele = binary_search(list,element);
    if(ele == -1){
        std::println("element is not found in the list");
    }
    else{
        std::println("element is found at index : {} ", ele);
    }
}

int random(std::vector<int>& list){
    std::random_device numGen;
    std::mt19937 gen(numGen());
    std::uniform_int_distribution<int> values(1,500);
    int listSize = 100;
    for(int i=0; i<listSize;i++){
        list.push_back(values(gen));
    }
    return values(gen);
}

int binary_search(const std::vector<int>& list, const int ele){
    int low = 0;
    int high = list.size() -1;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(list[mid] ==ele){
            return mid;
        }
        else if(list[mid]<ele){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    return -1;
}
