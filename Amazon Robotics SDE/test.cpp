// Example program
#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
vector<pair<int,int> > Kclosest(int** points, int k){
    cout << "hi";
    vector<pair<int,int> > result(1,pair<int,int>(points[0][0],points[0][1]));
    cout<<result.size();
    return result;
}
int main()
{
  int** pts;
  pts = new int*[2];
  for(int i = 0; i<2; i++)
    pts[i] = new int[2];
  pts[0][0] = 1;
  pts[0][1] = 2;
  pts[1][0] = 3;
  pts[1][1] = 4;

  // std::cout << "hi";
  vector<pair<int,int> > result = Kclosest(pts, 1);
  
  cout << result[0].first;
  return 0;
}