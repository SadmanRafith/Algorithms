#include<bits/stdc++.h>
using namespace std;

struct Student{
    int id;
    string name;
    double cgpa;
};

class cmp{
public:
    bool operator()(Student &s1, Student &s2){
        return s1.id>s2.id?1:0;
    }

};


int main(){

priority_queue<Student,vector<Student>, cmp> pq;
Student s1 ={100,"Richard",3.5};
Student s2 ={200,"Aaron",3.6};
Student s3 ={300,"Florence",3.4};
pq.push(s1);
pq.push(s2);
pq.push(s3);


Student s = pq.top();

cout<<s.id<<" "<<s.name<<" "<<s.cgpa<<endl;

return 0;
}
