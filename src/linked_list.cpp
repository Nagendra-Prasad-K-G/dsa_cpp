#include<iostream>

void linkedList();

struct Node{
    int day;
    double temp;
    Node* next;
};
int main(){
    linkedList();
    return 0;
}
void linkedList(){
    Node* NodeA = new Node();
    NodeA->day=1;
    NodeA->temp=35.54;
    NodeA->next= nullptr;

    Node* NodeB = new Node();
    NodeB->day=2;
    NodeB->temp=37.2;
    NodeB->next = nullptr;

    Node* NodeC =new Node();
    NodeC->day=3;
    NodeC->temp=32.45;
    NodeC->next=nullptr;

    Node* NodeD = new Node();
    NodeD->day=4;
    NodeD->temp=31.00;
    NodeD->next=nullptr;

    NodeA->next=NodeB;
    NodeB->next=NodeC;
    NodeC->next=NodeD;

    for(Node* i = NodeA; i!=nullptr; i=i->next){
        std::cout<<"day is : "<<i->day<<"\n temperature in degree celsius is:"<<i->temp<<std::endl;
    }
    delete NodeA;
    delete NodeB;
    delete NodeC;
    delete NodeD;
}