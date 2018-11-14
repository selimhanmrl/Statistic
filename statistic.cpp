#include "statistic.h"

using namespace STATS;
      Statistic::Statistic(){
        arr = new int[50];
        _lenght = 50;
      }

      Statistic::Statistic(const int array[],int lenght){
      int i;
        _lenght = lenght;
        arr = new int[_lenght];
        for (i =0;i<_lenght;i++)
          arr[i]=array[i];
      }

      Statistic::Statistic(Statistic& a){
      int i;
        _lenght = a._lenght;
        a.arr = new int[_lenght];
        for (i=0;i<_lenght;i++)
          arr[i]=a.arr[i];
      }

      Statistic Statistic::operator + (const Statistic& array){

          int i,j,templenght;
          int* temp= new int[_lenght+array._lenght];
          for(i=0; i<_lenght;i++)
            temp[i]=arr[i];// i= _lenght
          for(j=0;j<_lenght+array._lenght;j++)
            temp[i+j] = array.arr[j];
          _lenght = _lenght + array._lenght;
          return Statistic(temp,_lenghts);
      }

      Statistic& Statistic::operator =(const Statistic& array){
          _lenght = array._lenght;
          for(int i=0;i<_lenght;i++)
            array.arr[i]=arr[i];
          delete [] arr;
          return *this;
      }

      double Statistic::average() const{
        int sum = 0;
        for(int i=0;i<_lenght;i++)
          sum += arr[i];
        return sum/_lenght;
      }

      double Statistic::median() const{
          int i,j;
          int temp[_lenght];
          for(i=0;i<_lenght;i++)
            temp[i]=arr[i];
          for(j=0;j<_lenght;j++){
              if(temp[i]>temp[i+1])
                  temp[i]=temp[i+1];
          }
           if(((_lenght/2)%2)==0)
              return (arr[_lenght/2]+arr[_lenght/2+1])/2;
           else
              return arr[_lenght/2+1];
      }

      double Statistic::geoaverage() const{
          int mult = 1 ;
          for(int i=0;i<_lenght;i++)
            mult *=arr[i];
          return sqrt(mult);
      }
