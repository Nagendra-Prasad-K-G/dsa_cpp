#pragma once
#include<iostream>
#include<vector>
#include<random>

void random_num(std::vector<int>& array){
    std::random_device numGen;
    std::mt19937 gen(numGen());
    std::uniform_int_distribution<int> values(1,1000);
    int arrayS = 1000;
    array.reserve(array.size()+ arrayS);
    for (int i =0; i<arrayS; i++){
        array.push_back(values(gen));
    } 
}