#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// 作业3.2
// int main ()
// {
//     // int g,s,b;
//     // int number;
//     // int new;
//     // printf ("please input number with three figures:");
//     // scanf ("%d",&number);
//     // printf("number is %d\n",number);
//     // if (number < 0)
//     //     number = -number;
//     // b = number / 100;
//     // s = (number / 10) % 10;
//     // g = number % 10;
//     // new = g * 100 + s * 10 + b;
//     // printf ("new number is %d\n",new);
//     return 0;
// }


// int main() 
// {
//     int age;
//     char grade;
//     // 测试1：不加空格
//     printf("测试1——不加空格：\n");
//     printf("输入年龄：");
//     scanf("%d", &age);
//     while (getchar() != '\n');  // 清空缓冲区残留换行符
//     printf("输入等级：");
//     scanf("%c", &grade);
//     printf("age=%d, grade=()'%c'(ASCII=%d)\n\n", age, grade, grade);

//     getchar(); // 吃上一轮残留

//     // 测试2：加空格
//     printf("测试2——加空格：\n");
//     printf("输入年龄：");
//     scanf("%d", &age);
//     printf("输入等级：");
//     scanf(" %c", &grade);  // 👈 加个空格试试
//     printf("age=%d, grade='%c'(ASCII=%d)\n", age, grade, grade);

//     return 0;
// }


    // 判别二次根式
// #define eps 1e-6
// int main ()
// {
//     float a,b,c,p,q,dt;
//     printf("please input the number of 'a','b','c'\n ");
//     scanf ("%f%f%f",&a,&b,&c);
//     if(fabs(a)<=eps)//判断是否为2次方程
//     {
//         printf("it's not a quadratic equation\n");
//         exit(0);
//     }
//     else
//     {
//         dt = b*b - 4*a*c;
//         p = -(b) / (2*a);
//         q = sqrt(fabs(dt)) / (2*a);
//         if(fabs(dt)<=eps)//判别德尔塔为0 
//         {
//             printf("x1=x2=%.2f\n",p);
//         }
//         else if(dt>eps)
//         {
//             printf("x1=%.2f, x2=%.2f\n",p+q,p-q);
//         }
//         else
//         {
//             printf("x1=%.2f+%.2fi\n",p,q);
//             printf("x2=%.2f-%.2fi\n",p,q);
//         }
//     }

//     return 0;
// }


// // 简单四则运算的计算器
// #define esp 1e-6 
// int main() 
// {
//     float a, b;
//     char op;
//     printf("please enter a character of operator (+, -, *, /): ");
//     scanf(" %c", &op);
//     getchar();
//     printf("please enter two numbers:a=,b= ");
//     scanf("%f%*c%f", &a,&b);
//     switch(op)
//     {
//         case '+':
//             printf("%.2f + %.2f = %.2f\n", a, b, a + b);
//             break;
//         case '-':
//             printf("%.2f-%.2f=%.2f\n",a,b,a-b);
//             break;;
//         case '*':
//             printf("%.2f*%.2f=%.2f\n",a,b,a*b);
//             break;
//         case  '/':
//         if(fabs(b)<=esp)//除零错误 
//         {
//             printf("error! division by zero!");
//             break;
//         }
//         else 
//         {
//             printf("%.2f/%.2f=%.2f",a,b,a/b);
//             break;
//         }
//         default :
//         printf("please input correct character!");
//         break;
//     }
    
//     return 0;

// }



