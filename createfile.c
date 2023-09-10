#include <stdio.h>
#include<ncurses.h>
#include <string.h>
#include <unistd.h>
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wint-conversion"
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"
void leftshift(char lines[10000],int p, int n){
int t=p;   
while(t>0 && t<n){
   lines[t-1]=lines[t];
   t++;
   }
   if(t!=0)
   lines[t-1]=' ';
   lines[t]=' ';
   for(int i=p-1;i<=n;i++) printw("%c",lines[i]);
}
void rightshift(char c,char lines[10000],int p,int n){
  int t=n;
  while(t>p){
  lines[t]=lines[t-1];
  t--; 
  }
  lines[t]=c;
  for(int i=p+1;i<=n;i++) printw("%c",lines[i]);
}
char* createFile(char filename[100]){
   if (access(filename, F_OK) != -1)
    {
        return "file exists";
    }
    FILE *fptr;
    fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        return "The file is not created due to some error";
    }
   char lines[10000];
   char c;
   int x,y;
   initscr();
   clear();
   keypad(stdscr,TRUE);
   endwin();
   int p=0;
   int n=0;
   int linestart=0;
   while(1){
   int c=getch();
   getyx(stdscr,y,x);   
   printf("%d %d",x,y);
   if(c==KEY_RIGHT) {
    move(y,x+1);
    if(p==n){
    lines[p++]=' ';
    n++;
    } 
    else {
   p++;
   }
   }
   else if(c==KEY_LEFT){
   if(x==0) continue;
   p--;
   move(y,x-1);
  }
   else if(c==27) break;
   else if(c==10) {move(y,x+p-linestart);for(int i=p;i<=n;i++) printw(" ");
move(y+1,x);rightshift(c,lines,p++,n++);lines[p-1]='\n';move(y+1,x);linestart=p;continue;}
   else if(c==KEY_BACKSPACE){
   if(x==0) continue;
   leftshift(lines,p,n);
   p--;
   n--; 
  move(y,x);
  }
   else{
   if(p<n){
   rightshift(c,lines,p,n);
   p++;
   n++;
   move(y,x);
  }
   else{
    lines[p++]=c;
    n++;
   }
   }
   }
    endwin();
     fprintf(fptr, "%s", lines); // Write input to the file
    fclose(fptr);
    return "file created succesfully";
}
