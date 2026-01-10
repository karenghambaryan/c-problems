#include <iostream>
template <typename T>
struct Node
{
    public:
    Node<T>* next;
    T data;
    Node(T value) : data(value),next(nullptr){}
};

template <typename T>
class LinkedList
{
    private:
        Node<T>* head;
    public:
    LinkedList()
    {
        head = nullptr;
    }
    ~LinkedList()
    {
        Node<T>* cur = head;
        while(cur != nullptr)
        {
            Node<T>* temp = cur;
            cur = cur->next;
            delete temp;
        }
    }
    void push_back(T value)
    {
        Node<T>* newNode = new Node<T>(value);
        if(head == nullptr)
        {
            head = newNode;
            return;
        }

        Node<T>* cur = head;
        while(cur->next != nullptr)
        {
            cur = cur->next;
        }
        cur->next = newNode;
    }

    void print() const
    {
        Node<T>* cur = head;
        while(cur != nullptr)
        {
            std::cout << cur->data << " ";
            cur = cur->next;
        }
        std::cout << std::endl;
    }
};


int main()
{
    LinkedList<int> list;
    list.push_back(17);
    list.push_back(1);
    list.push_back(78);
    list.push_back(45);
    list.print();
    
}