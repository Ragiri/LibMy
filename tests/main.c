int test_strlen(void);
int test_strnlen(void);
int test_strchr(void);
int test_strrchr(void);
int test_strcmp(void);
int test_strncmp(void);
int test_strcasecmp(void);

int main(void)
{
   test_strlen();
   test_strnlen();
   //test_strchr();
   //test_strrchr();
   test_strcmp();
   test_strncmp();
   //test_strcasecmp();
   return 0;
}