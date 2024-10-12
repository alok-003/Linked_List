//Name:Alok Chawat
//PRN:23070123016
//Aim:Implemention of Linked List in a program

#include <iostream>
using namespace std;


    class Link{
        public:
        int data;
        Link* next;
        
        Link(int num){
        data = num;
        next = NULL;
    }
};

int main(){
    Link* l1 = new Link(6);
    cout<<l1 ->data<<" "<<l1->next;
    return 0;
}


/*Output:
6 0*/