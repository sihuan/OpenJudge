#include<stdio.h>

int main()

{

    int a,b,c,n,i;

    scanf("%d",&n);

    for(i=0;i<n;i++)

    {

        scanf("%d-%d-%d",&a,&b,&c);

        if(a%4==0&&a%100!=0||a%400==0)

        {

            switch(b)

            {case 1:if(c<32)printf("%d\n",c);else printf("error date!\n");break;

            case 2:if(c<30)printf("%d\n",31+c);else printf("error date!\n");break;

            case 3:if(c<32)printf("%d\n",60+c);else printf("error date!\n");break;

            case 4:if(c<31)printf("%d\n",91+c);else printf("error date!\n");break;

            case 5:if(c<32)printf("%d\n",121+c);else printf("error date!\n");break;

            case 6:if(c<31)printf("%d\n",152+c);else printf("error date!\n");break;

            case 7:if(c<32)printf("%d\n",182+c);else printf("error date!\n");break;

            case 8:if(c<32)printf("%d\n",213+c);else printf("error date!\n");break;

            case 9:if(c<31)printf("%d\n",244+c);else printf("error date!\n");break;

            case 10:if(c<32)printf("%d\n",274+c);else printf("error date!\n");break;

            case 11:if(c<31)printf("%d\n",305+c);else printf("error date!\n");break;

            case 12:if(c<32)printf("%d\n",335+c);else printf("error date!\n");break;}

        }

        else

            switch(b)

            {case 1:if(c<32)printf("%d\n",c);else printf("error date!\n");break;

            case 2:if(c<29)printf("%d\n",31+c);else printf("error date!\n");break;

            case 3:if(c<32)printf("%d\n",59+c);else printf("error date!\n");break;

            case 4:if(c<31)printf("%d\n",90+c);else printf("error date!\n");break;

            case 5:if(c<32)printf("%d\n",120+c);else printf("error date!\n");break;

            case 6:if(c<31)printf("%d\n",151+c);else printf("error date!\n");break;

            case 7:if(c<32)printf("%d\n",181+c);else printf("error date!\n");break;

            case 8:if(c<32)printf("%d\n",212+c);else printf("error date!\n");break;

            case 9:if(c<31)printf("%d\n",243+c);else printf("error date!\n");break;

            case 10:if(c<32)printf("%d\n",273+c);else printf("error date!\n");break;

            case 11:if(c<31)printf("%d\n",304+c);else printf("error date!\n");break;

            case 12:if(c<32)printf("%d\n",334+c);else printf("error date!\n");break;}

    }

    return 0;

}

/**************************************************************
	Problem: 1101
	User: 201801020908
	Language: C
	Result: Accepted
	Time:0 ms
	Memory:748 kb
****************************************************************/

