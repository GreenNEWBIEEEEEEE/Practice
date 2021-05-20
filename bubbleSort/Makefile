#
# Makefile
# greennewbie, 2021-05-20 17:09
#


objects = main.o BubbleSort.o

exe : $(objects)
	g++ -o exe $(objects)

main.o : BubbleSort.h BubbleSort.cpp
BubbleSort.o : BubbleSort.h

clean:
	rm exe $(objects)

# vim:ft=make
#
