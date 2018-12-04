#include "contiki.h"
#include "dev/leds.h"
#include "dev/button-sensor.h"
#include <stdio.h> /* For printf() */

PROCESS(button_process, "button process");
PROCESS(blink_process, "Blink Process");
AUTOSTART_PROCESSES(&button_process,&blink_process);


unsigned short int state = 0;
static int counter_ctimer;
static struct ctimer timer_blink;
static struct ctimer timer_blink_duration;

void blink_start(){
  ctimer_reset(&timer_blink);
  leds_toggle(LEDS_BLUE);
  counter_ctimer++;
}

void blink_stop(){
  printf("stop called\n");
  ctimer_stop(&timer_blink);
  ctimer_stop(&timer_blink_duration);
  leds_off(LEDS_BLUE);
  state = 0;
}

/*---------------------------------------------------------------------------*/
PROCESS_THREAD(blink_process, ev, data)
{
  PROCESS_BEGIN();

    ctimer_set(&timer_blink,  CLOCK_SECOND, blink_start, NULL);
    ctimer_set(&timer_blink_duration, 10 * CLOCK_SECOND, blink_stop, NULL);


  PROCESS_END();
}

PROCESS_THREAD(button_process, ev, data)
{
  PROCESS_BEGIN();
  SENSORS_ACTIVATE(button_sensor);

  while(1){
    PROCESS_WAIT_EVENT_UNTIL((ev==sensors_event)&&(data==&button_sensor));
    state ++;
    printf("%d\n", state );
    switch (state) {
      case 1:
        process_start(&blink_process, NULL);
        break;
      case 4:
      printf("case 4\n" );
        blink_stop();
          process_exit(&blink_process);

      break;

    }

  }


  PROCESS_END();
}
