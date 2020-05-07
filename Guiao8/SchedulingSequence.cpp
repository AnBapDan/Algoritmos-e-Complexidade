//NMEC: 93313
//NOME: Daniel Andrade

// Complete the functions (marked by ...)
// so that it passes all tests in DateTimeTest.

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "SchedulingSequence.h"

// You may add auxiliary definitions and declarations here, if you need to.



// Create a SchedulingSequence capable of storing up to (capacity) intervals.
SchedulingSequence* SchedulingSequenceCreate(int capacity) {
  assert(capacity >= 0);
  // You must allocate space for the struct and for the intervals array!
  SchedulingSequence* pss = (SchedulingSequence*)malloc(sizeof *pss);
  pss->capacity = capacity;
  pss->size = 0;
  pss->intervals = (TimeInterval**) malloc(capacity);
  return pss;
}

// Destroy SchedulingSequence *pss
void SchedulingSequenceDestroy(SchedulingSequence **pss) {
  assert(*pss != NULL);
  free(*pss);
  free((*pss)->intervals);
  *pss = NULL;

}

int SchedulingSequenceIsEmpty(SchedulingSequence *ss) {
  return ss->size == 0;
}

int SchedulingSequenceIsFull(SchedulingSequence *ss) {
  return ss->size == ss->capacity;
}

// Add interval *ti to *ss.
// Return true on success,
// return false if *ti overlaps any of the intervals in *ss.
int SchedulingSequenceAdd(SchedulingSequence *ss, TimeInterval *ti) {
  assert(!SchedulingSequenceIsFull(ss));
  for(int i = 0; i<ss->size; i++){
    if(TimeIntervalOverlaps(ss->intervals[i], ti)){
      return 0;
    }
  }
  ss->intervals[ss->size] = ti;
  (ss->size)++;
  return 1;
}

// Get the interval at position (idx) of *ss.
// idx=0 is the first position idx=ss->size-1 is the last position.
// Precondition: 0 <= idx < ss->size.
TimeInterval *SchedulingSequenceGet(SchedulingSequence *ss, int idx) {
  assert (0 <= idx && idx < ss->size);
  return ss->intervals[idx];

}

// Remove the interval at position (idx) of *ss, and return it.
// idx=0 is the first position idx=ss->size-1 is the last position.
// Precondition: 0 <= idx < ss->size.
TimeInterval *SchedulingSequencePop(SchedulingSequence *ss, int idx) {
  assert (0 <= idx && idx < ss->size);
  // This implies !SchedulingSequenceIsEmpty(ss).
  assert(!SchedulingSequenceIsEmpty(ss));
  TimeInterval *tmp = ss->intervals[idx];
  for(int i = idx-1; i<(ss->size)-1;i++){
    ss->intervals[idx]=ss->intervals[idx+1];
  }
  (ss->size)--;
  return tmp;

}

// You may add auxiliary definitions and declarations here, if you need to.
