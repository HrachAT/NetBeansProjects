function main() {
    console.log("Welcom calculatrice");
    afficheur = "";
    $(".btn").click(function () {
        touche = $(this).text();
        console.log(touche);
        
        switch (touche){
            case "×":
                touche = "*";
                break;
            case "÷":
                touche = "/";
                break;
            case "−":
                touche = "-";
                break;
            case "AC" : 
                afficheur = ""; 
                touche = ""; 
                break;
            case "=" :
                afficheur = eval(afficheur);
                touche = "";
                break;
        } 
        afficheur += touche;
        $("#display").val(afficheur);
    });
}
$(document).ready(main);
