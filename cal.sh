cho=1
while(($cho==1))
do
echo -e "enter the choice\n 1.addition 2.subtraction 3.multiply 4.division"
read ch
echo "enter two numbers"
read num1
read num2
case $ch in
   1) sum=$(($num1+$num2))
      echo "sum=$sum";;
   2) sub=$(($num1-$num2))
      echo "diffrence=$sub";;
   3) mul=$(($num1*$num2))
       echo "product=$mul";;
   4) div=$(($num1/$num2))
       echo "Quotient=$div";;
   *) echo "wrong choice";;
esac
echo "To continue press 1 else 0 "
read cho
done 
