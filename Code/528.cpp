#include <iostream>
using namespace std;

//不知道对不对，妹学，瞎写的。
class A{
public:
    int err;
    A(int index){
        err=index;
    }
};
class B{
public:
    int err;
    B(int divisor){
        err=divisor;
    }
};

int main()
{
    int index, dividend, divisor, result;
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    try
    {
        cin >> index >> divisor;
        if( index < 0 || index>9)
            throw A(index);
        if(divisor==0)
            throw B(divisor);
        dividend = array[index];
        result = dividend / divisor;
        cout << result << endl;
    }
    catch(A a){
        cout << a.err << " out of bound" << endl;
    }
    catch(B b)  {
        cout << "divide by "<< b.err << endl;
    }
    return 0;
}