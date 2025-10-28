#include <iostream>
#include <string>


class Parking
{
    private:
    double m_length;
    double m_width;

    public:
    Parking()
    {
        m_length = 0;
        m_width = 0;
    }
    Parking(double length, double width)
    {
        m_length = length;
        m_width = width;
       // std::cout << "Constructor " << std::endl;
    }
    ~Parking()
    {
        //std::cout << "Destructor" << std::endl;
    }

    double Area()
    {
        return m_length * m_width;
    } 

};

class Car
{
    private:
    std::string m_name;
    int m_length;
    int m_width;

    public:
    Car()
    {
        m_length = 0;
        m_width = 0;
        m_name = "Unknown";
    }
    Car(const std::string &name,int length, int width)
    {
        m_length = length;
        m_name = name; 
        m_width = width;
        //std::cout << "Constructor " << std::endl;
    }
    ~Car()
    {
        //std::cout << "Destructor" << std::endl;
    }
    double Area()
    {
        return m_length * m_width;
    }
    std::string name()
    {
        return m_name;
    }
};
    bool is(Parking &P, Car &C)
    {
        if((P.Area() - 2) > C.Area())
        {
            return true;
        }
        return false;

    }
    std::string** Result(Parking** &P , Car* C)
    {
        std::string** result = new std::string*[2];
        for(int i = 0; i < 2; i++)
        {
            result[i] = new std::string[3];
        }
        int k = 0;
        bool m[6] = {0};
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                bool parked = false;
                for(int c = 0; c < 6; c++)
                {
                    if(!m[c] && is(P[i][j],C[c]))
                    {
                        result[i][j] = C[c].name();
                        m[c] = 1;
                        parked = true;
                        break;
                    }    
                }
                if(!parked)
                {
                    result[i][j] = "empty";
                }
            }
        }
        return result;
    }
    void PrintM(std::string** K, int m, int n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                std::cout << K[i][j] << " ";
            }
            std::cout << std::endl;
            
        }
        
    }

int main()
{
    Parking** Park = new Parking*[2];
    for (int i = 0; i < 2; i++)
    {
        Park[i] = new Parking[3];
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            Park[i][j] = Parking(2.5,3.5);
        }
    }
    Car* Cars = new Car[6];
    Cars[0] = Car("Bmw",2,2.4);
    Cars[1] = Car("Mercedes",1.7,3.6);
    Cars[2] = Car("Ford",7,3.4);
    Cars[3] = Car("Opel",1.6,2.4);
    Cars[4] = Car("Minivan",2.4,2.7);
    Cars[5] = Car("Niva",1.4,1.9);
    
    std::string** answer = Result(Park,Cars);
    PrintM(answer,2,3);






    for (int i = 0; i < 2; i++)
    {
        delete[] Park[i];
    }
    delete[] Park;

    for (int i = 0; i < 2; i++)
    {
        delete[] answer[i];
    }
    delete[] answer;

    delete[] Cars;
    return 0;
}