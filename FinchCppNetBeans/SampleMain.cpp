/* 
 * Simple collision avoidance
 * Author: Saxon Knight (knight7@hawaii.edu)
 */


#include <cstdlib>
#include <ctime>
#include <iostream>
#include "./Finch/Finch.h"

using namespace std;

int main(int argc, char** argv) {

    Finch finch;
    
    srand(time(NULL));
    int* ls;
    do{
        int* obs=finch.getObstacleSensors();
        float t3=(rand()%10+1)*100; //Time To Turn = 0.1-1.0 s
        
        if(!obs[0]&&!obs[1]){ //Forward is clear
            finch.setMotors(255,255);
        }else if(!obs[0]&&obs[1]){ //Obstacle on right
            finch.setMotors(-255,255,t3); //Turn left
        }else if(obs[0]&&!obs[1]){ //Obstacle on left
            finch.setMotors(255,-255,t3); //Turn right
        }else if(obs[0]&&obs[1]){ //Obstacle dead ahead
            int lor=rand()%2; //0 or 1 for left or right
            finch.setMotors(255*lor,255*(1-lor),t3);
        }
        
        ls=finch.getLightSensors();
        //cout<<ls[0]<<" "<<ls[1]<<endl;
    }while(ls[0]>50&&ls[1]>50);

    return 0;
}