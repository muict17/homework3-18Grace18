#include <stdio.h>

int main() {
  int n,i,c=0;
  scanf("%d",&n);

  char a[n];
  for(i=0;i<n;i++) {
    scanf(" %c",&a[i]);
  }
  for(i=0;i<n;i++) {
    if(a[i]=='(') {
      c++;
    }
    if(a[i]==')') {
      c--;
    }
    if(c<0) {
      break;
    }
  }

  if(c==0) {
    printf("Complete");
  }
  else {
    printf("Incomplete");
  }
  return 0;
}
