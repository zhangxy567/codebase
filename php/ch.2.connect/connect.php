<?php 
$servername = "localhost";
$username = "rst";
$password ="root"
//创建链接
$conn = mysqli_connect($servername ,
$username ,$password )

//检测链接
if(!conn){
    die("链接失败".mysqli_connect_error());
}
echo "链接成功";

//关闭
mysqli_close($conn);
?>