g++ gen.cpp -o gen
g++ Main.cpp -o Main
g++ main.cpp -o main
echo Hi > 7
echo nice code M.Amin > 8
echo realy hard problem it was > 9
let " j = 100 "
let " l = 1 "
let " r = $j "
while [ $l + 1 < $r ]
do
  ./gen  $i $j > 1
  ./Main < 1 > 2
  ./main < 1 > 3
  diff 2 3 > 4
  let " diff = $? "
  if [ $diff != 0 ]
  then
    echo
    echo Test :
    cat < 1
    echo
    echo
    echo Judge output :
    cat < 2
    echo
    echo
    echo Your output :
    cat < 3
    echo
    echo
    exit
  fi
  let "l++"
done
