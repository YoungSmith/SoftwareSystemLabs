#!/bin/bash
# Script to that create header for submission

read -p "Enter file name " filename

read -p "Enter the description " desp

#read -p "Enter date " date

{ echo -n "/*
============================================================================
Name : $filename
Author : Tarun Sharma
Description : $desp
Date: 5th Sep, 2023.
============================================================================
*/
"; cat $filename; } >test.c

mv test.c $filename 
