#include <cstdio>
#include <gassert.hpp>
#include <vector>


int main(int argc, char *argv[])
{
  ASSERT(argc <= 1);
  auto &s = gassert::failed_on_host::get_instance();
  fprintf(stderr, " s.failed.size() = %d\n", (int)s.failed.size());
  fprintf(stderr, " sizeof(expression_string)= %d\n",
      (int)sizeof(gassert::expression_string));

#if 0
  for (auto &x : s.failed)
  {
    printf("x.filename= %s\n", x.filename.c_str());
    printf("x.liennumber= %s\n", x.linenumber.c_str());
    printf("FAILED: %s %s %s (%s %s %s)\n", x.lhs_expr.c_str(), x.op.c_str(),
           x.rhs_expr.c_str(), x.lhs_value.c_str(), x.op.c_str(),
           x.rhs_value.c_str());
  }
#endif
}

