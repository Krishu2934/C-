#include <iostream>
using namespace std;

class Box
{
    int width, height;

public:
    void setData()
    {
        int w, h;
        cout << "Enter width of box: ";
        cin >> w;
        cout << "Enter height of box: ";
        cin >> h;
        width = w;
        height = h;
    }
    void getData()
    {
        cout << "Width: " << width << " " << "Height: " << height << endl;
    }
    void area();
};

void Box::area()
{
    cout << "Area is: " << width * height << endl;
}

int main()
{
    int w, h;
    Box b1;
    b1.setData();
    b1.getData();
    b1.area();

    return 0;
}