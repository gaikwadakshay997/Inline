/*Find out largest number between two numbers by implementing two
different classes as-
a. Number1-include n1 as variable and get_a(),disp_a() as
functions.
b. Number2-include n2 as variable and get_b(),disp_b() as
functions.
c. Create one common function as friend of both Number1 and
Number2 class.*/





#include<iostream>


class second;

class first

{

int x;

public:

void getx()

{

cout<<"\nEnter the value of x:";

cin>>x;

}

friend void max(first,second);

};

class second

{

int y;

public:

void gety()

{

cout<<"\nEnter the value of y:";

cin>>y;

}

friend void max(first,second);

};

void max(first a,second b)

{

if(a.x>b.y)

{

cout<<"\Greater value is:"<<a.x;

}

else

{

cout<<"\nGreater value is:"<<b.y;

}

}

void main()

{

first a;

second b;

clrscr();

a.getx();

b.gety();

max(a,b);

getch();

}


