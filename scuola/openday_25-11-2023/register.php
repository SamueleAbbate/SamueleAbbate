<link rel="stylesheet" type="text/css" href="style.css" />
<html>
<head>
    <title>Registrati</title>
</head>
<body>
<!--NAVBAR -->
    <ul>
    <li><a href="./">Home</a></li>
    <li><a href="./register.php">Registrati</a></li>
    <li><a href="./login.php">Accedi</a></li>
   <?php
   
    session_start();
    if (isset($_SESSION['username'])){
        $username = $_SESSION['username'];
        echo '<li style="float:right"><a class="active" href="./logout.php">'. htmlspecialchars($username) .' Esci</a></li>';
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

// Check if the user has submitted the form
if (isset($_POST['submit'])) {
    // Get the form data
    $username = mysqli_real_escape_string($conn, $_POST['username']);
    $password = mysqli_real_escape_string($conn, $_POST['password']);
    $password_confirm = mysqli_real_escape_string($conn, $_POST['password_confirm']);

    // Validate the form data
    if ($password != $password_confirm) {
        echo 'le password non corrispondono';
    }else{
        $query = "INSERT INTO utenti (nome_utente, password) VALUES ('$username', '$password')";
        if (mysqli_query($conn, $query)) {
            // Redirect to login page
            header('Location: login.php');
            exit;
        } else {
            echo 'Nome utente giá in uso da un altro studente.';
        }
    }
    
}

// Close the database connection
mysqli_close($conn);
?>
<center> 
    <h3>REGISTRATI</h3>
   <form method="post" action="">
        <label for="username">Nome e Cognome:</label><br>
        <input type="text" id="username" name="username" required>
        <br>
        <label for="password">Password:</label><br>
        <input type="password" id="password" name="password" required>
        <br>
        <label for="confirm_password">Conferma Password:</label><br>
        <input type="password" id="password_confirm" name="password_confirm" required>
        <br><br>
        <button type="submit" name="submit">Registrati</button>
    </form>
</center>
</html>
