<html>
<title> calcccccc </title>
<head>
</head>
<body>
<form method=POST action=14.php>
Enter first number: <input type="text" name="first" required ><br><br>
Enter second number: <input type="text" name="second" required ><br><br> 
					<input type="submit" value="+" name="Add" />
					<input type="submit" value="-" name="Add" />
					<input type="submit" value="*" name="Add" />
					<input type="submit" value="/" name="Add" />


</form>
</body>
</html>
<?php
if(isset($_POST['first'])){
$num1=$_POST['first'];
$num2=$_POST['second'];	
$p=$_POST['Add'];

if($p=='+')
{
	echo +$num1 + +$num2;	
}
else if($p=='-')
{
	echo $num1 - $num2;	
}
else if($p=='*')
{
	echo $num1 * $num2;	
}
else if($p=='/')
{
	echo $num1/$num2;	
}

	
}


?>

