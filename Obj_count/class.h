#ifndef CLASS_H
#define CLASS_H


class A
{
    private:
        int a_x;
        int a_y;
    public:
        static int count;
    public:
        A();
        A(int x, int y);
        A(const A& other);
        A& operator= (const A& other);
        ~A();
        static int GetCount();

};









#endif