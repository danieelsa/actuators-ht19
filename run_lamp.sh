clear && mkdir -p build && rm -rf ./build/*
gcc ./lib/lamp/lamp.cpp ./test/lamp/lamp.cpp -I./lib/lamp -I./test/lamp -lunity -o ./build/test && ./build/test
