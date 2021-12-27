#include <iostream>
using namespace std;


void printSum(int arr[][3],int row,int col){
    

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        cout << sum << " ";
    }
    cout<<endl;

}

void printSumCol(int arr[][3],int row,int col){
    

    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }

        cout << sum << " ";
    }
    cout<<endl;

}



void largestRowSum(int arr[][3],int row,int col){
    int maxi=INT32_MIN;
    int num=-1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }

        if(sum>maxi){
            maxi=sum;
            num=i;
        }

    }
    cout<<endl;

    cout<<"Maximum Sum is "<<maxi<<" at row index "<<num<<endl;

    


}

int main()
{

    int arr[3][3];

    cout << "Enter Elements" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    printSum(arr, 3, 3);
    printSumCol(arr, 3, 3);
    largestRowSum(arr, 3, 3);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}