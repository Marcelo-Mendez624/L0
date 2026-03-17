CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -I./Data -I./Experiencias -I./Turista

#estructura proyecto
SRCS = main.cpp \
       Data/DTFecha.cpp \
       Experiencias/Experiencia.cpp \
       Experiencias/Alojamiento.cpp \
       Experiencias/TourGuiado.cpp \
       Experiencias/EventoCultural.cpp \
       Turista/Turista.cpp

OBJS = $(SRCS:.cpp=.o)

# name ejecutable
TARGET = 58_lab0

all: $(TARGET)


$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)


%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@


clean:
	rm -f $(OBJS) $(TARGET)