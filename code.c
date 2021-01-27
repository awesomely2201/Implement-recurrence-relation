int findTofK(int k)
{
  if(k!=0)
    return (3*k+findTofK(k-1));
  else
    return 0;
}
