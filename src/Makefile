CC=g++

CFLAGS=-c -Wall
LDFLAGS=-lglut -lGL -lGLU -lpng

SOURCES=raytrace.cpp Sphere.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=../raytrace

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
