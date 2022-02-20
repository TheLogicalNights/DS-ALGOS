///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : fizBuzz.
// Parameters    : Integer.
// Return Value  : void.
// Description   : This is simple function which takes one integer as parameter and prints fizz, buzz and fizzBuzz as per requirement. 
// Author        : Swapnil Ramesh Adhav.
// Date          : 20 Feb 2022.
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void fizzBuzz(int iNo)
{
    int i = 0;

    for(i=1;i<=iNo;i++)
    {
        if((i%15)==0){
            printf("[%d] => ﬁzz buzz\n",i);
        }
        else if((i%3)==0){
            printf("[%d] => ﬁzz\n",i);
        }
        else if((i%5)==0){
            printf("[%d] => buzz\n",i);
        }
        else{
            printf("[%d]\n",i);
        }
    }
}