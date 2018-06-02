/* 履带控速,男左女右 */

#define go_boy (PA0=1;PA1=0;)
#define stop_boy (PA0=0;PA1=0;)
#define back_boy (PA0=0;PA1=1;)

#define go_girl (PB0=1;PB1=0;)
#define stop_girl (PB0=0;PB1=0;)
#define back_girl (PB0=0;PB1=1;)

void foreplay(unsigned boy_speed,unsigned char girl_speed)
{
    /* timer configuration codes here */
    /* 72Mhz clock, set count period = 2000, then the lubrication is 36KHz*/
    
    
}

void go_lover(unsigned char speed)
{
    /* using PWM to control the speed */
    /* enable timer codes here */
    
}
