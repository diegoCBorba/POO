#include <iostream>
using std::cout;
using std::endl;

//biblioteca que permite alguns controles sobre a saída
#include <iomanip>
using std::setfill; 
using std::setw;

#include "Time.h"

Time::Time(int hr, int min, int sec)
{
  setTime(hr, min, sec);  
  //qualquer modificação posterior em setTime reflete no construtor
}

// No construtor vazio retorna a hora atual Universal
Time::Time(){
  struct tm *hora;
  time_t curr_time;
	time(&curr_time);
  
  hora = localtime(&curr_time);
  setTime((*hora).tm_hour, (*hora).tm_min, (*hora).tm_sec);
}

void Time::setTime(int h, int m, int s)
{
  setHour(h);
  setMinute(m);
  setSecond(s);  
}

void Time::setHour(int h)
{
  hour = (h >=0 && h < 24) ? h : 0;     //valida horas
}

//forma 2
inline void Time::setMinute(int m)
{
  minute = (m >= 0 && m < 60) ? m : 0;  //valida minutos
}

void Time::printUniversal()
{
  cout << setfill('0') << setw(2) << getHour() << ":" <<
  setw(2) << getMinute() << ":" << setw(2) << getSecond() << endl;
}

// Adiciona mais um segundo pro tempo
void Time::tick(){
  if(getSecond() == 59){
    setSecond(getSecond() + 1);
    if(getMinute() == 59){
      setHour(getHour() + 1);
      }
    setMinute(getMinute() + 1);
    }else{
    setSecond(getSecond() + 1);
  }
}

void Time::printStandard()
{
  cout << ( (getHour() == 0 || getHour() == 12) ? 12 : getHour() % 12) << ":" << setfill('0') << setw(2) << getMinute() << ":" << setw(2) << getSecond() << (getHour() < 12 ? " AM" : " PM") << endl;
}
