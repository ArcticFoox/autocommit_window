//13335 queue
#include<iostream>
#include<queue>

using namespace std;

int arr[1001];
int n, w, l;

int main(){
    
	cin >> n >> w >> l;

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	queue<int> q;
	
    int time = 0, total = 0;
	
    for(int i = 0; i < n; i++){
		while(true){
			if(q.size() == w){
				total -= q.front();
				q.pop();
			}

			if(total + arr[i] <= l) break;
			
            q.push(0);
			time++;
		}
		q.push(arr[i]);
		total += arr[i];
		time++;
	}
	
    cout << time + w << "\n";
    return 0;
}