C = g++
CFLAGS = -Wall - g
DEPS = hrate.h

main : main.o heartrate.o
$(CC) $(CFLAGS) - o main main.o heartrate.o

main.o : main.cpp hrate.h
$(CC) $(CFLAGS) - c main.cpp
heartrate.o : hrate.h

clean : -rm main.o heartrate.o