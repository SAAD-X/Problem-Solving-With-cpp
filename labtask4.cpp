#include<iostream>
#include<string>
using namespace std;
class Product
{
private:
    int product_no;
    string product_name;
    float price;
    int qty;
    float tax;
    float discount;
public:
    Product(int pno,string pname,float pri,int q,float t,float dis)
    {
        product_no=pno;
        product_name=pname;
        price=pri;
        qty=q;
        tax=t;
        discount=dis;



    }
    float TotalPriceCal()
    {
        return qty*price;
    }
    float TaxCal()
    {
        float tp=TotalPriceCal();
        float dis=DiscountCal();
        float CurrentAmount=tp-dis;
        float TaxAmount=CurrentAmount*(tax/100);
        return TaxAmount;
    }
    float DiscountCal()
    {
        float tp=TotalPriceCal();
        float dis=tp*(discount/100);
        return dis;
    }
    float PayableAmount()
    {
        return TotalPriceCal() + TaxCal() - DiscountCal();
    }
    void ShoppingBill()
    {
        cout<<"Product No :"<<product_no<<endl;
        cout<<"Product Name :"<<product_name<<endl;
        cout<<"Total Price of Product is  :"<<TotalPriceCal()<<endl;
        cout<<"According to GOVT Product Tax is  :"<<TaxCal()<<endl;
        cout<<"Discount on Product :"<<DiscountCal()<<endl;
        cout<<"Payable Amount :"<<PayableAmount()<<endl;



    }
};
int main()
{
Product customer1(1,"iphone xr",55000,5,20,30);
customer1.ShoppingBill();
Product customer2(2,"HP PROBOOK",500000,5,10,40);
customer2.ShoppingBill();
Product customer3(3,"MSI",120000,5,10,15);
customer3.ShoppingBill();
}
