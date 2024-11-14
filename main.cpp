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
    do{

        int prob = rand() % 100 + 1; 

        if(prob <= 55 ) 
            {
                line.push_back(Car()); 
                Car& lastElement = line.back(); 
                cout<<"Time: "<<i<<" Operation: Joined Lane: ["<<lastElement.getYear()<<" "<<lastElement.getMake()
                <<" ("<<lastElement.getTransponder()<<")]"<<endl;
                cout<<"Queue: "<<endl;
                for(int k = 0; k < line.size(); k++ )
                {
                    line[k].print();
                }
            }
        else
            {
                Car& firstElement = line.front(); 
                cout<<"Time: "<<i<<" Operation: Car Paid: ["<<firstElement.getYear()<<" "<<firstElement.getMake()
                <<" ("<<firstElement.getTransponder()<<")]"<<endl;
                line.pop_front(); 
                    
            }
        i++; 

    } while(!line.empty()); 












    return 0; 

}