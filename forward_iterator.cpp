//90: Իմպլեմնտացնել սեփական forword iteraotor
#include <iostream>
#include<initializer_list>

template <typename T>
struct Node
{
    T data;
    Node* next;

    Node(const T& other) : data(other) ,next(nullptr){}

};
template <typename T>
class Forward_Iterator
{
    private:
        Node<T>* current;
    public:
        Forward_Iterator(Node<T>* Nullptr = nullptr) : current(Nullptr){}
        Forward_Iterator& operator++()
        {
            current = current->next;
            return *this;
        }
        bool operator !=(const Forward_Iterator& other) const
        {
            return current != other.current;
        }
        bool operator ==(const Forward_Iterator& other) const
        {
            return current == other.current;
        }
        T& operator *()
        {
            return current->data;
        }
        
        Forward_Iterator(const Forward_Iterator& other)
        {
            current = other.current;
        }
        Forward_Iterator& operator= (const Forward_Iterator& other)
        {
            if(this != &other)
            {
                current = other.current;
            }
            return *this;
        }
};
template <typename T>
class List
{
    private:
        Node<T>* head;
    public:
        List() : head(nullptr){}
        List(std::initializer_list<T> l) : head(nullptr)
        {
            for(auto it = l.end(); it != l.begin();)
            {
                --it;
                push_front(*it);
            }
        }
        void push_front(const T& value)
        {
            Node<T>* k = new Node<T>(value);
            k->next = head;
            head = k;
        }
        Forward_Iterator<T> begin()
        {
            return Forward_Iterator<T>(head);
        }
        Forward_Iterator<T> end()
        {
            return Forward_Iterator<T>(nullptr);
        }
};




int main()
{
List<int> l{1, 2, 3, 4};

    for (Forward_Iterator<int> it = l.begin(); it != l.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    return 0;
}