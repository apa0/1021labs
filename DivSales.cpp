
// Name: Angie Diaz
// Date: 3/15/2024
// Class: CPSC 1021
// Lab Name: Lab 7: Challenge 3 - Corporate Sales
// File Name: DivSales.cpp
// Desc: 

#include "DivSales.h"

//initializing static variable 
double DivSales::totalSales=0.0;

//default constructor
DivSales:: DivSales() {
    divSales=0.0;
}
//parameter constructor 
DivSales::DivSales(double quarter1, double quarter2, double quarter3, double quarter4) {
    setSales(quarter1, quarter2, quarter3, quarter4);
}

void DivSales::setSales(double q1, double q2, double q3, double q4) {
    //copies arguments into vector 
    sales.clear();
    sales.push_back(q1);
    sales.push_back(q2);
    sales.push_back(q3);
    sales.push_back(q4);
    double sum=0;
    for (const auto& quarter:sales) {
        sum+=quarter;
    }
    //adds four arguments to divSales
    divSales+=sum;
    //adds four arguments to totalSales 
    totalSales+=sum;

}
double DivSales::getDivSales() {
    return divSales;

}
double DivSales:: getCorpSales() {
    return totalSales;

}