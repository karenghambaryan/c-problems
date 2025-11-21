#ifndef CONSOLE_H
#define CONSOLE_H

class Console
{
    public:
        virtual void Button_On() const = 0;
        virtual void Button_Off() const = 0;
        virtual void Button_Exit() const = 0;
        virtual void Button_More() const = 0;
        virtual void Button_Less() const = 0;
    public:
        virtual ~Console() = default;
        Console() = default;
    public:
        virtual void CallFuncs() const = 0;
};

class Tv_Console : public Console
{
    public:
        void Button_On() const override;
        void Button_Off() const override;
        void Button_Exit() const override;
        void Button_More() const override;
        void Button_Less() const override;
    public:
        ~Tv_Console() override = default;
        Tv_Console() = default;
    public:
        virtual void Button_Youtube() const;
        virtual void Button_Netflix() const;
        virtual void Button_Radio() const;
    public:
        void CallFuncs() const override;
};

class Ventilator_Console : public Console
{
    public:
        void Button_On() const override;
        void Button_Off() const override;
        void Button_Exit() const override;
        void Button_More() const override;
        void Button_Less() const override;
    public:
        ~Ventilator_Console() override = default; 
        Ventilator_Console() = default;
    public:
        virtual void Button_Hot() const;
        virtual void Button_Cold() const;
    public:
        void CallFuncs() const override;
};




#endif