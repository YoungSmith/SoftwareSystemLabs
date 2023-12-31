#ifndef SERVER_CONSTANTS
#define SERVER_CONSTANTS


#define INITIAL_PROMPT ".....................Welcome To Academia :: Course Registration..................\nLoginType\nEnter Your Choice {1. Admin, 2. Professor, 3.Student} : \n"
// ========== COMMON TEXT =============================

// LOGIN

#define LOGIN_ID "Enter your login ID"
#define PASSWORD "Enter your password \n# "
#define INVALID_LOGIN "The login ID specified doesn't exist!$"
#define INVALID_PASSWORD "The password specified doesn't match!$"
#define SALT_BAE "666"

// GET ACCOUNT DETAILS

#define GET_STUDENT_ID "Enter Student ID: "
#define GET_ACCOUNT_NUMBER "Enter the account number of the account you're searching for"
#define GET_CUSTOMER_ID "Enter the customer ID of the customer you're searching for"
#define GET_FACULTY_ID "Enter Faculty ID: "

#define ERRON_INPUT_FOR_NUMBER "It seems you have passed a sequence of alphabets when a number was expected or you have entered an invalid number!\nYou'll now be redirected to the main menu!^"

#define INVALID_MENU_CHOICE "It seems you've made an invalid menu choice\nYou'll now be redirected to the main menu!^"

#define STUDENT_ID_DOESNT_EXIT "No STUDENT could be found for the given ID"
#define FACULTY_ID_DOESNT_EXIT "No Faculty could be found for the given ID"
#define CUSTOMER_ID_DOESNT_EXIT "No STUDENT could be found for the given ID"
#define STUDENT_ID_DOESNT_EXIT "No STUDENT could be found for the given ID"
#define CUSTOMER_LOGIN_ID_DOESNT_EXIT "No customer could be found for the given login ID$"
#define STUDENT_LOGIN_ID_DOESNT_EXIT "No student could be found for the given login ID$"
#define FACULTY_LOGIN_ID_DOESNT_EXIT "No FACULTY could be found for the given login ID$"
#define ACCOUNT_ID_DOESNT_EXIT "No account could be found for the given account number"

#define TRANSACTIONS_NOT_FOUND "No transactions were performed on this account by the customer!^"

// ====================================================

// ========== ADMIN SPECIFIC TEXT======================

// LOGIN WELCOME
// #define ADMIN_LOGIN_WELCOME "Welcome dear admin! With great power comes great responsibility!\nEnter your credentials to unlock this power!"
// #define ADMIN_LOGIN_SUCCESS "Welcome superman!"

// ADMIN MENU
#define ADMIN_MENU ".....................Welcome To Admin Menu..................\n1. Add Student\n2. View Student Details\n3. Add Faculty\n4. View Faculty Details\n5. Activate Student\n6. Block Student\n7. Modify Student Details\n8. Modify Faculty Details\n9. Logout and Exit\nEnter Your Choice: "

// ADD CUSTOMER
#define ADMIN_ADD_STUDENT_NAME "Enter Name : "
#define ADMIN_ADD_STUDENT_AGE "Enter Age : "
#define ADMIN_ADD_STUDENT_EMAIL "Enter Email : "
#define ADMIN_ADD_STUDENT_ADDRESS "Enter Address : "

#define FACULTY_ADD_COURSE_NAME "Enter Course Name : "
#define FACULTY_ADD_COURSE_DEPARTMENT "Enter Department : "
#define FACULTY_ADD_COURSE_SEAT "Enter No. of seats : "
#define FACULTY_ADD_COURSE_CREDIT "Enter course credits : "

#define STUDENT_ENROL_COURSE "Enter Course ID to be Enrolled : "
#define STUDENT_UNENROL_COURSE "Enter Course ID to be Unenrolled : "

