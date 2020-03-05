<?php
	$conn = mysqli_connect("localhost","root","","pracs");
	if($conn->connect_error){
		die("Connection error");
	}
	if(isset($_POST['name'])){
		$sql = "SELECT * FROM details WHERE name='".$_POST['name']."'";
		$result = $conn->query($sql);
		if($result->num_rows > 0){
			while($row = $result->fetch_assoc()){
				echo "Name : ".$row['name']."\nAge : ".$row['age'];
			}
		}else{
			echo "No Result";
		}
	}else{
		echo "Enter a name please.";
	}

	mysqli_close($conn);

?>
<!DOCTYPE html>
<html>
<head>
<title></title>
</head>
<body>

	<form method="POST" action="exp18search.php">
		<input type="text" name="name">
		<input type="submit" value="Find Details">
	</form>
</body>
</html>