// // 判别三角形类型
// #define eps 1e-1
// int main()
// {
//     float a,b,c;
//     int flag=1;
//     printf("please input numbers with proper precision\n ");
//     printf("please input three distance of triangle a: b: c:");
//     scanf("%f%*c%f%*c%f",&a,&b,&c);
//     printf("a=%.4f,b=%.4f,c=%.4f\n",a,b,c);  //分别打印出用户输入的三个数
//     if (a+b>c&&a+c>b&&b+c>a)  //判别是否为三角形
//     {
//         if(fabs(a*a+b*b-c*c)<=eps||fabs(a*a+c*c-b*b)<=eps||fabs(b*b+c*c-a*a)<=eps)//判别直角三角形
//         {
//             flag =0;
//             printf("it's a right triangle ");
//         }
//         if(fabs(a-b)<=eps||fabs(b-c)<=eps||fabs(a-c)<=eps)//判别等腰三角形
//         {
//             flag=0;
//             if(a==b&&b==c&&a==c)//等边三角形包含在等腰三角形
//             {
//                 printf (" it's a equilateral triangle");
//             }
//             else
//             {
//                 printf (" it's a isosceles triangle ");
//             }
//         }
//         if ((fabs(a*a+b*b-c*c)<=eps||fabs(a*a+c*c-b*b)<=eps||fabs(b*b+c*c-a*a)<=eps)&&(fabs(a-b)<=eps||fabs(b-c)<=eps||fabs(a-c)<=eps))//判别等腰直角三角形
//         {
//             flag =0;
//             printf(" it's a isosceles right triangle ");
//         }
//         if (flag)
//         {
//             printf(" it's a normal triangle ");
//         }
//     }
//     else
//     {
//         printf("it's not a triangle");
//     }


//     return 0;  
// }


//计算体重指数   hm5.12
// #define eps 1e-2
// int main()
// {
//     float t,w,h;//定义变量，t为体重指数，h为身高m，w为体重kg t=w/h^2 
//     printf("please enter your weight(kg) and height(m)");
//     scanf("%f%*[^0-9]%f",&w,&h);
//     printf("weight=%.2fkg,height=%.2f m\n",w,h); 
//     t=w/(h*h);
//     if(fabs(h-0)<=eps)
//     {
//         printf("please enter proper height");
//         exit(0);
//     }
//     else if (t-18<=eps)
//     {
//         printf("体重指数t=%.2f,偏低\n",t);
//     }
//     else if ((t-18)>eps&&(t-25)<=eps)
//     {
//         printf("体重指数t=%.2f,正常\n",t);
//     }
//     else if ((t-25)>eps&&(t-27)<=eps)
//     {
//         printf("体重指数t=%.2f,超重\n",t);
//     }
//     else if((t-27)>=eps)
//     {
//    }     printf("体重指数t=%.2f,肥胖\n",t);
//     }

//     return 0;
// }


// 用do-while循环来写阶乘计算
// int main()
// {
//     int i=1;
//     int n;
//     long int p =1;
//     printf("please enter the number of n:");
//     scanf("%d",&n);
//     do{
//         p=p*i;
//         i++;   
//     }while(i<=n);
//     printf("%d!=%ld\n",n,p);
//     return 0;
// }


// 用d0-while循环实现多次猜数游戏
#include <time.h>
// int main()
// {
//     int guess,image,count,ret=0;
//     char reply;
//     srand(time(NULL));
//     do{
//         count =0;
//         image=rand()%100+1;//规定随机数范围是1-100
//         do{
//             printf( "please enter the number 'guess:'");
//             ret=scanf("%d",&guess);
//             while(ret !=1)
//                 {
//                     while(getchar()!='\n');  // 清空非法输入
//                     printf("invalid input!\n");
//                     printf( "please enter the number 'guess:'");
//                     ret=scanf("%d",&guess);
//                 } // 非法输入就一直重试
//             count++;
//             if(image>guess)
//             {
//                 printf("number is too small\n");
//                 printf("count is %d \n",count);
//             }
//             else if (image <guess)
//             {
//                 printf("number is too big\n ");
//                 printf("count is %d \n",count);
//             }
//             else 
//             {
//                 printf(" sucess,image is %d \n",guess);
//             }
//         }while(guess!= image  && count<=10);
//         printf("do you want to try again,let'enter :'Y'or 'y' ");
//         scanf(" %c",&reply);
//     }while(reply=='Y'||reply =='y');
//     return 0;
// }


