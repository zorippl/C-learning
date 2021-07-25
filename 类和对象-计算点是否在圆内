#include "include.h"
 using namespace std;

class Point{
private:
    int P_X, P_Y;
public:
    void Set_Point(const int & X, const int & Y)
    {
        P_X = X;
        P_Y = Y;
    }
    int Read_Point_X(void)
    {
        return P_X;
    }
    int Read_Point_Y(void)
    {
        return P_Y;
    }
};

class Circle{
private:
    Point Center;
    int Radius;
public:
    void Set_Radius(const int & R)
    {
        Radius = R;
    }
    void Set_Center(const Point c)
    {
        Center = c;
    }
    int Read_Radius(void)
    {
        return Radius;
    }
    Point Read_Center()
    {
        return Center;
    }
};

bool JudgeIn( Circle & c,  Point & p)
{
    int Distance_Square;
    Distance_Square = (p.Read_Point_Y() - c.Read_Center().Read_Point_Y()) * (p.Read_Point_Y() - c.Read_Center().Read_Point_Y())
    + (p.Read_Point_X() - c.Read_Center().Read_Point_X()) * (p.Read_Point_X() - c.Read_Center().Read_Point_X());

    if(Distance_Square <= c.Read_Radius() * c.Read_Radius())
    {
        return true;
    }
    else   return false;
}
int main()
{
    Circle c;
    c.Set_Radius(5);//半径5

    Point p, Center;
    Center.Set_Point(5, 0);//圆心（5,0）
    c.Set_Center(Center);
    p.Set_Point(5, 6);
    if(JudgeIn(c, p))
        cout << "点在圆内" <<endl;
    else   
        cout << "点在圆外" <<endl; 
    system("pause");
}
