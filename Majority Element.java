# algorithm using in this problem is Moore voting algo
TC-0(n)
SC-0(1)
  code:
  class Solution {
    public int majorityElement(int[] nums) {
        int count=0;
      Integer me=null;
      
      //travese the array 
      //make the first ele as the majority
      //if next is qual c++ || if not c--
      // after count become zero make the element as majority where count got zero
      for(int i=0;i<nums.length;i++){
        if(count==0){
            me=nums[i];
          count=1;
        }else if(nums[i]==me){
          count++;
        }else{
          count--;
        }
      }
      return me;
      
    }
}
