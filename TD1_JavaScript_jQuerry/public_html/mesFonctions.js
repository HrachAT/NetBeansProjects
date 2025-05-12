function multiplication()
{
    //recuperer la valeur du champ ayant pour id val1
    var v1=window.document.getElementById("val1").value;
    //recuperer la valeur du champ ayant pour id val2
    var v2=window.document.getElementById("val2").value;
    //calculer le resultat
    var res=v1*v2;
    //mettre la valeur du résultat dans le champs ayant pour 
    window.document.getElementById("resultat").value=res;
}
function addition()
{
    //recuperer la valeur du champ ayant pour id val1
    var v1=window.document.getElementById("vala").value;
    //recuperer la valeur du champ ayant pour id val2
    var v2=window.document.getElementById("valb").value;
    //calculer le resultat
    var res=parseFloat(v1)+parseFloat(v2);
    //mettre la valeur du résultat dans le champs ayant pour 
    window.document.getElementById("resultatadd").value=res;
}