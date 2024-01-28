
/*
Pass by value :
মেইন ফাংশনের কোনো ভেলু যদি মেইন ফাংশন এর বাহিরে যে ফাংশন টি রয়েছে
সেটা পাঠানো হয়। সেখানে যদি কোনো ভেলুর কোনো পরিবর্তন করা হয় তাহলে
মেইন ফাংশন এর মধ্যে প্রিন্টে বা ভেলুর কোনো কোন পরিবর্তন হবে না ।
*/

#include <stdio.h>
void pass_value(int sum_result)
{
    sum_result= sum_result+10;
}
int main()
{
    int a=40,b=10;
    int sum=a+b;
    pass_value(sum);
    printf("sum result : %d",sum)  ;
    return 0;
}

/*
pass by reference :
মেইন ফাংশনের কোনো ভেলু যদি মেইন ফাংশন এর বাহিরে যে ফাংশন টি রয়েছে
সেটা পাঠানো হয়। সেখানে যদি কোনো ভেলুর কোনো পরিবর্তন করা হয় তাহলে
মেইন ফাংশন এর মধ্যে প্রিন্টে বা ভেলুর কোনো কোন পরিবর্তন হবে ।
*/

#include <stdio.h>
void pass_value(int *a)
{
    *a = *a + 2;
}
int main()
{
    int x, y;
    x = 10;
    y = 20;

    int a = (x + y);

    pass_value(&a);
    printf("sum result : %d", a);
    return 0;
}

