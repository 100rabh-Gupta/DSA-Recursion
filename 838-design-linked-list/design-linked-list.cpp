class MyLinkedList {
    struct ListNode {

        int val;
        ListNode* next;

        ListNode(int x) {
            val = x;
            next = nullptr;
        }
    };

    ListNode* head;
    int size;

public:
    MyLinkedList() {
        head = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size)
            return -1;
        ListNode* curr = head;
        while (index--) {
            curr = curr->next;
        }
        return curr->val;
    }

    void addAtHead(int val) {
        ListNode* add = new ListNode(val);
        add->next = head;
        head = add;
        size++;
    }

    void addAtTail(int val) {
         ListNode* node = new ListNode(val);

        if (head == nullptr) {
            head = node;
            size++;
            return;
        }
        ListNode* l = head;

        while (l->next) {
            l = l->next;
        }
        l->next = node;
        size++;
    }

    void addAtIndex(int index, int val) {
         if (index < 0 || index > size)
            return;
        if (index == 0) {
            ListNode* add = new ListNode(val);
            add->next = head;
            head = add;
            size++;
            return;
        }
      
        ListNode* temp = head;
        index--;
        while (index-- && temp) {
            temp = temp->next;
        }
        ListNode* add = new ListNode(val);
        add->next = temp->next;
        temp->next = add;
        size++;
    
    }

    void deleteAtIndex(int index) {

          if (index < 0 || index >= size)
            return;
        if (index == 0) {
             ListNode* cur = head;
            head = head->next;
            delete cur;
            size--;
            return;
        }
         ListNode* curr = head;

        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }

        ListNode* temp = curr->next;
        curr->next = temp->next;

        delete temp;
        size--;
       
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */