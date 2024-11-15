#include<iostream>
#include<deque>
#include<array>
#include "Car.h"

using namespace std; 

const int CARS = 2; const int TIME_PERIODS = 20;
const int LANES = 4; 

int main() 
{
    deque<Car> lines[LANES]; 

    cout<<"Initial Queue:"<<endl; 
    for(int i = 0; i < LANES; i++) 
    {
        cout<<"\tLane "<<i + 1<<":"<<endl;
        for(int j = 0; j < CARS; j++)
        {
            lines[i].push_back(Car()); 
            cout<<"\t\t";
            lines[i][j].print();
        }
    }

    srand(time(0));

    for(int i = 0; i < TIME_PERIODS; i++)
    {
        int prob = rand() % 100 + 1; 
        for(int j = 0; j < LANES; j++)
        {
            if(prob <= 46)
            { 
                Car& firstElement = lines[j].front();
                cout<<"Time: "<<i + 1<<" Operation: Car Paid: ["<<firstElement.getYear()<<" "<<firstElement.getMake()
                <<" ("<<firstElement.getTransponder()<<")]"<<endl;
                lines[j].pop_front(); 
            }
            if(prob <= 85)
            {
                lines[j].push_back(Car());
                Car& lastElement = lines[j].back(); 
                cout<<"Time: "<<i + 1<<" Operation: Joined Lane: ["<<lastElement.getYear()<<" "<<lastElement.getMake()
                <<" ("<<lastElement.getTransponder()<<")]"<<endl;
            }
            else
            {
                Car& lastElement = lines[j].back();
                
            }
        }
    }
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