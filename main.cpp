#include<iostream>
#include<deque>
#include<array>
#include "Car.h"

using namespace std; 

const int CARS = 2;
const int LANES = 4;

int main() 
{
    deque<Car> lines[LANES]; 
    

   /* deque<Car> line; 

    cout<<"Initial Queue:"<<endl; 
    for(int i = 0; i < CARS; i++)
    {
        line.push_back(Car());
        cout<<"\t";
        line[i].print(); 
    }
    cout<<"\n"; 

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
                    cout<<"\t";
                    line[k].print();
                }
                cout<<endl;
            }
        else
            {
                Car& firstElement = line.front(); 
                cout<<"Time: "<<i<<" Operation: Car Paid: ["<<firstElement.getYear()<<" "<<firstElement.getMake()
                <<" ("<<firstElement.getTransponder()<<")]"<<endl;
                line.pop_front(); 
                cout<<"Queue: "<<endl;
                for(int j = 0; j < line.size(); j++ )
                {
                    cout<<"\t";
                    line[j].print();
                }
                cout<<endl;    
            }
        i++; 

    } while(!line.empty()); 


    if(line.empty())
    {
        cout<<"Queue:\n";
        cout<<"\tEmpty"<<endl;
    }
    */








    return 0; 

}