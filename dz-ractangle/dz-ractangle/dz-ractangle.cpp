#include <iostream>
using namespace std;

int main()
{
    int width;
    int height;
    int choice;
    cout << "hello! type 1 if you want to know your ractangle area and perimeter: "<<endl;
    cin >> choice;
    if (choice == 1)
    {
        while (choice ==1 )
        {
            cout << "enter height: ";
            cin >> height;
            cout << endl;
            cout << "enter width: ";
            cin >> width;
            cout << endl << height * width<<endl;
            cout << "do you want repeat? type 1 if yes, type 2 if no: ";
            cin >> choice;
            system("cls");
        }
     }
    else
    {
        return(0);
    }
}