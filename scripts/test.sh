#!/bin/bash

if [ $# == 0 ]; then
	../build/tests/./unitTest
else
	../build/tests/./unitTest --gtest_filter=$1
fi
