


#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[50];  // string mai hamesha size lena pade ga size koi sa bhi ho sakta hai
        int pages;
        float price;
        
    } a ;    // string ko change nhi kar sakte
     
     
     a.name[0]='s';
     a.name[1]='e';
     a.name[2]='c';                // string main char ko single '' main leta hai
     a.name[3]='r';
     a.name[4]='e';
     a.name[5]='t';
     a.pages=500;
     a.price=100.5;
     
     
     
        printf("%d\n",a.pages);
        printf("%f\n",a.price);
        printf("%s\n",a.name);
}