int test_strrchr(void);
int test_strlen(void);
int test_strnlen(void);
int test_strcasecmp(void);
int test_strcmp(void);
int test_strncmp(void);

int main(void)
{
   test_strlen();
   test_strnlen();
   //test_strrchr();
   //test_strcmp();
   test_strncmp();
   //test_strcasecmp();
   return 0;
}