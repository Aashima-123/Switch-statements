#include<iostream>
using namespace std;

string getdayofweek(int daynum){
    string dayname;

    switch (daynum)
    {
    case 0:
        dayname = "sunday";
        break;
    case 1:
        dayname = "monday"; 
        break;
    case 2:
        dayname = "tuesday";
        break;
    case 3:
        dayname = "wednesday";
        break;
    case 4:
        dayname = "thursday";
        break;
    case 5:
        dayname = "friday";
        break;
    case 6:
        dayname = "saturday";
        break;
    
    default:
        dayname = "invalid day number";

        break;
    }

    return dayname;

}

int main(){
    cout << getdayofweek(4);
    
    return 0;
}

// int main() {
//   int day = 2;
//   switch (day) {
//   case 1:
//     cout << "Monday";
//     break;
//   case 2:
//     cout << "Tuesday";
//     break;
//   case 3:
//     cout << "Wednesday";
//     break;
//   case 4:
//     cout << "Thursday";
//     break;
//   case 5:
//     cout << "Friday";
//     break;
//   case 6:
//     cout << "Saturday";
//     break;
//   case 7:
//     cout << "Sunday";
//     break;
//   default:
//     cout << "invalid day";
//   }
//   return 0;
// }
