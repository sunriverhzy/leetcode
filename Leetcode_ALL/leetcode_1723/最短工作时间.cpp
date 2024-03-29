#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <set>
#include <functional>

using namespace std;

bool backtrack(vector<int> & jobs, vector<int> &workloads, int idx, int limit){
    if( idx >= jobs.size()) return true;

    int cur = jobs[idx];
    for(auto& workload: workloads){
        if(workload + cur < limit){
            workload += cur;
            if(backtrack(jobs, workloads, idx + 1, limit)){
                return true;
            }
            workload -= cur;  
            if(workload == 0 || workload + cur == limit){
                break;
            }
        }
    }
    return false;
}

bool check(vector<int> &jobs, int k, int limit){
    vector<int> workloads(k , 0);
    return backtrack(jobs, workloads, 0, limit);
}

int minimumTimeRequired(vector<int>& jobs, int k) {
    sort(jobs.begin(), jobs.end(), greater<int>());
    int l = jobs[0], r = accumulate(jobs.begin(), jobs.end(), 0);
    while(l < r){
        int mid = l + r >> 1;
        if(check(jobs, k, mid))
            r = mid;
        else 
            l = mid + 1;
    }

    return l;
}


int main(){

}