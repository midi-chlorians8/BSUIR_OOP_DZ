#include <iostream>

using namespace std;
class Circle{
    public:
    Circle() // Конструктор по умолчанию
    {
        size = 1;
    }
    Circle(int size,int x,int y, int angle) // Конструктор 
    {
        this->size = size; 
        this->x = x; 
        this->y = y;
        this->angle = angle;
    }
    void MoveCircle(int x,int y){
        this->x = x; 
        this->y = y;
    }
    void showCoords() 
    {
        cout << "Circle Coords x: " << x << "\t y: " << y << endl;
    }
    void SetSize(int NewSize){
        size = NewSize;
    }
    void showSize() //Вопрос. Как сделать в функции класса вывод имени обьекта? Наверно через ввод имени обьекта
    {
        cout << "Circle size: " << size << endl;
    }
    void SetAngle(int NewAngle){
        angle = NewAngle;
    }
    int angle = 0;
     ~Circle()
    {
        std::cout << "Destructor called for Circle "  << std::endl;
    }
    private:
    //int Radius;
    int x=0;
    int y=0;
    int size=0;
    
};
class Rect{ //Прямоугольник
    public:
    Rect() // Конструктор по умолчанию
    {
        size = 1;
    }
    Rect(int size,int x,int y, int angle) // Конструктор 
    {
        this->size = size; 
        this->x = x; 
        this->y = y;
        this->angle = angle;
    }
    void MoveRect(int x,int y){
        this->x = x; 
        this->y = y;
    }
    void showCoords() 
    {
        cout << "Rect Coords x: " << x << "\t y: " << y << endl;
    }
    void SetSize(int NewSize){
        size = NewSize;
    }
    void showSize() //Вопрос. Как сделать в функции класса вывод имени обьекта?
    {
        cout << "Circle size: " << size << endl;
    }
    void SetAngle(int NewAngle){
        angle = NewAngle;
    }
    int angle = 0;
    ~Rect()
    {
        std::cout << "Destructor called for Rect "  << std::endl;
    }
    private:
    int x=0;
    int y=0;
    int size=0;
};

class Square{ //square квадрат
    public:
    Square() // Конструктор по умолчанию
    {
        size = 1;
    }
    Square(int size,int x,int y, int angle) // Конструктор 
    {
        this->size = size; 
        this->x = x; 
        this->y = y;
        this->angle = angle;
    }
    void MoveSquare(int x,int y){
        this->x = x; 
        this->y = y;
    }
    void showCoords() 
    {
        cout << "Square Coords x: " << x << "\t y: " << y << endl;
    }
    void SetSize(int NewSize){
        size = NewSize;
    }
    void showSize() //Вопрос. Как сделать в функции класса вывод имени обьекта?
    {
        cout << "Circle size: " << size << endl;
    }
    void SetAngle(int NewAngle){
        angle = NewAngle;
    }
    int angle = 0;
    ~Square()
    {
        std::cout << "Destructor called for Square "  << std::endl;
    }
    private:
    int x=0;
    int y=0;
    int size=0;
};
int main() 
{ 
    // Действия с кругом square
    Circle circle1; //Создал обьект который хранится на стеке

    circle1.showCoords(); //Посмотрел координаты
    circle1.MoveCircle(2,5); //Переместил круг
    circle1.showCoords(); //Посмотрел координаты

    circle1.showSize();
    circle1.SetSize(10);
    circle1.showSize();

    cout << "circle1 angle:" << circle1.angle << endl;
    circle1.SetAngle(4);
    cout << "circle1 angle:" << circle1.angle << endl << endl;
    // Действия с кругом
    
    // Действия с прямоугольником
    Rect rect1(5,1,2,7);
    rect1.showCoords(); //Посмотрел координаты
    rect1.showSize();
    rect1.SetAngle(44);
    cout << "rect1 angle:" << rect1.angle << endl<< endl;
    // Действия с прямоугольником

    // Действия с квадратом
    Square square1(5,177,243,7);
    square1.showCoords(); //Посмотрел координаты
    // Действия с квадратом
    return 0; 
}