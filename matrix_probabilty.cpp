#include<iostream>

using namespace std;

int isSafe(int m, int n, int x, int y) {
  return (x < m && x >= 0 && y < n && y >=0);
}

double findMatrixProbability(int m, int n, int x, int y, int N) {
  if(!isSafe(m, n, x, y)) return 0.0;
  
  if(n == 0) return 1.0;

  double prob = 0.0;

  prob += findMatrixProbability(m, n, x - 1, y, N - 1) * 0.25;

  prob += findMatrixProbability(m, n, x + 1, y, N - 1) * 0.25;

  prob += findMatrixProbability(m, n, x, y - 1, N - 1) * 0.25;

  prob += findMatrixProbability(m, n, x, y + 1, N - 1) * 0.25;

  return prob;
}

int main() {

  int m = 5, n = 5, x = 1, y = 1, N = 2;
  cout << "probabilty " << findMatrixProbability(m, n, x, y, N);

}