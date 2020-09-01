class my
{
public static void main(String s)
{
Scanner sc=new Scanner(s);
String s1="";char ch,ch1;int i;
while(sc.hasNext())
{
s1=sc.next();
s1=s1.toUpperCase();
for(int i=65;i<=90;i++)
{
for(int j=0;j<s1.length();j++)
{
ch=sc.charAt(j);
if(ch==i)
{
System.out.print((char)ch);
}}
System.out.print(" ");
}}}
