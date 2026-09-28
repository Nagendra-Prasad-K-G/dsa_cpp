#include<print>
#include<vector>
#include<random>

int main(){
    std::vector<int> list;
    control_flow(list);
    return 0;
}

void control_flow(std::vector<int>& list){
    random_num(list);
    std::println("before sorting the list was : ");
    for(int i : list){
        std::print(" {} ",i);
    }
    std::println();

    quick_sort(list);

    std::println("after sorting the list is : ");
    for(int i : list){
        std::print(" {} ",i);
    }
    std::println();
}

void random_num(std::vector<int>& list){
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_int_distribution<int> values(1,1000);
    int lSize = 100;
    for(int i=0; i<lSize; i++){
        list.push_back(values(gen));
    }
}

void quick_sort(std::vector<int>& list){

}
