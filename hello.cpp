#include<iostream>
using namespace std;
int main()

{
    int n;
    do{
        cout<<"nhap n: ";
        cin>>n;
        if(n<0)
        {
            cout<<"nhap lai n>0! ";
        }
    }while(n<0);
    system("pause");
    return 0;
}
