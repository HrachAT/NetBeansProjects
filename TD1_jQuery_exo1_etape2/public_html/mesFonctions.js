console.log("Welcome");

$(document).ready(function () {
    $("#egale").click(function () {
        valeur1 = parseFloat($("#val1").val());
        valeur2 = parseFloat($("#val2").val());
        console.log(valeur1);
        console.log(valeur2);
        $("#resultat").val(valeur1 * valeur2);
    });
});