CONTIKI = ../..

all: example-abc example-mesh example-collect example-trickle example-polite \
     example-rudolph1 example-rudolph2 example-rucb \
     example-runicast example-unicast example-neighbors \
     temp-broadcast


CONTIKI_TARGET_SOURCEFILES += adc-sensors.c 

TARGET_LIBFILES += -lm
LDFLAGS += -lm
CFLAGS += -lm
FLAGS += -lm

CONTIKI_WITH_RIME = 1
include $(CONTIKI)/Makefile.include
