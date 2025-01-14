 #include <bits/stdc++.h>

 class Node{
     public:
     int val;
     Node* next;
     Node* prev;
     Node(int val){
         this->val = val;
         this->next = NULL;
         this->prev = NULL;
     }
 };

using namespace std;
class myStack{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;
        
        void push(int val){
            sz++;
            Node* newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }

        void pop(){
            sz--;
            Node* deletedNode = tail;
            tail = tail->prev;
            delete deletedNode;
            if(tail == NULL){
                head = NULL;
                return;
            }
            tail->next = NULL;
        }
        int top(){
            return tail->val;
        }
        
        int size(){
            return sz;
        }

        bool empty(){
          return head == NULL;
        }
};

int main(){
    myStack st;
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
        int x;
        cin >> x;
        st.push(x);
   }

   while(!st.empty()){
    cout << st.top() << endl;
    st.pop();
   }

    return 0;
}