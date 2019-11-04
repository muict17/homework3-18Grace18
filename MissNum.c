#include <stdio.h>
int miss(int a[],int n) {
  int i,sum1=0,sum2=0;
  sum1=(n+1)*(n+2)/2; 
  for(i=0;i<n;i++) {
    sum2+=a[i];
  }
  return sum1-sum2;
}
int main() {
  int n,i;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
  }
  printf("%d",miss(a,n));
  return 0;
}
