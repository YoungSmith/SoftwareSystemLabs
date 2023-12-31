#!/bin/bash
# This is employee details records

while true; do
	echo "Menu:"
	echo "1. Create Employee Record"
	echo "2. Delete Employee Record"
	echo "3. Search Employee Record"
	echo "4. Display Employee Record"
	echo "5. Sort Records"
	echo "6. Exit"

	read -p "Please Enter your choice (1-7):" choice

	case $choice in
		1)
			read -p "Please Enter Employee Name " name
			read -p "Please Enter Employee Number " enumber
			read -p "Please Enter Employee Phone no " phone
			echo "$name $enumber $phone" >> employeeDetails.txt
			echo "Employee record created successfully!!"
			;;
		2)      read -p "Please Enter Employee Number " snum
			sed "/ $snum /d" employeeDetails.txt > employeeDetails1.txt
			mv -f employeeDetails1.txt employeeDetails.txt
			echo "Employee record deleted successfully!!" 
			;;
		3)	read -p "Please Enter Employee Number " snum
			grep $snum -w employeeDetails.txt
			;;
	        4)     cat employeeDetails.txt
			;;
		5)      sort -k 2n employeeDetails.txt > employeeDetails1.txt
			mv -f employeeDetails1.txt employeeDetails.txt
			echo "Successfully Sorted"
			;;
		
		6)
			echo "Exiting..."
			break
			;;
		*)
			echo "Sorry Invalid Input"
			;;
	esac
done	
		
