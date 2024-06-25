//botão voltar ao topo - efeito

function topo(){
    window.scrollTo(
        {
            top:0,
            left:0,
            behavior: 'smooth'

        }

    )
}

//Validação de Login

function login(){

    var logado = 0;
    var usuario = document.getElementById("usuario").value;
    var senha = document.getElementById("senha").value;
    
    if (usuario == 'admin' && password == 'senha'){
        window.location = "index.html";
        logado = 1;
    }
    
    if(logado == 0) {
        alert("Email e/ou Senha incorreto(s). Tente novamente");
    }
}
    
//Ativar alert no botão cadastrar

function cadastro() {
    alert("Cadastrado com sucesso.");
    window.location.href = "index.html";
}

