#ifndef SALES_H_
#define SALES_H_

namespace SALES
{
    class Sales
    {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;

    public:
        Sales(double ar[], int n = 0); //默认构造函数;
        Sales();                       //用户自定义构造函数;
        void show_sales() const;
    };
}

#endif
