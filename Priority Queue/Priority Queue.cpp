#include<bits/stdc++.h>
using namespace std;


int main(){

priority_queue<string,vector<string>> pq;

pq.push("Richard"); // 100
pq.push("Aaron"); // 100 200
pq.push("Florence"); // 10 100 200


//cout<<pq.top();

//pq.pop();

cout<<pq.top();

return 0;
}
