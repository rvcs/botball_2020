#include <kipr/botball.h>
void straight(speed, time){
	create_drive_straight(-speed);
    msleep(time);
}
void spin_left(speed, time){
	create_drive_direct(-speed, speed);
    msleep(time);
}
void spin_right(speed, time){
	create_drive_direct(speed, -speed);
    msleep(time);
}
void hard_left(speed, time){
	create_drive_direct(-speed, 0);
    msleep(time);
}
void hard_right(speed, time){
	create_drive_direct(0, -speed);
    printf("Hello World\n");
    msleep(time);
}
void stop(time){
	create_drive_direct(0, 0);
    msleep(time);
}
int main()
{
    create_connect();
    printf("Connected\n");
    straight(250, 1500);
    hard_left(1000, 1000);
    //wait for robot to go out
    stop(1000);
    straight(-250, 500);
    spin_left(250, 800);
    straight(250, 1500);
    //add servo
   	spin_right(250, 1000);
    straight(250, 1000);
    create_disconnect();
    printf("Disconnected\n");
    return 0;
}

