build:
	@gcc -o c.out main.c
	@g++ -o d.out main.cpp

clean:
	@rm -f c.out d.out
