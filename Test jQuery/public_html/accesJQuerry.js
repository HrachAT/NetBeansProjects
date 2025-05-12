$(document).ready(function ()
{
    $("#duTexte").text("un autre texte");
    $(":button").val("un bouton");
});
function changerCouleur()
{
    $(this).css("background-color", "red");
    $("form").append("<input type=\"button\" value=\"3\"/>");
}

function afficherValeur()
{
    var valBouton = $(this).val();
    $("#duTexte").css("background-color", "white");
    $("#duTexte").css("color", "red");
    $("#duTexte").text(valBouton);
    console.log(valBouton);
}

$(document).ready(function ()
{
    $("#duTexte").click(changerCouleur);
    //$(":button").mouseover(afficherValeur);
    $(document).on("mouseover", ":button", afficherValeur);
});