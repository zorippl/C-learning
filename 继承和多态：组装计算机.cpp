#include <iostream>
#include <string>
using namespace std;
class CPU
{
public:
    virtual void calculate() = 0;
};

class GPU
{
public:
    virtual void display() = 0;
};

class RAM
{
public:
    virtual void storage() = 0;
};

class Computer
{
public:
    Computer(CPU *CPU, GPU *GPU, RAM *RAM)
    {
        m_CPU = CPU;
        m_GPU = GPU;
        m_RAM = RAM;
    }
    void work()
    {
        m_CPU->calculate();
        m_GPU->display();
        m_RAM->storage();
    }
private:
    CPU *m_CPU;
    GPU *m_GPU;
    RAM *m_RAM;

};

class INTEL_CPU :public CPU
{
public:
    virtual void calculate()
    {
        cout << "Intel CPU开始计算"<< endl;
    }
};

class INTEL_GPU :public GPU
{
public:
    virtual void display()
    {
        cout << "Intel GPU开始计算"<< endl;
    }
};

class INTEL_RAM :public RAM
{
public:
    virtual void storage()
    {
        cout << "Intel RAM开始存储"<< endl;
    }
};

void test01()
{
    CPU * intel_CPU = new INTEL_CPU;
    GPU * intel_GPU = new INTEL_GPU;
    RAM * intel_RAM = new INTEL_RAM;
    Computer C1(intel_CPU, intel_GPU, intel_RAM);
    C1.work();
}
int main()
{
    test01();
    system("pause");
}
