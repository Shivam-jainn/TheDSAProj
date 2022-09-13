# BINARY SEARCH

    Best Case Time Complexity of Binary Search: O(1)

    Average Case Time Complexity of Binary Search: O(logN)

    Worst Case Time Complexity of Binary Search: O(logN)
    
    ---------------------------------------------

    Space Complexity of Binary Search: O(1) for iterative, O(logN) for recursive.


## **The Idea**

Let's say we have an array , **arr** <br>
> arr = [2, 12, 15, 11, 7, 19, 45]
We want to find , 7.

Our thought : We can go over all elements and find it !

That is a bruteforce approach !!!

But , the Q arises , can we make this process faster ?

<img src="https://miro.medium.com/max/700/1*zxr5lVBBK-bUIWFA-4Aw_Q.jpeg">

<hr>

Let's say ,
I have a random number, in the range of 1 to 25. You try to determine what's my number in the least number of guesses. Whenever you take a guess, I'll tell you if my number is higher or lower.

The trick is always pick the number half way between the possible range. Example
my number is 5.

    (0th step) 13 - lower
    (1th step) 6 - lower
    (2th step) 3 - higher
    (3rd step) 4 - higher
    (4th step) 5 - correct!

<hr>

Try out this visualisation : https://www.cs.usfca.edu/~galles/visualization/Search.html


<hr>


### **PSEUDOCODE**

```
    start_index = 0;
    end_index = n-1;
    middle = (s+e)/2
```

Note : middle = s+(e-s)/2 , this makes sure int doesnt overflow , i.e , middle doesnt gets too large values for int to handle

```
while(start<=end){
    int mid = start + (end-start)/2;

    if(arr[mid]==key){
        return mid;
    }else if(arr[mid]>key){
        end = mid - 1;
    }else{
        start = mid+1;
    }

    return -1;
}
```

# CODE
