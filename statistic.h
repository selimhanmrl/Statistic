#ifndef STATISTIC_H
#define STATISTIC_H
#include <cmath>

namespace STATS{
      class Statistic{
        public:
            Statistic();
            Statistic(const int array[],int lenght);
            Statistic(Statistic& a);//Copy constructor
            double average() const;
            double mod() const;
            double median() const;
            double geoaverage() const;

            Statistic operator + (const Statistic& arr);
          //Statistic operator *(const Statistic& arr);
            Statistic& operator =(const Statistic& arr);
          //  ostream& operator<<(ostream& output,const Statistic array);
            ~Statistic(){delete[] arr;}//Big three
        private:
            int* arr;   //this array for keeping numbers
            int _lenght; //lenght of array
      };
}
#endif
