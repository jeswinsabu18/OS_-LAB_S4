echo "enter the limit"
read limit
x=0
y=1
echo " fibonacci series:"
echo "$x"
echo "$y"
for((i=0;i<limit;i++))
do
z=$(($x+$y))
echo "$z"
x=$y
y=$z
done
