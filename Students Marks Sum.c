

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int esum=0;
  int osum=0;
  int i,j;
  for(i=0; i<number_of_students; i=i+2)
      {
          esum=esum+marks[i];
      }
  for(j=1; j<number_of_students; j=j+2)
  {
      osum=osum+marks[j];
  }
  if(gender=='b')
  return esum;
  else {
      return osum;
  }
}

