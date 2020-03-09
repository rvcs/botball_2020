#include <kipr/botball.h>
/** things to do for 3/14:
template
2nd half
make claw sturdier**/
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
    enable_servos();
    set_servo_position(3, 2047);
    straight(250, 2150);
    stop(12000);
    //straight(-100, 500);
    //stop(3000);
    //hard_left(150, 2500);
    //stop(3000);
    set_servo_position(3, 1400);
    //wait for robot to go out
    //stop(1000);
    //straight(-150, 500);
    //spin_right(250, 600);
    straight(-250, 1750);
   	spin_left(250, 500);
    set_servo_position(3, 2047);
    straight(250, 2400);
    spin_right(100, 1000);
    spin_left(100, 550);
    create_disconnect();
    printf("Disconnected\n");
    return 0;
}
