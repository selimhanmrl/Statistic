#include<iostream>
#include"statistic.h"

using namespace Stats;
using namespace std;
int main(){
    int array[10]={1,2,3,4,5,6,6,4,3,32};
    Statistic test(array,10);
    int array2[5]={1,5,2,67,3};
    Statistic test2(array2,5);
    cout<<test.average()<<endl;
    cout<<test.median()<<endl;
    cout<<test.geoaverage()<<endl;
    //After adding another array to first array
    cout<<"After Test + Test2 "<<endl;//(test+test2).arr;
    cout<<(test+test2).average()<<endl;
    cout<<(test+test2).median()<<endl;
    cout<<(test+test2).geoaverage()<<endl;
    return 0;
}
