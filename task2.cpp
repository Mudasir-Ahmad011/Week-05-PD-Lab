#include<iostream>
using namespace std;
float PyramidVolume(int length,int width,int height,string unit);
main(){
    int length,width,height;
    string unit;
    float result;
    cout << "enter the length: ";
    cin >> length;
    cout << "enter the width: ";
    cin >> width;
    cout << "Enter the height: ";
    cin >> height;
    cout << "Enter unit: ";
    cin >> unit;
    result = PyramidVolume(length,width,height,unit);
    cout << "Volume of pyramid is: "<<result << " cubic " <<unit<<endl;
}
float PyramidVolume(int length,int width,int height,string unit){
    float volume;
    volume = (length * height * width)/3;
  if(unit == "centimeters"){
    float cubic_centimeter = volume * 1000000; 
    return  cubic_centimeter;
    }if(unit == "kilometers"){
    float cubic_kilometers = volume / 1000000000.0; 
    return cubic_kilometers; 
    }if(unit == "milimeters"){
    float cubic_milimeters = volume * 1000000000;  
    return cubic_milimeters;
    }
    return 0;
}