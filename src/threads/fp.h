#define f (1 << 14)




int int_to_fp(int n);

int fp_to_int_tozero(int x);

int fp_to_int_round(int x);

int fp_add(int x, int y);

int fp_sub(int x, int y);


int fp_add_mixed(int x, int n);

int fp_sub_mixed(int x, int n);

int fp_mux(int x, int y);

int fp_mux_mixed(int x, int n);

int fp_div(int x, int y);

int fp_div_mixed(int x, int n);


// convrt 

int int_to_fp(int n) {
  return n * f;

}
int fp_to_int_tozero(int x) {

  return x/f;

}


int fp_to_int_round(int x) {

  if ( x >= 0 ) {


    return ( x+f/2)/f;

  }

  return (x-f / 2) / f;

}

// arthimetic 

int fp_add(int x, int y) {
      return x + y;

}

int fp_sub(int x, int y) {

  return x - y;
}

int fp_mux(int x, int y) {
    return ((int64_t) x) * y / f;

}
int fp_div(int x, int y) {

  return ((int64_t) x) * f /y ;
}


// mixed one 

int fp_add_mixed(int x, int n) {
   
      return x + n * f;

}

int fp_sub_mixed(int x, int n) {

  return x - f*n;
}

int fp_mux_mixed(int x, int n) {
    return x*n;

}
int fp_div_mixed(int x, int n) {

  return x/n ;
}

















