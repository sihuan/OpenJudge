#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 51
#define MAX_SIZE 100

//int get_arr(void *ar, int sz, int (*get)(void*));
// 参数：ar为输入数组的首地址、sz为数组每个单元大小，回调函数get处理具体数据相关的输入操作，其参数为数据存储位置的首地址。
//    返回值：输入了多少个元素。
//int put_arr(void *ar, int sz, int n, int (*put)(void*));
//   参数：ar为输入数组的首地址、sz为数组每个单元大小，n为数组元素个数，回调函数put处理具体数据相关的输出操作，其参数为数据存储位置的首地址。
//    返回值：无意义。
//int sort(void *ar, int sz, int n, int (*cmp)(void *, void*));
//参数：ar为输入数组的首地址、sz为数组每个单元大小，n为数组元素个数，回调函数cmp处理具体数据相关的比较操作，其参数为待比较的两数据存储位置的首地址。
//    返回值：无意义。
//    int类型：输入get_int()、输出put_int()、比较int_cmp()
//    double类型：输入get_dbl()、输出put_dbl()、比较dbl_cmp()
//    字符数组类型：输入get_str()、输出put_str()、比较str_cmp()
//    日期类型：输入get_dte()、输出put_dte()、比较dte_cmp()

typedef struct date{
  int month;
  int day;
  int year;
} date;

int int_cmp(void *n1, void *n2){
  return -(*(int *)n1 - *(int *)n2);
}

int dbl_cmp(void *n1, void *n2){
  double res = *((double *)n1) - *((double *)n2);
  if(res > 0)
    return 1;
  if(res == 0.0)
    return 0;
  if(res < 0)
    return -1;
}

int str_cmp(void *n1, void *n2){
  int len1 = strlen((char *)n1);
  int len2 = strlen((char *)n2);
  if(len1 == len2)
    return strcmp((char *)n1, (char *)n2);
  else
    return len1 - len2;
}

int dte_cmp(void *n1, void *n2){
  if(((date *)n1)->year == ((date *)n2)->year){
    if(((date *)n1)->month == ((date *)n2)->month){
      if(((date *)n1)->day == ((date *)n2)->day){
	return 0;
      }
      return ((date *)n1)->day - ((date *)n2)->day;
    }
    return ((date *)n1)->month - ((date *)n2)->month;
  }
  return ((date *)n1)->year - ((date *)n2)->year;
}

void swap(void *p1, void *p2, int sz){
  void *tmp = malloc(sizeof(char) * sz);
  memcpy(tmp, p1, sizeof(char) * sz);
  memcpy(p1, p2, sizeof(char) * sz);
  memcpy(p2, tmp, sizeof(char) * sz);
  free(tmp);
}

int sort(void *ar, int sz, int n, int (*cmp)(void *, void*)){
  for(int i = 0;i < n - 1;++i){
    for(int j = i + 1;j < n;++j){
      if(cmp((char *)ar + i * sz,(char *)ar + j * sz) > 0){
	swap((char *)ar + i *sz,(char *)ar + j * sz,sz);
      }
    }
  }
  return 0;
}

int put_int(void *p){
  return printf("%d",*(int *)p);
}

int put_dbl(void *p){
  return printf("%.1lf",*(double *)p);
}

int put_str(void *p){
  return printf("%s",(char *)p);
}

int put_dte(void *p){
  // 10/10/2000
  return printf("%04d-%02d-%02d",((date *)p)->year,((date *)p)->month,((date *)p)->day);
}


int put_arr(void *ar, int sz, int n, int (*put)(void*)){
  for(int i = 0;i < n;++i){
    if(i == 0)
      put((void *)((char *)ar + i * sz));
    else{
      printf(" ");
      put((void *)((char *)ar + i * sz));
    }
  }
  printf("\n");
  return 0;
}
int get_int(void *ar){
  return scanf("%d", (int *)ar);
}

int get_dbl(void *ar){
  return scanf("%lf",(double *)ar);
}

int get_str(void *ar){
  return scanf("%s",(char *)ar);
}

int get_dte(void *address){
  //mm-dd-yyyy
  // address = (date *)address;
  return  scanf("%02d/%02d/%04d",&((date *)address)->month,&((date *)address)->day,&((date *)address)->year);
}

int get_arr(void *ar,int sz,int (*get)(void*)){
  int n;
  scanf("%d",&n);
  for(int i = 0;i < n;++i){
    get((void *)((char *)ar + i * sz));
  }
 return n;
}


int main()
{
    int n;
    int int_arr[MAX_SIZE];
    double dbl_arr[MAX_SIZE];
    struct date dte_arr[MAX_SIZE];
    char str_arr[MAX_SIZE][MAX_LEN];

    n = get_arr(int_arr, sizeof(int), get_int);
    sort(int_arr, sizeof(int), n, int_cmp);
    put_arr(int_arr, sizeof(int), n, put_int);

    n = get_arr(dbl_arr, sizeof(double), get_dbl);
    sort(dbl_arr, sizeof(double), n, dbl_cmp);
    put_arr(dbl_arr, sizeof(double), n, put_dbl);

    n = get_arr(str_arr, sizeof(char) * MAX_LEN, get_str);
    sort(str_arr, sizeof(char) * MAX_LEN, n, str_cmp);
    put_arr(str_arr, sizeof(char) * MAX_LEN, n, put_str);

    n = get_arr(dte_arr, sizeof(struct date), get_dte);
    sort(dte_arr, sizeof(struct date), n, dte_cmp);
    put_arr(dte_arr, sizeof(struct date), n, put_dte);

    return 0;
}

/**************************************************************
	Problem: 2611
	User: 202211070518
	Language: C
	Result: Accepted
	Time:4 ms
	Memory:748 kb
****************************************************************/

