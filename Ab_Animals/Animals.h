#ifndef ANIMALS_H
#define ANIMALS_H

class Animals
{
protected:
    std::string m_EatingType;
    std::string m_Type;
    int m_LegCount{};
    int m_Age{};

public:
    Animals(std::string EatingType, std::string Type, int LegCount, int Age);
    virtual ~Animals() = default;
public:
    bool IsCarnivore() const;
    bool IsPet() const;
    bool HasOwner() const;
public:
    virtual void Sound() const = 0;
};


class Dog : public Animals
{
protected:
    std::string m_DogType;
    std::string m_Color;

public:
    Dog(std::string EatingType, std::string Type, int LegCount, int Age,
        std::string DogType, std::string Color);
    ~Dog() override = default; 
    void Sound() const override;

    friend std::ostream& operator<<(std::ostream& os, const Dog& other);
};



class Tiger : public Animals
{
protected:
    std::string m_Location;

public:
    Tiger(std::string EatingType, std::string Type, int LegCount, int Age,
          std::string Location);
    ~Tiger() = default;
    void Sound() const override;

    friend std::ostream& operator<<(std::ostream& os, const Tiger& other);
};


class Monkey : public Animals
{
protected:
    std::string m_MonkeyType;

public:
    Monkey(std::string EatingType, std::string Type, int LegCount, int Age,
           std::string MonkeyType);
    ~Monkey() = default;
    void Sound() const override;

    friend std::ostream& operator<<(std::ostream& os, const Monkey& other);
};



#endif