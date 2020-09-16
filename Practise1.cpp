#include<iostream>

using namespace std;

class Apple
{
public:

Apple ()

{

        cout<<"Default Constructor"<<endl;

        apple_quantity = 0;

        apple_price = 0;

}

Apple (int q, float p)

{

        apple_quantity = q;

        apple_price = p;

}

void showAppleInfo(){

    cout<<"Apple Quantity : "<< apple_quantity <<endl;

    cout<<"Apple Price    : "<< apple_price <<endl;

}

private:

    int apple_quantity;

protected:

    float apple_price;

};

class Orange
{
public:

Orange ()

{

    cout<<"Default Constructor"<<endl;

        orange_quantity = 0;

        orange_price = 0;

}

Orange (int q, float p)

{

        orange_quantity = q;

        orange_price = p;

}

void showOrangeInfo(){

    cout<<"Orange Quantity : "<< orange_quantity <<endl;

    cout<<"Orange Price    : "<< orange_price <<endl;

}

private:

int orange_quantity;

protected:

float orange_price;

};

class Myfruit: public Orange, public Apple

{

public:

Myfruit(): Orange(), Apple()

{

}

Myfruit(int aq, float ap, int oq, float op): Orange(oq,op), Apple(aq, ap)

{

}

void ShowMyFruit()

{

//cout<<"Orange Qnt: "<<orange_quantity<<endl;

//cout<<"Apple Qnt: "<<apple_quantity<<endl;

cout<<"Orange Price: "<<orange_price<<endl;

cout<<"Apple Price: "<<apple_price<<endl;

}

};

int main(){

//Myfruit fruit;

//fruit.ShowMyFruit();

Myfruit fruit(5,120,10, 200 );

fruit.ShowMyFruit();

}
