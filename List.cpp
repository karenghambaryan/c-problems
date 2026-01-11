#include <iostream>
template <typename T>
struct Node
{
    public:
    Node<T>* next;
    T data;
    Node(T value) : data(value),next(nullptr){}
};
namespace my
{
    template <typename T>
    class List
    {
        private:
            Node<T>* head;
        public:
        List()
        {
            head = nullptr;
        }
        ~List()
        {
            Node<T>* cur = head;
            while(cur != nullptr)
            {
                Node<T>* temp = cur;
                cur = cur->next;
                delete temp;
            }
        }
        void push_back(const T& value)
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
        void push_front(const T& value)
        {
            Node<T>* newNode = new Node<T>(value);
            newNode->next = head;
            head = newNode;
        }
        void pop_front()
        {
            if(head != nullptr)
            {
                Node<T>* temp = head;
                head = head->next;
                delete temp;
            }
        }
        void insert(const T& value, int index)
        {
            if(index > 0 && head != nullptr)
            {
                Node<T>* cur = head;
                for(int i = 0; i < index - 1 && cur->next != nullptr;i++)
                {
                    cur = cur->next;
                }
                Node<T>* newNode = new Node<T>(value);
                newNode->next = cur->next;
                cur->next = newNode;
            }
            else{
                push_front(value);
            }
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
}


int main()
{
    my::List<int> list;

    list.push_front(3);
    list.push_front(1);
    list.insert(2, 1);   
    list.insert(0, 0);   

    list.print();

    list.pop_front();   
    list.print();
    
}