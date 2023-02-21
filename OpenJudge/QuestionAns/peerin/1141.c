#include <stdio.h>
#include <string.h>
#define MAX_SIZE 1000
#define OVER -1
#define EXIST -2

int globalLen;

int getarray(int a[]){
  int currentNum;
  int i=0;
  while(1){
    scanf("%d",&currentNum);
    if(currentNum==0) break;
    a[i++]=currentNum;
  }
  globalLen = i;
  return i;
}

int insert(int a[],int key, int vol){
  if(globalLen > vol){
    return OVER;
    }
  int i,eqFlag = 0;
  for(i = 0;i < globalLen;++i){
    if(a[i] == key){
      eqFlag = 1;
    }
  }
  if(eqFlag == 1){
    return EXIST;
  }
  int res = 0;
  for(i = 0;i < globalLen;++i){
    if(key > a[i]){
      res = i + 1;
    }
  }
  int tmp[MAX_SIZE]={0};
  int idx = 0;
  for(i = 0;i < globalLen + 1;++i){
    if(i == res){
      tmp[i] = key;
    }
    else{
      tmp[i] = a[idx++];
    }
}
  memcpy(a,tmp,MAX_SIZE);
  globalLen++;
  return res;
}

int result(int sig){
  switch(sig){
  case OVER:
    printf("The array if full!\n");
    break;
  case EXIST:
    printf("The key is already in this array!\n");
    break;
  default:
    printf("The key is inserted in position %d.\n",sig);
    break;
  }
  return 0;
}

int getkey(int k[]){

  int size;
  scanf("%d",&size);
  int i;
  for(i = 0;i < size;++i){
    scanf("%d",k + i);
  }
  return size;
}


int main()
{
    int array[MAX_SIZE], cases, ca, i, key[MAX_SIZE], size;
    scanf("%d", &cases);
    for(ca = 1; ca <= cases; ca++)
    {
        getarray(array);
        size = getkey(key);
        printf("Case %d:\n", ca);
        for(i = 0; i < size; i++)
            result(insert(array, key[i], MAX_SIZE - 1));
    }
    return 0;
}

/**************************************************************
	Problem: 1141
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

