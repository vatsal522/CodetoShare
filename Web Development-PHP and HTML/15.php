<html>
<title> PHP FORM VALUES</title>
<head>

</head>
<body>
<form method=POST action=15.php>
Username: <input type="text" name="uname" placeholder="naam dalo" required">&nbsp;
Password: <input type="text" name="pwd" placeholder="helo8634" required">&nbsp;
<input type="submit" name="submit" placeholder="Submit">
<br><br>
</form>
</body>
</html>

<?php
if(isset($_POST['uname']))
{
$a="";
$b="";
$a=$_POST['uname'];
$b=$_POST['pwd'];
echo $a."<br>";
echo $b;
}
?>
