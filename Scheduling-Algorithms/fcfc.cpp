#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int i=0,n_process,*processes,*waitingTime,*turnAroundTime,averageWaitingTime, averageTurnAroundTime;
    cin>>n_process;

    //Dynamic memory allocation
    processes =  new int[n_process];
    waitingTime =  new int[n_process];
    turnAroundTime = new int[n_process];

    for(;i<n_process;i++){
        cin>>processes[i];
    }

    //Waiting time
    waitingTime[0] = averageWaitingTime  = 0;
    for(i=1;i<n_process;i++){
        waitingTime[i] = waitingTime[i-1] + processes[i-1];
        averageWaitingTime += waitingTime[i];
    }

    //Turnaround time
    turnAroundTime[0] = averageTurnAroundTime = processes[0];
    for(i=1;i<n_process;i++){
        turnAroundTime[i] = turnAroundTime[i-1] + processes[i];
        averageTurnAroundTime += turnAroundTime[i];
    }

    //Display
    cout<<"\nProcess" <<"\t\t\t" <<"Burst Time" <<"\t\t\t" <<"Waiting Time" <<"\t\t\t" <<"Turnaround Time";
    for(i=0; i < n_process; i++){
        cout<<"\nP"<<i <<"\t\t\t" <<processes[i] <<"\t\t\t\t" <<waitingTime[i] <<"\t\t\t\t" <<turnAroundTime[i];
    }

    cout<<"\n\nAverage Waiting Time " <<averageWaitingTime;
    cout<<"\nAverage Turnaround Time " <<averageTurnAroundTime;

    return 0;
}
