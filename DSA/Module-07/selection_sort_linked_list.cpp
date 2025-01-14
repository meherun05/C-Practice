 #include <bits/stdc++.h>

using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = tail->next;
}

void selection_sort_linked_list(Node* &head){
   
   for (Node* i = head; i != NULL; i = i->next)
   {
    for (Node* j = i->next; j != NULL; j = j->next)
    {
        if(i->val > j->val){
            swap(i->val,j->val);
        }
    }
   }
}

void printing_linked_list(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    selection_sort_linked_list(head);
    printing_linked_list(head);

    return 0;
}