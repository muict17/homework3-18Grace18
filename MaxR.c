#include <stdio.h>
int main() {
  int n,m,i,j;
  scanf("%d %d",&n,&m);

  int a[n][m],sum1=0,sum[n];
  for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<n;i++) {
    for(j=0;j<m;j++) {
      sum1+=a[i][j];
      printf("%d ",a[i][j]);
      }
    printf("'%d'",sum1);
    printf("\n");
    sum[i]=sum1;
    sum1=0;
  }
  int max=sum[0],row=0;
  for(i=0;i<n;i++) {
    if(max<sum[i]) {
      max=sum[i];
      row=i+1;
    }
  }
  printf("Row: %d Sum: %d",row,max);
  return 0;
}
