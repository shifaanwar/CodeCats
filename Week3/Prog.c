#include <stdio.h>
   int main()
   {
       char s[9],store;
       int Month_no=s[3];
       gets(s);
       switch (Month_no)
       {
           case 1:
          store = "January";
          break;
          case 2:
          store = "February";
          break;
          case 3:
          store = "March";
          case 4:
          store = "April";
          case 5:
          store = "May";
          break;  
          case 6:
          store = "June";
          break;
          case 7:
          store = "July";
          break;
          case 8:
          store = "August";
          break;
          case 9:
          store = "September";
          break;
          case 10:
          store = "October";
          break;
          case 11:
          store = "November";
          break;
          case 12:
          store ="December";
          break;
       }
   }
   