//外层和内层都改成while版本
// int main()
// {
//     int guess, image, count, ret = 0;
//     char reply;
//     srand(time(NULL));
//     reply = 'Y';  // 哨兵值，保证第一次能进外层循环
//     while (reply == 'Y' || reply == 'y')
//     {
//         image = rand() % 100 + 1;
//         guess = 0;           // 哨兵值：保证能进内层循环（image范围1~100）
//         count = 0;
//         while (guess != image && count <= 10)
//         {
//             printf("please enter the number 'guess':");
//             ret = scanf("%d", &guess);
//             while (ret != 1)
//             {
//                 while (getchar() != '\n');
//                 printf("invalid input!\n");
//                 printf("please enter the number 'guess':");
//                 ret = scanf("%d", &guess);
//             }
//             count++;
//             if (image > guess)
//             {
//                 printf("number is too small\n");
//                 printf("count is %d\n", count);
//             }
//             else if (image < guess)
//             {
//                 printf("number is too big\n");
//                 printf("count is %d\n", count);
//             }
//             else
//             {
//                 printf("success, image is %d\n", guess);
//             }
//         }
//         printf("do you want to try again, enter 'Y' or 'y':\n if not enter 'N'or'n' ");
//         scanf(" %c", &reply);
//     }
//     return 0;
// }

// 课本例6.13 用while循环改for循环
// 读入5个正整数，并显示，如果数据为负程序终止
// int main()
// {
//     int i=1 ,n;
//     while(i<=5)
//     {
//         i++;
//         printf("please input n :");
//         scanf("%d",&n);
//         if(n<0) 
//         {
//             continue;
//         }
//         printf("n=%d\n",n);
//     }
//         printf("program is over \n");
//     return 0;


// 用数组统计0-9以内数字的个数
// int main(void)   
// {
//     const int number = 10;
//     int arr[number];
//     int x;
//     int count =0;
//     for(int i=0; i<number; i++)//初始化数组内所有元素
//     {
//         arr[i]=0;
//     }
//     printf("请输入x的值(0-9):\n");
//     scanf("%d",&x);
//     while(x!=-1)  //-1时结束输入
//     {
//         if(x>=0 && x<=9)
//         {
//             arr[x]++;
//         }
//         scanf("%d",&x);
//     }
//     for(int i=0; i<number; i++)//遍历数组内元素，并输出
//     {
//         printf("%d:有%d个\n",i,arr[i]);
//     }

    
//     return 0;
// }




// 用已知素数得出素数表
// int JudgePrime (int x, int PrimeTable[], int NumberofPrime);
// int main(void)
// {
//     int n;
//     printf("请输入你想查找多少以内的素数 n:\n");
//     scanf("%d",&n);
//     int prime[n];
//     prime[0]=2;//已知素数表内第一个为2
//     int number=1;//已知素数个数
//     int i=3;
//     //通过判断素数函数，将已判断的素数传到素数表（数组）内，更新已知素数个数
//     while(i<=n)
//     {    
//         if(JudgePrime(i, prime, number ))
//         {
//             prime[number]=i;
//             number++;
//         }
//         i++;
//     }
//     printf("1~%d内的素数表为:",n);
//     for(i=0; i<number; i++)
//     {
//         printf("%d\t",prime[i]);
//     }

//     return 0;
// }
// //判断素数函数
// //参数分别为： 判断是否为素数的变量X，素数表(数组)，已知素数个数
// int JudgePrime (int x, int PrimeTable[], int NumberofPrime)
// {
//     int i=0;
//     int sign=1;
//     for(i=0; i<NumberofPrime; i++)
//     {
//         if(x%PrimeTable[i]==0)
//         {
//             sign=0;   //标志为0代表不为素数
//             break;
//         }
//     }
//     return sign;
// }





