//CSDN
//虚函数run不在派生类里再定义一遍的话就会扣80分（按理说不是会使用基类中的定义吗？难道是因为基类中的三个变量是私有的？有可能，，）
////因为clock里面变量是private，在派生类里面是不能访问的，所以要重新定义一遍private


#include"Clock.h"

class NewClock :public Clock {
	int hour, minute, second;
public:
	NewClock(int h, int m, int s) : Clock(h, m, s) {

		hour = getHour();
		minute = getMinute();
		second = getSecond();
	}
	void showTime() {

		if (hour < 12)
		{
			cout << "Now:" << hour << ":" << minute << ":" << second << "AM" << endl;
		}
		else
		{
			cout << "Now:" << hour - 12 << ":" << minute << ":" << second << "PM" << endl;
		}
	}
	void run() {
		second = second + 1;
		if (second>59)
		{
			second = 0;
			minute += 1;
		}
		if (minute>59)
		{
			minute = 0;
			hour += 1;
		}
		if (hour>23)
		{
			hour = 0;
		}
	}
};
Clock* Clock::createNewClock(int h, int m, int s) {
	return new NewClock(h, m, s);
}
