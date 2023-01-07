#include<iostream>
using namespace std;
float taxcalculator(char type,float price);
main(){
    int item_price;
    float total;
    char vehcile_code;
    cout << "Enter vehicle code: ";
    cin >> vehcile_code;
    cout << "Enter item price: ";
    cin >> item_price;
total = taxcalculator(vehcile_code,item_price);
cout << "The final price on a vehcile of type "<< vehcile_code <<" after adding the tax is "<<total;
}
float taxcalculator(char type,float price)
{
    float tax_amount,final_price;
    if(type == 'M'){
      tax_amount = (price * 6)/100;
    }if(type == 'E'){
        tax_amount = (price*8)/100;
    }if(type == 'S'){
        tax_amount = (price * 10)/100;
    }if(type == 'V'){
        tax_amount = (price*12)/100;
    }if(type == 'T'){
        tax_amount = (price * 15)/100;
    }
    final_price = price + tax_amount;
    return final_price;
}