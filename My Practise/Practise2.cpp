#include<iostream>
using namespace std;

class Myfruit
{
private :
            float apple_quantity;

            float banana_quantity;

            float orange_quantity;

protected :
            float apple_price ;

            float banana_price;

            float orange_price;
public :
     void setApple(float pri , float qua)
    {
        apple_price    = pri;
        apple_quantity = qua;
    }
    void showApple()
    {
        cout << "Apple Price   $:" << apple_price     <<endl;
        cout << "Apple Quantity :" << apple_quantity  <<endl;
        cout << "## One Apple a day, keep doctor away"<<endl;
        cout << "                                    "<<endl;
    }

    void setOrange(float pri , float qua)
    {
        orange_price    = pri;
        orange_quantity = qua;
    }
    void showOrange()
    {
        cout << "Orange Price   $:" << orange_price    <<endl;
        cout << "Orange Quantity :" << orange_quantity <<endl;
        cout << "## A good source of Vitamin-C        "<<endl;
        cout << "                                     "<<endl;

    }
    void setBanana(float pri , float qua)
    {
        banana_price    = pri;
        banana_quantity = qua;
    }
    void showBanana()
    {
        cout << "Banana Price   $:" << banana_price    <<endl;
        cout << "Banana quantity :" << banana_quantity <<endl;
        cout << "## A good source of Minerals         "<<endl;
        cout << "                                     "<<endl;

    }

};
 class Apple : public Myfruit
{
    public:
        Apple(float p , float q)
        {
            setApple(p,q);
            showApple();
        }
};
class Orange : public Myfruit
{
    public:
        Orange(float p , float q)
        {
                setOrange(p,q);
                showOrange();
        }
};
class Banana : public Myfruit
{
    public:
        Banana(float p , float q)

        {
            setBanana(p,q);
            showBanana();
        }
};


int main()
{
    Apple(150,10);
    Orange(200,5);
    Banana(120,20);

}
