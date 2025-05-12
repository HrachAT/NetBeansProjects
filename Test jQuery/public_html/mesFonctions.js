$(document).ready(function()
{
    // Ce code s'exécutera une fois que le DOM est prêt à être manipulé.
    console.log("Le document est prêt !");
    $('div').hide();
    
    //si on click sur un paragraphe
    //afficher toutes les div
    $("p").click(function (){
        console.log("in event");
        $('div').show();
    })
});
