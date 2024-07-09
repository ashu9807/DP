#include <iostream>
#include<vector>
using namespace std;


int solveUsingRecursion(int n, int k) {
  if(n == 1) {
    return k ;
  }
  if(n == 2) {
    return (k + k*(k-1));
  }

  int ans  = (solveUsingRecursion(n-2,k) + solveUsingRecursion(n-1,k))*(k-1);
  return ans;
}