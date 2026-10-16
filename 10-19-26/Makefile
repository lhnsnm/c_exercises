.PHONY: all build test clean run-calc run-multiplier run-vending

.DEFAULT_GOAL := all

all: build

build:
	cmake -S . -B build
	cmake --build build

run-calc:
	./build/mini_calculator

run-multiplier:
	./build/multiplier

run-vending:
	./build/vending_machine

test:
	ctest --test-dir build --output-on-failure

clean:
	rm -rf build
