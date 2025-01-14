#include <iostream>
using namespace std;
float add(float a, float b)
{
    int sum = (a + b);
    return sum;
}
float subtract(float a, float b)
{
    float sub = (a - b);
    return sub;
}
float multiply(float a, float b)
{
    int mul = (a * b);
    return mul;
}
float divide(float a, float b)
{
    int div = (a / b);
    return div;
}
float divide0(float c, float d)
{
    return (c / d);
}
float divide1(float d, float e)
{
    return (d / e);
}
int main()
{
    float resultadd, resultmul, resultsub, resultdiv0, resultdiv;
    int answer;
    float a, b;
    float c = (a * 0.1);
    float d{};
    float e{};

    while (true)
    {
        cout << "" << endl;
        cout << "---------------------------------------calculator---------------------------------------------" << endl;
        cout << "enter the number of opration want to performe" << endl;
        cout << "1->add" << endl;
        cout << "2->subtract" << endl;
        cout << "3->multiply" << endl;
        cout << "4->divide" << endl;
       
        cout << "5-> EXIT" << endl;
        cin >> answer;
        switch (answer)
        {
        case 1:
            cout << "enter the first value =";
            cin >> a;
            cout << "enter the second value=";
            cin >> b;
            resultadd = add(a, b);
            cout << "answer=" << resultadd << endl;
            break;
        case 2:
            cout << "enter the first value =";
            cin >> a;
            cout << "enter the second value=";
            cin >> b;
            resultsub = subtract(a, b);
            cout << "answer=" << resultsub << endl;
            break;
        // code
        case 3:
            cout << "enter the first value =";
            cin >> a;
            cout << "enter the second value=";
            cin >> b;
            resultmul = multiply(a, b);
            cout << "answer=" << resultmul << endl;
            break;
        case 4:
            cout << "enter the first value =";
            cin >> a;
            cout << "enter the second value=";
            cin >> b;
            if (a == 0 && b == 0)
            {
                cout << "answer=" << divide0(d, e) << endl;
            }
            else if (b == 0)
            {
                cout << "answer=" << divide0(c, d) << endl;
            }

            else
            {
                resultdiv = divide(a, b);
                cout << "answer=" << resultdiv << endl;
            }
            break;
        case 5:
            cout << "thnks for using me " << endl;
            exit(0);
        default:
            cout << "opps out of line :(" << endl;
            break;
        }
    }

    return 0;
}