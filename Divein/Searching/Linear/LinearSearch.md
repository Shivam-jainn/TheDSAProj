#  **LINEAR SEARCH**


<hr>

    > Best Case Time Complexity of Linear Search: O(1)

    > Average Case Time Complexity of Linear Search: O(N)

    > Worst Case Time Complexity of Linear Search: O(N)

<hr>

    > Space Complexity of Linear Search: O(1)
<hr>

    > Number of comparisons in Best Case: 1

    > Number of comparisons in Average Case: N/2 + N/(N+1)

    > Number of comparisons in Worst Case: N
<hr>


<br>

<section>
<h3><b>THE IDEA</b></h3>

Let's say we have an array , **arr** <br>
> arr = [2, 12, 15, 11, 7, 19, 45]
We want to find , 7.

Our thought : We can go over all elements and find it !

That is linear search in a nutshell

```
int n = size of array
int i = 0;
array follows 0 based indexing
key = value to be found in array , arr
```

#### **pseudocode**
```
for  i , 0 to n-1 :
    if (arr[i]==key):
         return key value;

if no element found in whole array :
         return -1;

```
</section>

# CODE files here

### [c++](Divein/Searching/Linear/linearsearch.cpp) code here 

