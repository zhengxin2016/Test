default:s c
s:server.o
	cc -o s server.o
server.o:server.c
	cc -c server.c

c:client.o
	cc -o c client.o
client.o:client.c
	cc -c client.c

clean:
	rm s server.o c client.o
