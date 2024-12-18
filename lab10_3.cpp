#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<fstream>
using namespace std;

int main () {
    int count = 0;
    float sum = 0;
    float num = 0;

    string textline;
    ifstream source("score.txt");
    while (getline(source,textline)){
        sum += atof(textline.c_str());
        num += pow(atof(textline.c_str()),2);
        count++; 
    }
    cout << "Number of data = "<< count <<"\n";
    cout << setprecision(3);
    cout << "Mean = "<< sum/count <<"\n";
    cout << "Standard deviation = "<< sqrt((num/count)-pow((sum/count),2)) ;
}
//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
