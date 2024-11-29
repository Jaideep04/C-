#include <iostream>
using namespace std;

// Method to find the waiting time for all processes
void findWaitingTime(int processes[], int n, int bt[], int wt[], int quantum, int at[]) {
    // Make a copy of burst times bt[] to store remaining burst times
    int rem_bt[n];
    for (int i = 0; i < n; i++)
        rem_bt[i] = bt[i];

    int t = 0; // Current time
    bool done = false;

    while (!done) {
        done = true; // Assume all processes are done

        // Traverse all processes one by one repeatedly
        for (int i = 0; i < n; i++) {
            // If the process has arrived and its burst time is greater than 0
            if (at[i] <= t && rem_bt[i] > 0) {
                done = false; // There is a pending process

                // Process the current process for the quantum time or its remaining burst time, whichever is smaller
                if (rem_bt[i] > quantum) {
                    t += quantum;
                    rem_bt[i] -= quantum;
                } else {
                    t += rem_bt[i];
                    wt[i] = t - bt[i] - at[i]; // Waiting time is current time minus burst time minus arrival time
                    rem_bt[i] = 0;
                }
            }
        }
    }
}

// Method to calculate turnaround time
void findTurnAroundTime(int processes[], int n, int bt[], int wt[], int tat[]) {
    // calculating turnaround time by adding bt[i] + wt[i]
    for (int i = 0; i < n; i++)
        tat[i] = bt[i] + wt[i];
}

// Method to calculate average time
void findavgTime(int processes[], int n, int bt[], int quantum, int at[]) {
    int wt[n], tat[n];
    int total_wt = 0, total_tat = 0;

    // Function to find waiting time of all processes
    findWaitingTime(processes, n, bt, wt, quantum, at);

    // Function to find turn around time for all processes
    findTurnAroundTime(processes, n, bt, wt, tat);

    // Display processes along with all details
    cout << "PN " << " B " << " WT " << " TAT\n";

    // Calculate total waiting time and total turn around time
    for (int i = 0; i < n; i++) {
        total_wt += wt[i];
        total_tat += tat[i];
        cout << " " << (i + 1) << "\t\t" << bt[i] << "\t " << wt[i] << "\t\t " << tat[i] << endl;
    }

    cout << "Average waiting time = " << (float)total_wt / (float)n << endl;
    cout << "Average turn around time = " << (float)total_tat / (float)n << endl;
}

// Driver Method
int main() {
    // process id's
    int processes[] = {1, 2, 3, 4, 5};
    int n = sizeof(processes) / sizeof(processes[0]);

    // Burst time of all processes
    int burst_time[] = {5,3,1,2,3};

    // Arrival time of all processes
    int arrival_time[] = {0,1,2,3,4};

    // Time quantum
    int quantum = 2;

    findavgTime(processes, n, burst_time, quantum, arrival_time);

    return 0;
}
