//Angie Diaz
//CPSC 1021
//Lab 7: Challenge 3 Corporate Sales 
#include <vector>
using namespace std; 
class DivSales {
    private:
        vector<double>sales;
        double divSales;
        static double totalSales; 
    public:
        DivSales();
        DivSales(double quarter1, double quarter2, double quarter3, double quarter4); 
        //takes in sales for each quarter, copies into vector 
        //adds four arugments to divSales and static variable 
        void setSales(double q1, double q2, double q3, double q4);
        double getDivSales();
        static double getCorpSales();







};