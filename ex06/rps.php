<?php
$user = readline("Choose rock, paper, or scissors: ");
$computer = rand(1, 3);

if ($computer == 1)
    $computer = "rock";
else if ($computer == 2)
    $computer = "paper";
else
    $computer = "scissors";
    
function game($computer, $user)
{
    if($computer == $user)
    {
       return ("Even result! the computer chose ${computer}");
    }
    else if ($user == "rock")
    {
        if($computer == "paper")
            return ("Sorry, you lost. The computer chose paper");
        else
            return ("Congratulations! You won! The computer chose scissors");
    }
    else if ($user == "paper")
    {
        if ($computer == "scissors")
            return ("Sorry, you lost. The computer chose scissors");
        else
            return ("Congratulations! You won! The computer chose rock");
    }
    else if ($user == "scissors")
    {
        if ($computer == "rock")
            return ("Sorry, you lost. The computer chose rock");
        else
            return ("Congratulations! You won! The computer chose paper");
    }
    else
        return ("Please insert a valid answer!");
}

$sol = game($computer, $user);
echo $sol;

?>
