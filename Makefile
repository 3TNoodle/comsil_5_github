cc=g++
cflags = -W -g
target = GA

objects = main.o array.o growablearray.o

$(target) : $(objects)
	$(cc) $(cflags) -o $(target) $(objects)

%.o : %.cpp
	$(cc) $(cflags) -c -o $@ $<

main.o array.o : Array.h
main.o growablearray.o : GrowableArray.h

.PHONY : clean
clean :
	rm $(target) $(objects)
