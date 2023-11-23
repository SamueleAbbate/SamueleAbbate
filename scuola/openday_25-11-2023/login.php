<link rel="stylesheet" type="text/css" href="style.css" />
<html>
<head>
  <title>Accedi</title>
</head>
<body>
<!--NAVBAR -->
    <ul>
    <li><a href="./">Home</a></li>
    <li><a href="./register.php">Registrati</a></li>
    <li><a href="./login.php">Accedi</a></li>
   <?php
   if (isset($_SESSION['username'])){
    $username = $_SESSION['username'];
    echo $username . '<li style="float:right"><a class="active" href="/logout.php">Log Out</a></li>';
   }

    ?>
    </ul>
    <br>
<!--NAVBAR -->

<?php
// Set up database connection
$host = 'localhost';
$user = 'root';
$password = '';
$dbname = 'openday';

$conn = mysqli_connect($host, $user, $password, $dbname);
if (!$conn) {
    die('Error connecting to database: ' . mysqli_connect_error());
}

// Check if the user has submitted their details
if (isset($_POST['submit'])) {
    // Get the username and password from the form
    $username = mysqli_real_escape_string($conn, $_POST['username']);
    $password = mysqli_real_escape_string($conn, $_POST['password']);

    // Query the database to check if the user exists
    $query = "SELECT * FROM utenti WHERE nome_utente = '$username' AND password = '$password'";
    $result = mysqli_query($conn, $query);
    if ($result) {
      if (mysqli_num_rows($result) > 0) {
          // User exists, set session variables and redirect to dashboard
          session_start();
          $_SESSION['username'] = $username;
          header('Location: index.php');
          exit;
      } else {
          // User doesn't exist, show an error message
          echo 'Nome utente o Password non valida';
      }
    } else {
      // Query failed, show an error message
      echo 'Query failed: ' . mysqli_error($conn);
    }
}

// Close the database connection
mysqli_close($conn);
?>
<center>
    <h3>ACCEDI</h3> 
    <form method="post" action="">
        <label for="username">Nome e Cognome:</label><br>
        <input type="text" name="username" id="username" required>
        <br>
        <label for="password">Password:</label><br>
        <input type="password" name="password" id="password" required>
        <br><br>
        <input type="submit" name="submit" value="Accedi">
    </form>
</center>

</body>
</html>