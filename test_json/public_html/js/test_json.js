$(document).ready(function () {
    var objectJson = {
        "nom": "Doe",
        "prenom": "John",
        "estMembre": true,
        "age": 25,
        "adresse": {
            "rue": "123 rue de la République",
            "ville": "Paris",
            "codePostal": "75001"
        },
        "numerosDeTelephone": [
            {
                "type": "domicile",
                "numero": "0123456789"
            },
            {
                "type": "mobile",
                "numero": "0612345678"
            }
        ]
    };
    console.log(objectJson.age);    
    console.log(objectJson.adresse);
    console.log(objectJson.numerosDeTelephone);
    console.log(objectJson.numerosDeTelephone[0]);
    $("#nom").text(objectJson.nom);
    $("#rue").text(objectJson.adresse.rue);
    $("#telmob").text(objectJson.numerosDeTelephone[1].numero);
});
