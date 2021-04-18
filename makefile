CC=gcc
OBJS= Add.o Minus.o Multi.o Divide.o 
TARGET=calchw4
LIBS=libmysharedCalc.so

$(TARGET): Calculator.o $(LIBS)
	$(CC) -o $(TARGET) Calculator.o -L. -lmysharedCalc

$(LIBS): $(OBJS)
	$(CC) -fPIC -c Add.c Minus.c Multi.c Divide.c
	$(CC) -shared -o $(LIBS) $(OBJS)

%.o : %.c
	$(CC) -I. -Wall -g -c $<

clean : 
	rm -f $(OBJS) Calculator.o $(TARGET)


