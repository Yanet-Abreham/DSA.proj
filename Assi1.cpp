#include<iostream>
#include<string>
using namespace std;
#define TaxRate 1.2
const float TaxRate_const = 1.2f;
int main(){
    string product_name;
    cout<<"Enter a product name:";
    cin>>product_name;
    int product_catagory;
    cout<<"Enter the catagory of the product(1-5):";
    cin>>product_catagory;
    int intial_inventory;
    cout<<"Enter the initial inventory:";
    cin>>intial_inventory;
    float product_price;
    cout<<"Enter the price per unit:";
    cin>>product_price;
    int item_sold;
    cout<<"Enter number of items sold:";
    cin>>item_sold;
       
   int new_inventory = intial_inventory - item_sold ;
   float total_sale = item_sold*product_price;
   string inventory_status = (new_inventory < 10 )? "low inventory":"sufficient";

   

   auto Scopy = total_sale;
   decltype(intial_inventory)copyinventory = intial_inventory - item_sold;


float Taxamount = total_sale*TaxRate;
float TaxRateconst = total_sale*TaxRate_const;


if (product_catagory>=1 && product_catagory<=5){
    cout<<"valid catagory";}
     else {
        cout<<"invalid catagory, Enter a number from 1-5";
    }


switch (product_catagory){
    case 1: cout<<"Category 1:Electronics"<<endl;
    break;
    case 2: cout<<"Catagory 2: Groceries"<<endl;
    break;
    case 3: cout<<"Catagory 3: Clothing"<<endl;
    break;
    case 4: cout<<"Catagory 4: Stationery"<<endl;
    break;
    case 5: cout<<"Catagory 5: Miscellaneous"<<endl;
    break;
    default: cout<<"Invalid Category."<<endl;
}
cout<<"\nreceipt:"<<endl;
for(int i = 1;  i <=item_sold; ++i){cout<<"item"<<i<<":$"<<product_price<<endl;}

cout<<"The tax rate from preprocessor constant is:"<< Taxamount <<endl;
cout<<"The tax rate from const varable is:"<< TaxRateconst<<endl;
cout<<"The product name:"<< product_name<<endl;
cout<<"The product catagory choosen is:"<<product_catagory<<endl;
cout<<"The initial inventory is:"<<intial_inventory<<endl;
cout<<"The price per unit is:"<<product_price<<endl;
cout<<"The number of items sold is:"<<item_sold<<endl;
cout<<"New inventory:"<< new_inventory<<endl;
cout<<"Total sale:"<<total_sale<<endl;
cout<<"inventory status:"<< inventory_status<<endl;
cout<<"sales copy:"<<Scopy<<endl;
cout<<"inventory copy:"<<copyinventory<<endl;
return 0;

}