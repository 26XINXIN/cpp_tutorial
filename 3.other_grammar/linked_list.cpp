#include <iostream>
#include <cstdlib>
using namespace std;

class LinkedNode{
    public:
        int data;
        LinkedNode *next;
        LinkedNode(int d){
            this->data = d;
            this->next = NULL;
        }
};

int size(LinkedNode &linked_list){
    if (linked_list.next == NULL) return 0;


    LinkedNode *it = &linked_list;
    int _size = 0;
    while (it->next != NULL){ //(*it).next
        _size ++;
        it = it->next;
    }
    return _size;
}



/*
void insert(LinkedNode &linked_list, int position, LinkedNode node){
    int len = size(linked_list);
    if (len < position)
    {
        cout << "invalid position: size of linked_list is " << len;
        cout << " and insertion position is " << position << endl;
        return;
    }

    LinkedNode *it = &linked_list;
    for (int i = 0; i < position; i++)
        it = it->next;
    node.next = it->next;
    it->next = &node;
}

LinkedNode & remove(LinkedNode &linked_list, int position){
    int len = size(linked_list);
    {
        cout << "invalid position: size of linked_list is " << len;
        cout << " and insertion position is " << position << endl;
        return;
    }

    LinkedNode *it = &LinkedNode;
    for (int i = 0; i < position; i++){
        it = it->next;
    }
    LinkedNode *node = it->next;
    it->next = node->next;
    return *node;
}

void update(LinkedNode &linked_list, int position, int data){
    int len = size(linked_list);
    {
        cout << "invalid position: size of linked_list is " << len;
        cout << " and insertion position is " << position << endl;
        return;
    }

    LinkedNode *it = &linked_list;
    
    
}

int get_data(LinkedNode &linked_list, int position);
*/

int main(){
    LinkedNode l(-1);
    LinkedNode node1(1), node2(2), node3(3);
    l.next = &node1;
    node1.next = &node2;
    node2.next = &node3;
    cout << size(l) << endl;
}