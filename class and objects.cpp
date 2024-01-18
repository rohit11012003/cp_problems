#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
class Student{
    public:
    int  v[5];
    void input()
    {
    	for(int i=0;i<5;i++)
    	{
    	 cin>>v[i];
		}
	}
	void output()
	{
		for(int i=0;i<5;i++)
		{
			cout<<v[i]<<endl;
		}
	}
	int calculateTotalScore()
	{
		int total=0;
		for(int i=0;i<5;i++)
		{
			total=total+v[i];
		}
		return total;
	}
    
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    cout<<"hello"<<endl;
      s[0].output();

    // determine how many students scored higher than kristen
//    int count = 0; 
//    for(int i = 1; i < n; i++){
//        int total = s[i].calculateTotalScore();
//        if(total > kristen_score){
//            count++;
//        }
//    }
//
//    // print result
//    cout << count;
//    
//    return 0;
}

