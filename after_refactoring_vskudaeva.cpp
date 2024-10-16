#include <cmath>
#include <iostream>

int main(){
    int day;
    std::cout<<"введите дату дня: "<<std::endl;
    std::cin>>day;
    int month;
    std::cout<<"введите число месяца: "<<std::endl;
    std::cin>>month;
    int year;
    std::cout<<"введите год: "<<std::endl;
    std::cin>>year;
    int yearNew=year%100;
    int centure=year/100;
    month=(month+9)%12+1;
    int dayWeek=(day+((13*month-1)/5)+yearNew+(yearNew/4)+(centure/4)-2*centure)%7;
    switch(dayWeek){
        case 0:
            std::cout<<"воскресенье"<<std::endl;
            break;
        case 1:
            std::cout<<"понедельник"<<std::endl;
            break;
        case 2:
            std::cout<<"вторник"<<std::endl;
            break;
        case 3:
            std::cout<<"среда"<<std::endl;
            break;
        case 4:
            std::cout<<"четверг"<<std::endl;
            break;
        case 5:
            std::cout<<"пятница"<<std::endl;
            break;
        case 6:
            std::cout<<"суббота"<<std::endl;
            break;
    }
    return 0;
}
