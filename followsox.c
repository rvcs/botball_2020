#include <kipr/wombat.h>

int main()
{
    camera_open();
    create_connect();
    while (a_button() == 0)
    {
       
        camera_update();
        if (get_object_count(0) > 0)
        {
            int x,y;
            x = get_object_center_x(0,0);
            y = get_object_center_y(0,0);
            
            if (x<50) //
            {
           		printf("left.\n");
                create_drive_direct(-500,-250);
            }
            else if(x<110)
            {
                create_drive_direct(-500,-500);
            }
            else 
            {
           		printf("right.\n");
                create_drive_direct(-250,-500);
            }
            
                
            printf("I see Sox.\n");
        }
        else
        {
            
            printf("Where is Sox :(\n");
            create_drive_direct(-250,0);
        }
    }
    create_stop();
    create_disconnect();
    camera_close();
    
    
    return 0;
}

