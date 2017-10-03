
INCLUDE=-I./
LDFLAGS=-L./ -linifileparser

.PHONY:clean

all:test libinifileparser.so

test:main.cpp libinifileparser.so
	$(CXX) -Wl,--rpath=./ -o $@ $< $(INCLUDE) $(LDFLAGS) -fPIC -std=c++11

libinifileparser.so:IniFileParser.cpp
	$(CXX) -o $@ $< $(INCLUDE) -fPIC -shared -std=c++11

clean:
	rm -rf *.so test
