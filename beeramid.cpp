// Returns number of complete beeramid levels
int beeramid(int bonus, double price)
{
  int num = bonus/price;
  if(num == 0){
    return 0;
  }
  int sum = 0;
  for(int i = 1 ;; i++){
    if(sum < num){
      sum += i*i;
    }
    if(sum == num){
      return i;
    }
    if(sum > num){
      return i-1;
    }
  }
  
}