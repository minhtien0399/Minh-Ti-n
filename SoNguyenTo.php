<?php
//khai bao dau vao
$a =  readline("Nhap so thu nhat: ");
$b =  readline("Nhap so thu hai: ");

//kiem tra so nguyen to
$tong1 = 0;

//kiem tra so nguyen to
function snt($n){
$squareRoot = sqrt($n);
//

if ($n < 2 ){
return false;

}
for($i=2; $i <= $squareRoot; $i++)
    if($n % $i == 0){
        return false;
    }
return true;
}
//Tong so nguyen to trong khoang $a den $b
for($i = $a; $i <= $b; $i++) {
    if (snt( $i )) {
        $tong1 += $i;
    }
}
echo "\nTong cac so nguyen to $a den $b la : $tong1 \n";
