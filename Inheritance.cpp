#include <iostream>
class Figure
{
protected:
    std::string f_name;
    int sides_count;
public:
    Figure(std::string name, int sides) {
        f_name = name;
        sides_count = sides;
    }
   Figure() {

    };
    void get_sides_count() 
    {
        
        std::cout << f_name << ":" << sides_count << std::endl;
    };
};
    
class Triangle : public Figure
{

public:
   Triangle(std::string name, int sides) {
       f_name = name;
        sides_count = sides;
    }
};

class Quadrilateral : public Figure
{

public:
    Quadrilateral(std::string name, int sides) {
        f_name = name;
        sides_count = sides;
    }
};

int  main()
{
    setlocale(LC_ALL, "RUS");
       std::cout << "Количество сторон:" << std::endl;
    Figure figure ("Фигура", 0);
    figure.get_sides_count();
    Triangle triangle("Треугольник", 3);
    triangle.get_sides_count();
    Quadrilateral quadrilateral("Четырехугольник", 4);
    quadrilateral.get_sides_count();
}
