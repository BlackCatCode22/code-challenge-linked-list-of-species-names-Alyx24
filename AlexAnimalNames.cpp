#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Node {
public:
    string animalNames;
    Node* Next;

    //Void etc
    void printList (Node* n){
    while (n !=NULL) {
    cout << n->animalNames << "";
    n = n -> Next;
    }
}
};
//Node for Hyena, Lion, Bear, Tiger names
int main() {
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();

    head->animalNames = "Hyena, \n\n ";
    head->Next = second;

    second->animalNames = "Lion, \n\n ";
    second->Next = third;

    third->animalNames = "Bear, \n\n ";
    third->Next = fourth;

    fourth->animalNames = "Tiger \n\n ";
    fourth->Next = NULL;

    // Printing the List
    head->printList(head);

    return 0;
}
