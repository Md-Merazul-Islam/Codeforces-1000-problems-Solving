// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int num=10;
//     int *num_ptr=&num;
//     int **num_ptr_ptr= &num_ptr;
//     cout<<*num_ptr<<endl;;
//     cout<<**num_ptr_ptr;
//     return 0;
// }


// --------> constent value change :

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int rahim=10 ;
//     int* korim= &rahim;
//     *korim= 0;
//     cout<< rahim;
//     return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int *arr= new int[2];
//      arr[0]=10;
//      arr[1]=20;
//      int *arr1=new int [4];
//      arr1[0]=arr[0];
//      arr1[1]=arr[1];
//      arr1[2]=30;
//      arr1[3]=40;
//      delete[]arr;

//      for (int i=0;i<4;i++)
//      {
//         cout<<arr1[i]<<" ";
//      }
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;
void fun1()
{
    int n=230;
    cout<<"I am form fun1"<<endl;
}
void fun2()
{
    int n=30;
    cout<<"I am form fun2"<<endl;
    fun1();
}
int main()
{
    int n=10;
    cout<<"I am form main fun"<<endl;
    fun2();
    return 0;
}