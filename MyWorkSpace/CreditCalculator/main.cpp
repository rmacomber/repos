#include <iostream>
#include "date.h"
using namespace std;
using namespace date;
using namespace std::chrono;

int main()
{
    int y,m,d;
    cin >> y >> m >> d;
    auto ymd = year(y)/month(m)/day(d);
    auto mdy = month(m)/day(d)/year(y);
    cout << ymd;
    cout << mdy;
    //auto x = 2012_y/1/24;
    //auto y = 2013_y/1/8;
    //auto x = 0;
    //auto y = 0;
    //cout << "Please enter start date: "<< endl;
    //cin >> x;
    //cout << "Please enter end date: "<< endl;
    //cin >> y;
    //cout << x << '\n';
    //cout << y << '\n';
    //cout << "difference = " << (sys_days{y} - sys_days{x}).count() << " days\n";
}
