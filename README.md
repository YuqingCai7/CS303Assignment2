# CS303Assignment2

## Linked List

### Push_Front

The first function to implement into our linked list is the push_front function. Here, I created a linked list called myList, and used push_front to add 3 values: 1, 2, and 3.

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/cc94db3f-3519-4211-9583-52c25e93379b)

As we can see, the numbers were added sucessfully. 

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/cb576cb7-f3a2-44f9-8872-d1481689fa53)

### Push_Back

We will also attempt to add numbers from the back of the list by using the push_back function.Which can be seen below:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/cb9500ea-51e6-4bff-a87f-276582ab1aa2)

Here, we can see the original list has added new values: 4, 5, 6 to the back of the list.

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/3f970c02-943b-49df-8c6f-001a5b5eaf19)


### Pop_Front

To delete an item from the beginning of the list, we will use the pop_front function:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/af7e99f0-acff-41a9-828f-f7ad4d91a884)


Here, we can see that the number 1 no longer exist as it has been removed by pop_front:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/993f310c-68a3-4b09-8ca3-d9ab02f99f40)


### Pop_Back

Similar as the push function, we will also try to delete a number from the back by using the pop_back function:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/14236ef7-25b7-4d01-a72f-a5e65b0fc715)

After using pop_back, the last number, 6, was deleted from the list.

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/1b51b7af-af28-4ef6-ab85-674034b8027b)


### Front and Back

To check the the first or the last number of the list, we will use the function front and back. Here is a quick overview of the functions:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/ac467b0e-3d0b-46e0-9ede-68dc284d31d2)

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/4863821a-678a-44ec-b9f8-9c8b5d472b11)

As we can see here, the functions correctly responded with the first and last element of the list, which is 2 and 5.

### Insert

To insert at a number at a specific index of the list, we will use the function insert:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/bd45ee57-6be7-4ee3-bc2f-aa3996ed6751)

From the list previously, this code attempted to add 10, 20, 30 at index 0, 1, 2 accordingly. Here is the result:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/a8b487b3-cdc1-4076-ab56-073fdc918f56)

### Remove

In contrast to insert, we will use remove to delete a number at a specific index: 

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/25374ac1-6980-4268-b6b2-91f3fccc2fcf)

As an experiment, let's try to delete the number at index 2:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/cb01a8ac-645b-4562-883e-3427742e4c95)

As we can see, the number at index 2(30) has been deleted. 

### Find

To locate the index of a desireable number, we will use the function find:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/69469a93-a6ae-40aa-a64d-2892fd1440ee)

Here, we attempted to locate the number 20 in the list. As we can see, the program responded with the correct index for the number. 

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/ce95f18f-fc8b-458c-bf2e-571adfb97e03)

### Empty

To check whether the list is empty, we will use the function empty:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/df79707c-496c-4bb7-bcd5-c335b2231eb7)

Since the list we were using previously was not empty, the program correctly responded with that information.

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/fef679f8-4a1b-45ca-8571-72d4743da9d5)

## Stack

### Empty

To check whether the stack is empty, we need to first create a stack: 

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/ee316b50-6de4-4e98-ad6e-48231acb5887)

Here, I created a stack called bigmac, and used the function empty to check whether the stack is empty.

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/c7591b1d-4d5f-45a2-9b5c-60bc58038d0d)

Since no items have been added to list, the function responded with the list is empty correctly.

### Push

Similar as linked list, we will use push to add new items to the list, with the exception that stack can only add from the top:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/62908da5-53aa-44c7-8326-bad896cfdfee)

Here, I tried to add 3 numbers: 50, 90, and 100 to the stack.

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/8f8f4058-a88a-477c-b648-fa0d1397b50a)

As we can see here, the numbers were added to the stack sucessfully.

### Pop

Likewise, to delete a number from the stack, we can use pop to achieve such goal:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/7300e3ad-78e2-4331-87d1-4f8cc023fad2)

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/d0051dbf-bf88-4264-92f4-ba7f91fc1333)

As a result, the original top(50) was deleted by pop.

### Average

To find the average number of all elements in the stack, we can use average to achieve this goal:

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/5d79994b-7239-4aa3-acc6-90c09c1bd2bd)

![image](https://github.com/YuqingCai7/CS303Assignment2/assets/143641552/cee1b6d7-4892-4083-a611-85a44bf0210f)

Since 50 has been deleted from the stack and the remaining numbers are 100 and 90, the program correctly returned the average number (95).



