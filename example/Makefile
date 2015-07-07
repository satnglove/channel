CXXFLAGS=-std=c++11
LDFLAGS=-pthread

all: chan_test buffered unbuffered ch10000
chan_test: chan_test.o
	$(CXX) -o $@ $^

buffered: buffered.o
	$(CXX) -o $@ $^

unbuffered: unbuffered.o
	$(CXX) -o $@ $^ $(LDFLAGS)

ch10000: ch10000.o
	$(CXX) -o $@ $^ $(LDFLAGS)

clean:
	-rm -rf *.o chan_test buffered unbuffered ch10000
