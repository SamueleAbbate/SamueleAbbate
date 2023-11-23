<link rel="stylesheet" type="text/css" href="style.css" />
<html>
<head>
  <title>Ciao!</title>
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

<h1>
<center>
    CIAO <?php 
    
    if (isset($_SESSION['username'])){
      echo htmlspecialchars($username);
    }else{
        echo 'STUDENTE';
    }?>
    BENVENUTO ALL'OPEN DAY, TI TROVI NELLA PAGINA PRINCIPALE
</center>
</h1>
</body>
</html>
