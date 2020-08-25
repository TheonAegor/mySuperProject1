#include <iostream>
using namespace std;



class Rec
{
    public:
        int get_width() { return its_width; }
        int get_height() { return its_height; }
        void set_width(int width) { its_width = width; }
        void set_height (int height) { its_height = height; } 

    private:
        int its_width;
        int its_height;
};

void printMenu();

int main()
{
    Rec ob_rec;
    int width;
    int height;

    cout << "Write width of the rectangle" << endl;
    cin >> width;
    cout << "Write height of the rectangle" << endl;
    cin >> height;
    ob_rec.set_width(width);
    ob_rec.set_height(height);
    printMenu();
}

void printMenu()
{
    cout << "***Menu***" << endl;
    cout << "(1)Print Rectangle\n";
    cout << "(2)Change parameters\n";
    cout << "(3)Show Area\n";
    cout << "(4)Quit\n";
}
