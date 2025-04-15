#include <bits/stdc++.h>
using namespace std;


void merge(int *a,int low,int high,int mid){

    int i=low,j=mid+1,k=0,c[high-low+1];

    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            c[k++]=a[i++];
        }
        else{
            c[k++]=a[j++];
        }
    }

    while(i<=mid){
        c[k++]=a[i++];
    }

    while(j<=high){
        c[k++]=a[j++];
    }

    for(i=low;i<=high;i++){
        a[i]=c[i-low];
    }

}

void merge_sort(int *a,int low,int high){
    int mid=(low+high)/2;

    if(low<high){
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);

        merge(a,low,high,mid);
    }
}

int main(){

    int n=5;
    int a[n];

    srand(time(0));
    for(int i=0;i<n;i++){
        a[i]=rand()%10;
    }
    cout<<"Your values are        :";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";
    }
    cout<<endl;

    merge_sort(a,0,n-1);

    cout<<"Merge sorted values are:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<"  ";

    }


    return 0;

}