//学生成绩和学号排序(选择法)
// void Print(long ID[],int score[],int x);
// int ReadScore(long ID[], int score[]);
// void SortScore(int score[], long ID[], int x);
// int main(void)
// {
//     const int N=40; //学生总人数
//     int n;//键入学生人数
//     int StudentScore[N];
//     long StudentId[N];
//     printf("输入学号或成绩为负值停止键入\n");
//     printf("请输入学生学号，成绩：\n");
//     n=ReadScore(StudentId, StudentScore);
//     printf("实际学生人数为%d\n",n);
//     SortScore(StudentScore, StudentId, n);
//     Print(StudentId,StudentScore,n);
//     return 0;
// }

// //函数功能：按学生成绩高低顺序输出，学生学号及对应成绩
// void Print(long ID[],int score[],int x)
// {
//     int i;
//     for(i=0; i<x;i++)
//     {
//         printf ("学号：%10ld,学生成绩：%3d\n",ID[i],score[i]);
//     }
// }

// //函数功能：读入键入的学生成绩，学号,返回实际键入学生人数
// int ReadScore(long ID[], int score[])
// {
//     int i=-1;
//     do
//     {
//         i++;
//         scanf("%ld %d", &ID[i], &score[i]);
//     }while(ID[i]>0 || score[i]>=0);
//     return i;
// }

//while 写法
// int ReadScore(long ID[], int score[])
// {
//     int i=0;
//     scanf("%ld %d",ID,score);
// while(ID[i]>0 && score[i]>=0)
//     {
//         i++;
//         scanf("%ld %d",&ID[i],&score[i]);
//     }
//     return i;
// }

//函数功能：将键入的学生学号和成绩一起，按学生成绩的高低排序
// void SortScore(int score[], long ID[], int x)
// {
//     int i,j,k;
//     int temp1;
//     long temp2;
//     for(i=0; i<x-1; i++)
//     {
//         k=i;     //假设i的位置是最大的
//         for(j=i+1; j<x; j++)
//         {
//             if(score[j]>score[k])
//             {
//                 k=j;
//             }
//         }

//         if (k!=i)    //确保k的值为最大，如果不是才进行交换
//         {
//             {
//                 temp1=score[i];
//                 score[i]=score[k];
//                 score[k]=temp1;
//             }
//             {
//                 temp2=ID[i];
//                 ID[i]=ID[k];
//                 ID[k]=temp2;
//             }
//         }
//     }
// }




// //线性法查找学生成绩
// int ReadScore(long id[], int score[]);
// int SearchScore(long id[], int x, long number);
// int main(void)
// {
//     const int N=40; //学生总人数
//     int n;//键入学生人数
//     int flag;
//     long number;//要查找的学生学号
//     int StudentScore[N];
//     long StudentId[N];
//     printf("输入学号或成绩为负值停止键入\n");
//     printf("请输入学生学号，成绩：\n");
//     n=ReadScore(StudentId, StudentScore);
//     printf("输入待查学生学号");
//     scanf("%ld",&number);
//     flag=SearchScore(StudentId,n,number);//标志变量，接收要查找学生学号的对应下标
//     if(flag==-1)
//     {
//         printf("没有该学号\n");
//     }
//     else
//     {
//         printf("学号为%ld,分数为 %d",number,StudentScore[flag]);
//     }

//     return 0;
// }

// // //函数功能：读入键入的学生成绩，学号,返回实际键入学生人数
// int ReadScore(long id[], int score[])
// {
//     int i=-1;
//     do
//     {
//         i++;
//         scanf("%ld %d", &id[i], &score[i]);
//     }while(id[i]>0 && score[i]>=0);
//     return i;
// }

// //函数功能：线性法查找学生学号对应的成绩
// int SearchScore(long id[], int x, long number)
// {
//     int i;
//     for(i=0; i<x; i++)
//     {
//         if(id[i]==number)//在已输入的学号表里查找，找到则返回对应下标
//         {
//             return i;
//         }
//     }
//     return -1;//如果循环结束没找到学号则返回-1
// }



