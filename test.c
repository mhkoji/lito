int main(void) {
  lito_print_lispobj(lito_eval(lito_read_from_string("(+ 10 20))")));
  return 0;
}
