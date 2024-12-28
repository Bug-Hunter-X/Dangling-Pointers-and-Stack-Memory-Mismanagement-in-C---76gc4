int main(){
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  //This will print 20
  std::cout << y << std::endl; 
  //No need to free memory here, it will automatically released when function end. 
  return 0; 
}