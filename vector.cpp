#include <iostream>
#include <initializer_list>

template <typename T>

class vector
{
    private:
        int m_size;
        int m_cap;
        T* m_data;
        void resize(int new_cap)
        {
            T* new_data = new T[new_cap];
            for(int i = 0; i < m_size; i++)
            {
                new_data[i] = m_data[i];
            }
            delete[] m_data;
            m_data = new_data;
            m_cap = new_cap;
        }
    public:
        vector() : m_size(0),m_cap(0),m_data(nullptr)
        {
        }
        vector(std::initializer_list<T> list) : m_size(list.size()),m_cap(list.size() * 2)
        {
            m_data = new T[m_cap];
            int i = 0;
            for (const T& value : list)
            {
                m_data[i++] = value;
            }
        }
        ~vector()
        {
            delete[] m_data;        
        }
        vector(const vector& other) : m_size(other.m_size),m_cap(other.m_cap)
        {
            m_data = new T[m_cap];
            for(int i = 0; i < m_size; i++)
            {
                m_data[i] = other.m_data[i];
            }
        }
        vector& operator=(const vector& other)
        {
            if(this != &other)
            {
                delete[] m_data;
                m_size = other.m_size;
                m_cap = other.m_cap;
                m_data = new T[m_cap];
                for(int i = 0; i < m_size; i++)
                {
                    m_data[i] = other.m_data[i];
                }
            }
             return *this; 
        }

        void push_back(const T& m)
        {
            if(m_size == m_cap)
            {
                int new_cap;
                if(m_cap == 0)
                {
                    m_cap = 1;
                }
                else{
                    m_cap = m_cap *2;
                }
                resize(new_cap);
            }
            m_data[m_size++] = m;
        }
        void pop_back()
        {
            if(m_size > 0)
            {
                m_size--;
            }
        }
        int size()
        {
            return m_size;
        }
        T* begin()
        {
            return m_data;
        }
        T* end()
        {
            return m_data + m_size;
        }
        T& operator[](int i)
        {
            return m_data[i];
        }
};



int main()
{
    vector<int> v;
    v.push_back(7);
    v.push_back(9);
    v.push_back(17);
    v.push_back(45);
    for(int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << "\n";
    }
    std::cout << "\n";
    v.pop_back();
    for(int* it = v.begin(); it < v.end(); it++)
    {
        std::cout << *it << "\n";
    }
    
    vector<int> v1 = {7, 78, 35, 5};

    for (int x : v1)
        std::cout << x << " ";

    
    return 0;
}