// //折半查找
// int HalfSearch(long id[], long number, int x)
// {
//     int low=0;
//     int high=x-1;
    
//     while(high>=low)
//     {
//         int mid =low +(high-low)/2;
//         if(number>id[mid])
//         {
//             low=mid+1;
//         }
//         else if (number<id[mid])
//         {
//             high=mid-1;
//         }
//         else
//         {
//             return mid;
//         }
//     }
//     return -1;
// }

// //折半查找递归法
// int HSearch(long id[], long number, int low, int high)
// {
//     int mid=low +(high-low)/2;
//     if(low>high)
//     {
//         return -1;
//     }
//     if(number>id[mid])
//     {
//         return HSearch(id, number, mid+1, high);
//     }
//     else if(number<id[mid])
//     {
//         return HSearch(id, number, low, mid-1);
//     }
//         return mid;
// }




//二维数组计算学生总分和平均分，以及每门课程的平均分
int ReadScore( int studentscore[][3],long studentid[]);
int Search(long studentid[],int x,int student);
void OutputScore(int studentscore[][3],int sign);
int main(void)
{
    const int COURSE =3;//课程为3门
    const int STUDENTS = 40;
    int StudentScore[STUDENTS][COURSE];
    long StudentId[STUDENTS];
    float SumScore[STUDENTS];
    int Student;//待查找的学生学号
    int Sign;//查找到学生学号所在下标
    float Avre;
    int Sum;
    int N;
    N=ReadScore(StudentScore,StudentId);
    printf("实际学生人数为%d\n",N);
    do
    {
        printf("请输入要查找学生的学号:");
        scanf("%ld",&Student);
        Sign=Search(StudentId,N,Student);
        if (Sign >=0)
        {
            printf("已查找到该学生\n");
            OutputScore(StudentScore,Sign);
        }
        else 
        {
            printf("未查找到该学生\n");
        }
    }while(Student>=0);
    
    return 0;
}

//函数功能:读入键入学生成绩，返回学生实际人数
int ReadScore( int studentscore[][3],long studentid[])
{
    int i=-1;
    do
    {
        i++;
        printf("请输入学生学号:\n");
        scanf("%ld",&studentid[i]);
        printf("请分别输入学生成绩: MT: EN: PH:\n");
        scanf("%d%d%d",&studentscore[i][0],&studentscore[i][1],&studentscore[i][2]);
    }while(studentid[i]>0 && studentscore[i][0]>=0 && studentscore[i][1]>=0 && studentscore[i][2]>=0);
    return i;
}

//函数功能：查找学生学号，返回学生学号所在下标
int Search(long studentid[],int x,int student)
{
    for(int i=0; i<x; i++)
    {
        if(studentid[i]==student)
        {
            return i;//找到返回下标
        }
    }
    return -1;//没找到
}

//函数功能:输出查找学生成绩
void OutputScore(int studentscore[][3],int sign)
{
    printf("学生成绩为\n MT:%4d EN:%4d PH:%4d\n",studentscore[sign][0],studentscore[sign][1],studentscore[sign][2]);
}

//函数功能:计算并输出学生总分，平均分
void  ScoreforStu(int studentscore[][3], int x,long studentid[])
{
    int sumforstu=0;//学生总分
    float averforstu =0;//学生平均分
    for(int i=0; i<x; i++)
    {
        for(int j=0;j<3;j++)
        {
            sumforstu=sumforstu + studentscore[i][j];
        }
        averforstu=sumforstu/3.0;
        printf("学号:%ld, 总分:%4d\n, 平均分:%.1f\n",studentid[i],sumforstu,averforstu);
    }

}

//函数功能:计算并输出每门课程总分，平均分
void ScoreforCour(int studentscore[][3],int x)
{
    int sumforb 

}