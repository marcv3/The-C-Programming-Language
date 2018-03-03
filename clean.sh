#!/bin/bash
cd ch1
if [ -d "work" ]; 
then make clean_work
else echo ""
fi
cd ..

cd ch2
if [ -d "work" ]; 
then make clean_work
else echo ""
fi
cd ..

