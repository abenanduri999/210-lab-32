#include<iostream>
#include<deque>
#include "Car.h"

using namespace std; 

const int CARS = 2;

int main() 
{
    deque<Car> line; 

    cout<<"Initial Queue:"<<endl; 
    for(int i = 0; i < CARS; i++)
    {
        line.push_back(Car());
        line[i].print(); 
    }

    srand(time(0)); 
    int i = 1; 
    /*do{

        int prob = rand() % 100 + 1; 

        if(prob <= 55 ) 
            {

            }
        

    } while(!line.empty()); */












    return 0; 

}