#define ADMIN_ADD_CUSTOMER_PRIMARY "Enter the details for the primary customer\n"
#define ADMIN_ADD_CUSTOMER_SECONDARY "Enter the details for the secondary customer\n"
#define ADMIN_ADD_CUSTOMER_NAME "What is the customer's name?"
#define ADMIN_ADD_CUSTOMER_GENDER "What is the customer's gender?\nEnter M for male, F for female and O for others"
#define ADMIN_ADD_CUSTOMER_AGE "What is the customer's age?"
#define ADMIN_ADD_CUSTOMER_AUTOGEN_LOGIN "The autogenerated login ID for the customer is : "
#define AUTOGEN_PASSWORD "tarun" // append to end of next string macro
#define ADMIN_ADD_CUSTOMER_AUTOGEN_PASSWORD "The autogenerated password for the customer is : "
#define ADMIN_ADD_CUSTOMER_WRONG_GENDER "It seems you've enter a wrong gender choice!\nYou'll now be redirected to the main menu!^"

// ADD ACCOUNT
#define ADMIN_ADD_ACCOUNT_TYPE "What type of account is to be created? Enter 1 for regular account and 2 for joint account"
#define ADMIN_ADD_ACCOUNT_NUMBER "The newly created account's number is :"
#define ADMIN_CUSTOMER_CREATED "Student Created Successfully!\nStudent Id.Generated is ->"
#define ADMIN_FACULTY_CREATED "Faculty Created Successfully!\nFaculty Id.Generated is ->"
#define COURSE_CREATED "Course Created Successfully!\nCourse Id.Generated is ->"
#define ENROLLMENT_CREATED "Successfully! Enrolled in course in course id ->"
#define ENROLLMENT_DELETED "Successfully! Unenrolled in course in course id ->"

// DELETE ACCOUNT
#define ADMIN_DEL_ACCOUNT_NO "What is the account number of the account you want to delete?"
#define ADMIN_DEL_ACCOUNT_SUCCESS "This account has been successfully deleted\nRedirecting you to the main menu ...^"
#define ADMIN_DEL_ACCOUNT_FAILURE "This account cannot be deleted since it still has some money\nRedirecting you to the main menu ...^"

// MODIFY STUDENT INFO
#define ADMIN_ACTIVE_STUDENT_ID "Enter the ID of the STUDENT who's account you want to activate"    
#define ADMIN_DEACTIVE_STUDENT_ID "Enter the ID of the STUDENT who's account you want to deactivate"

#define FACULTY_DEL_COURSE_ID "Enter the ID of the Course that you wanna delete"

#define ADMIN_MOD_STUDENT_ID "Enter the ID of the STUDENT who's information you want to edit"
#define ADMIN_MOD_STUDENT_MENU "Which information would you like to modify?\n1. Name 2. Age 3. Email 4. Address\nPress any other key to cancel"
#define ADMIN_MOD_STUDENT_NEW_NAME "What's the updated value for name?"
#define ADMIN_MOD_STUDENT_NEW_EMAIL "What's the updated value for email?"
#define ADMIN_MOD_STUDENT_NEW_ADDRESS "What's the updated value for address?"
#define ADMIN_MOD_STUDENT_NEW_AGE "What's the updated value for age?"

#define ADMIN_MOD_STUDENT_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"

#define COURSE_MOD_DELETE_SUCCESS "The course deletion was successfull!\nYou'll now be redirected to the main menu!^"

#define COURSE_MOD_SUCCESS "The course modification was successfull!\nYou'll now be redirected to the main menu!^"

#define FACULTY_MOD_COURSE_ID "Enter the ID of the course who's information you want to edit"
#define FACULTY_MOD_COURSE_MENU "Which information would you like to modify?\n1. Name 2. Department 3. No of seats 4. Course Credit\nPress any other key to cancel"
#define FACULTY_MOD_COURSE_NAME "What's the updated course name going to be?"
#define FACULTY_MOD_COURSE_DEPARTMENT "What's the updated department going to be?"
#define FACULTY_MOD_COURSE_SEATS "What's the updated no. of seats going to be?"
#define FACULTY_MOD_COURSE_CREDITS "What's the updated course credits going to be?"

