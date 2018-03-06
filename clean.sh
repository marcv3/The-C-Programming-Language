#!/bin/bash
cd ch1_a-tutorial-introduction
if [ -d "work" ]; 
then make clean_work
else echo ""
fi
cd ..

cd ch2_types-operators-expressions
if [ -d "work" ]; 
then make clean_work
else echo ""
fi
cd ..

cd ch3_control-flow
if [ -d "work" ]; 
then make clean_work
else echo ""
fi
cd ..

cd ch4_functions-and-prog-structure
if [ -d "work" ]; 
then make clean_work
else echo ""
fi
cd ..

