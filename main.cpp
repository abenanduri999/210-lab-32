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
        
        cout<<"Time "<<i + 1<<":"<<endl;
        for(int j = 0; j < LANES; j++)
        {
            int prob = rand() % 100 + 1; 
            if(lines[j].empty())
            {
                int probemp = rand() % 100 + 1; 
                if(probemp <= 50)
                {
                    lines[j].push_back(Car()); 
                }
            }
            else if(prob <= 46)
            { 
                Car& firstElement = lines[j].front();
                cout<<"Lane: "<<j + 1<<" Operation: Car Paid: ["<<firstElement.getYear()<<" "<<firstElement.getMake()
                <<" ("<<firstElement.getTransponder()<<")]"<<endl;
                lines[j].pop_front(); 
            }
            else if( prob > 46 && prob < 86 )
            {
                lines[j].push_back(Car());
                Car& lastElement = lines[j].back(); 
                cout<<"Lane: "<<j + 1<<" Operation: Joined Lane: ["<<lastElement.getYear()<<" "<<lastElement.getMake()
                <<" ("<<lastElement.getTransponder()<<")]"<<endl;
            }
            else if(prob > 85 && prob < 101) 
            {
                Car& lastElement = lines[j].back();
                lines[j].pop_back();
                int swap = rand() % LANES;
                
                if(swap == j)
                {
                    do{
                        swap = rand() % LANES;
                    }while(swap == j);
                }
                
                lines[swap].push_back(lastElement);
                cout<<"Lane: "<<j + 1<<" Operation: Switched: ["<<lastElement.getYear()<<" "<<lastElement.getMake()
                <<" ("<<lastElement.getTransponder()<<")]"<<endl;
            }    
        }
            
            for(int k = 0; k < LANES; k++)
            {
                cout<<"Lane "<<k + 1<<" Queue:"<<endl; 
                for (int l = 0; l < lines[k].size(); l++)
                {
                    cout<<"\t\t";
                    lines[k][l].print();
                }
                cout<<endl;
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