#define ADMIN_MOD_FACULTY_ID "Enter the ID of the faculty who's information you want to edit"
#define ADMIN_MOD_FACULTY_MENU "Which information would you like to modify?\n1. Name 2. Email 3. Address 4. Designation\nPress any other key to cancel"
#define ADMIN_MOD_FACULTY_NEW_NAME "What's the updated value for name?"
#define ADMIN_MOD_FACULTY_NEW_EMAIL "What's the updated value for email?"
#define ADMIN_MOD_FACULTY_NEW_ADDRESS "What's the updated value for address?"
#define ADMIN_MOD_FACULTY_NEW_DESG "What's the updated Designation?"

#define ADMIN_MOD_FACULTY_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"
// MODIFY CUSTOMER INFO
#define ADMIN_MOD_CUSTOMER_ID "Enter the ID of the customer who's information you want to edit"
#define ADMIN_MOD_CUSTOMER_MENU "Which information would you like to modify?\n1. Name 2. Age 3. Gender \nPress any other key to cancel"
#define ADMIN_MOD_CUSTOMER_NEW_NAME "What's the updated value for name?"
#define ADMIN_MOD_CUSTOMER_NEW_GENDER "What's the updated value for gender?"
#define ADMIN_MOD_CUSTOMER_NEW_AGE "What's the updated value for age?"

#define ADMIN_MOD_CUSTOMER_SUCCESS "The required modification was successfully made!\nYou'll now be redirected to the main menu!^"

#define ADMIN_LOGOUT "Logging out$"

// ====================================================

// ========== CUSTOMER SPECIFIC TEXT===================

// LOGIN WELCOME
#define CUSTOMER_LOGIN_WELCOME "Welcome dear customer! Enter your credentials to gain access to your account!"
#define CUSTOMER_LOGIN_SUCCESS "Welcome beloved customer!"

#define STUDENT_LOGIN_SUCCESS "Login Successful!"
#define STUDENT_LOGOUT "Logging out!$"

#define CUSTOMER_LOGOUT "Logging out!$"

// ADMIN MENU
#define CUSTOMER_MENU "1. Get Customer Details\n2. Deposit Money\n3. Withdraw Money\n4. Get Balance\n5. Get Transaction information\n6. Change Password\nPress any other key to logout"

#define STUDENT_MENU "...............Welcome to Student Menu.............\n1. View All Courses\n2. Enroll (pick) New Course\n3. Drop Course\n4. View Enrolled Course Details\n5. Changed Password\n6. Logout and Exit\nEnter Your Choice:"
#define FACULTY_MENU "...............Welcome to Faculty Menu.............\n1. View Offering Courses\n2. Add new Course\n3. Remove Course from Catalog\n4. Update Course Details\n5. Changed Password\n6. Logout and Exit\nEnter Your Choice:"
#define STUDENT_MOD_PASSWORD "Enter the new password"

#define ACCOUNT_DEACTIVATED "It seems your account has been deactivated!^"

#define DEPOSIT_AMOUNT "How much is it that you want to add into your bank?"
#define DEPOSIT_AMOUNT_INVALID "You seem to have passed an invalid amount!^"
#define DEPOSIT_AMOUNT_SUCCESS "The specified amount has been successfully added to your bank account!^"

#define WITHDRAW_AMOUNT "How much is it that you want to withdraw from your bank?"
#define WITHDRAW_AMOUNT_INVALID "You seem to have either passed an invalid amount or you don't have enough money in your bank to withdraw the specified amount^"
#define WITHDRAW_AMOUNT_SUCCESS "The specified amount has been successfully withdrawn from your bank account!^"

#define PASSWORD_CHANGE_OLD_PASS "Enter your old password"
#define PASSWORD_CHANGE_OLD_PASS_INVALID "The entered password doesn't seem to match with the old password"
#define PASSWORD_CHANGE_NEW_PASS "Enter the new password"
#define PASSWORD_CHANGE_NEW_PASS_RE "Reenter the new password"
#define PASSWORD_CHANGE_NEW_PASS_INVALID "The new password and the reentered passwords don't seem to pass!^"
#define PASSWORD_CHANGE_SUCCESS "Password successfully changed!^"

// ====================================================




#define STUDENT_FILE "./records/students"
#define FACULTY_FILE "./records/faculty"
#define COURSE_FILE "./records/course"
#define ENROLLMENT_FILE "./records/enroll"
#endif