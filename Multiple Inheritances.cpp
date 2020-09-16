#include<iostream>

using namespace std ;

class Apple
{
public :
    Apple()
    {
        cout<<"Default constructor"<<endl;
        apple_quantity = 0 ;
        apple_price = 0 ;
    }
    Apple(int q , float p)
    {
        apple_quantity = q ;
        apple_price = p ;
    }
    void setAppleQuantity(int q)
    {
        apple_quantity = q ;
    }
    int getAppleQuantity()
    {
        return apple_quantity ;
    }
    void showApple()
    {
        cout<<"Apple Quantity : "<<getAppleQuantity()<<endl;
        cout<<"Apple Price    : "<<apple_price<<endl;
    }
private :
    int apple_quantity;

protected :
    float apple_price ;

};
class Orange
{
  public :
    Orange()
    {
        cout<<"Default constructor"<<endl;
        orange_quantity = 0 ;
        orange_price = 0 ;
    }
    Orange(int q , float p)
    {
        orange_quantity = q ;
        orange_price = p ;
    }
     void setOrangeQuantity(int o)
    {
        orange_quantity = o ;
    }
    int getOrangeQuantity()
    {
        return orange_quantity ;
    }
    void showOrange()
    {
        cout<<"Orange Quantity : "<<getOrangeQuantity()<<endl;
        cout<<"Orange Price    : "<<orange_price<<endl;
        cout<<"                 "<<endl;
    }
private :
    int orange_quantity;

protected :
    float orange_price ;
};

class Banana
{
  public :
    Banana()
    {
        cout<<"Default constructor"<<endl;
        banana_quantity = 0 ;
        banana_price = 0 ;
    }
    Banana(int q , float p)
    {
        banana_quantity = q ;
        banana_price = p ;
    }
    void setBananaQuantity(int b)
    {
        banana_quantity = b ;
    }
    int getBananaQuantity()
    {
        return banana_quantity ;
    }
    void showBanana()
    {
        cout<<"Banana Quantity : "<<getBananaQuantity()<<endl;
        cout<<"Banana Price    : "<<banana_price<<endl;
        cout<<"                  "<<endl;
    }
private :
    int banana_quantity;

protected :
    float banana_price ;
};
class Mango
{
  public :
    Mango()
    {
        cout<<"Default constructor"<<endl;
        mango_quantity = 0 ;
        mango_price = 0 ;
    }
    Mango(int q , float p)
    {
        mango_quantity = q ;
        mango_price = p ;
    }
    void setMangoQuantity(int m)
    {
        mango_quantity = m ;
    }
    int getMangoQuantity()
    {
        return mango_quantity ;
    }
    void showMango()
    {
        cout<<"Mango Quantity : "<<getMangoQuantity()<<endl;
        cout<<"Mango Price    : "<<mango_price<<endl;
        cout<<"                  "<<endl;
    }
private :
    int mango_quantity;

protected :
    float mango_price ;
};

class MyFruit : public Apple,public Orange,public Banana,public Mango
{
    public:
        MyFruit(): Orange() , Apple() , Banana() , Mango()
        {

        }
        MyFruit(int aq , float ap , int oq , float op , int bq , float bp , int mq , float mp) :Apple(aq , ap),Orange(oq , op),Banana(bq , bp),Mango(mq , mp)
        {

        }
        void showMyFruit()
        {
        cout<<"Apple Quantity  : "<<getOrangeQuantity()<<endl;
        cout<<"Apple price     : "<<apple_price<<endl;
        cout<<"                  "<<endl;
        cout<<"Orange Quantity : "<<getOrangeQuantity()<<endl;
        cout<<"Orange price    : "<<orange_price<<endl;
        cout<<"                  "<<endl;
        cout<<"Banana Quantity : "<<getBananaQuantity()<<endl;
        cout<<"Banana Price    : "<<banana_price<<endl;
        cout<<"                  "<<endl;
        cout<<"Mango Quantity  : "<<getMangoQuantity()<<endl;
        cout<<"Mango Price     : "<<mango_price<<endl;
        }
};
int main()
{
    MyFruit fruit(10 , 200 , 30 , 300 , 30 , 200 , 50 , 1000);
    fruit . showMyFruit();
}
