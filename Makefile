
INCLUDE=-I./
LDFLAGS=-L./ -linifileparser

.PHONY:clean

all:./Sample/test libinifileparser.so

./Sample/test:./Sample/main.cpp libinifileparser.so
	$(CXX) -Wl,--rpath=../ -o $@ $< $(INCLUDE) $(LDFLAGS) -fPIC -std=c++11

libinifileparser.so:IniFileParser.cpp
	$(CXX) -o $@ $< $(INCLUDE) -fPIC -shared -std=c++11

clean:
	rm -rf *.so ./Sample/test test
