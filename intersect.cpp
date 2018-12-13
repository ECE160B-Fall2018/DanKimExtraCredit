#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int array1[5]= {1,2,3,4,5};
  int array2[3] = {2,4,6};
  vector<int> vector1 (array1, array1+5);
  vector<int> vector2 (array2, array2+3);
  sort(vector1.begin(), vector1.begin()+5);
  sort(vector2.begin(), vector2.begin()+3);
  for (int i = 0; i < vector1.size(); i++){
    for( int j = 0; j < vector2.size(); j++){
      if (vector1[i] == vector2[j]){
        j = vector2.size();
        cout << vector1[i] << endl;
      }
    }     
  }
  return 0;
}
