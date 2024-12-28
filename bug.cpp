int main(){
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr; 
  //This will print 20
  std::cout << y << std::endl; 
  //Freeing the pointer here will cause a runtime error.
  free(ptr); 
  return 0; 
}