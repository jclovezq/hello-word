# include  < iostream.h >
void  main ()
{
    int i,k= 0 ;
    char str1[ 20 ],str2[ 20 ],str3[ 40 ];
    cout<< "请输入要串联的第一个字符串" <<endl;
    cin>>str1;
    cout<< "请输入要串联的第二个字符串" <<endl;
    cin>>str2;
    for (i= 0 ;str1[i]!= ' \0 ' ;i++)
    {
        str3[k]=str1[i];k++;
    }
    str3[k]= '  ' ;k++; /*依照strcat函数两字符串串联后中间保留一空格*/
    for (i= 0 ;str2[i]!= ' \0 ' ;i++)
    {
        str3[k]=str2[i];k++;
    }
    str3[k]= ' \0 ' ;
    cout<< "串联后的字符串为：" <<str3<<endl;
}
