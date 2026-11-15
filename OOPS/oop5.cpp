#include<iostream>
using namespace std;

class Product
{
    int productId;
    string productName;
    float price;

public:
    void input()
    {
        cout<<"Enter Product ID: ";
        cin>>productId;

        cout<<"Enter Product Name: ";
        cin>>productName;

        cout<<"Enter Price: ";
        cin>>price;
    }

    void display()
    {
        cout<<"\nProduct ID: "<<productId;
        cout<<"\nProduct Name: "<<productName;
        cout<<"\nPrice: "<<price;
    }
};

int main()
{
    Product *item = new Product;

    item->input();
    item->display();

    delete item;

    return 0;
}
