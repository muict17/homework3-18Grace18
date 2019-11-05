#include <stdio.h>
int main() {
  int n,i,j,t,c;
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++) {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++) {
    for(j=0;j<n-1;j++) {
    if(a[j]==a[j+1]) {
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
      }
    }
  }
  for(j=a[0];j<a[n-1];j++) {
    c=0;
    for(i=0;i<n;i++) {
      if(a[i]==j)
      c++;
    }
    if(c==0) {
      printf("%d ",j);
    }
  }
  return 0;
}
