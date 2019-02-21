#include <iostream>
#include <queue>

using namespace std;

class MovingAverage
{
  private:
  	queue<int> q;
  	double sum;
  	int len;
  public:
	MovingAverage(int size){
		this -> size = size;
		sum = 0;
	}
	double next(int val){
		if(q.size > size){
			sum = sum - q.front();
			q.pop();
		}
		q.push(val);
		sum = sum + val;
		double ave = sum/q.size();
		return ave;
	}
};
