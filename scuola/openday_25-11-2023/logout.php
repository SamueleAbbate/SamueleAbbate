<?php
session_start();

// Rimuove tutte le variabili di sessione
session_unset();

// Distrugge la sessione
session_destroy();

// Reindirizza alla pagina di login o ad altra pagina desiderata
header("Location: login.php");
exit();
?>
