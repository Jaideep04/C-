#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    int process_id[n], complete_time[n], arrival_time[n], burst_time[n], turn_around_time[n], waiting_time[n], f[n];
    float avgwt = 0, avgta = 0;
    int st = 0, total_processes = 0;

    for (int i = 0; i < n; i++) {
        cout << "Enter process " << (i + 1) << " arrival time: ";
        cin >> arrival_time[i];
        cout << "Enter process " << (i + 1) << " burst time: ";
        cin >> burst_time[i];
        process_id[i] = i + 1;
        f[i] = 0;
    }

    while (true) {
        int c = n, min = 999;
        if (total_processes == n)
            break;

        for (int i = 0; i < n; i++) {
            if ((arrival_time[i] <= st) && (f[i] == 0) && (burst_time[i] < min)) {
                min = burst_time[i];
                c = i;
            }
        }

        if (c == n)
            st++;
        else {
            complete_time[c] = st + burst_time[c];
            st += burst_time[c];
            turn_around_time[c] = complete_time[c] - arrival_time[c];
            waiting_time[c] = turn_around_time[c] - burst_time[c];
            f[c] = 1;
            total_processes++;
        }
    }

    cout << "\npid\tarrival\tburst\tcomplete\tturn\twaiting\n";
    for (int i = 0; i < n; i++) {
        avgwt += waiting_time[i];
        avgta += turn_around_time[i];
        cout << process_id[i] << "\t" << arrival_time[i] << "\t" << burst_time[i] << "\t" << complete_time[i] << "\t" << turn_around_time[i] << "\t" << waiting_time[i] << endl;
    }

    cout << "\naverage tat is " << (float)(avgta / n) << endl;
    cout << "average wt is " << (float)(avgwt / n) << endl;

    return 0;
}
