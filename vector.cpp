//73: Գրել vector class( դինամիկ զանգված ) մինիմալ հնարավորթյուններով
#include <iostream>

template <typename T>

class vector
{
    private:
        int m_size;
        T* m_data;
        void resize(int size)
        {
            T* new_data = new T[size];
            for(int i = 0; i < m_size; i++)
            {
                new_data[i] = m_data[i];
            }
            delete[] m_data;
            m_data = new_data;
        }
    public:
        vector() : m_size(0),m_data(nullptr)
        {
        }
        ~vector()
        {
            delete[] m_data;        
        }
        vector(const vector& other)
        {

        }
        vector& operator=(const vector& other)
        {
            
        }
        void push_back(const T& m)
        {
            resize(m_size + 1);
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
    
    
    return 0;
}