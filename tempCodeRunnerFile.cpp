#include<iostream>
using namespace std;
 

void findWT(int p[], int n, 
            int bt[], int wt[], int q) 
{
    
    int rem_bt[n];
    for (int i = 0 ; i < n ; i++)
        rem_bt[i] = bt[i];
 
    int t = 0; 
 
    
    while (1)
    {
        bool done = true;
 
        
        for (int i = 0 ; i < n; i++)
        {
      
            if (rem_bt[i] > 0)
            {
                done = false; 
 
                if (rem_bt[i] > q)
                {
    
                    t += q;
 
       
                    rem_bt[i] -= q;
                }
 
       
                else
                {
        
                    t = t + rem_bt[i];
 
      
                    wt[i] = t - bt[i];
 
  
                    rem_bt[i] = 0;
                }
            }
        }
 
 
        if (done == true)
        break;
    }
}
 

void findTAT(int p[], int n,
                        int bt[], int wt[], int tat[])
{
    for (int i = 0; i < n ; i++)
        tat[i] = bt[i] + wt[i];
}
 

void findAT(int p[], int n, int bt[], int q)
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
 
    
    findWT(p, n, bt, wt, q);
 
    
    findTAT(p, n, bt, wt, tat);
 
    
    cout << "Processes "<< " Burst Time "
        << " Waiting Time " << " Turn Around Time\n";
 
    
    for (int i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << i+1 << "\t\t" << bt[i] <<"\t "
            << wt[i] <<"\t\t " << tat[i] <<endl;
    }
 
    cout << "Average Waiting Time = "
        << (float)total_wt / (float)n;
    cout << "\nAverage Turn Around Time = "
        << (float)total_tat / (float)n;
}

int main()
{
    
    int p[] = { 1, 2, 3};
    int n = sizeof p / sizeof p[0];
 
   
    int burst_time[] = {24, 3, 3};
 
   
    int q = 4;
    findAT(p, n, burst_time, q);
    return 0;
} 