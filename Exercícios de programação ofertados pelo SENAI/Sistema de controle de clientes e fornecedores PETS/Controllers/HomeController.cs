using System.Diagnostics;
using Microsoft.AspNetCore.Mvc;
using PETS.Models;

namespace PETS.Controllers;

public class HomeController : Controller
{
    private readonly ILogger<HomeController> _logger;

    public HomeController(ILogger<HomeController> logger)
    {
        _logger = logger;
    }

    public IActionResult Index()
    {
        Cliente cliente1 = new Cliente(01, "Lisa B. Flesch", "157.002.850-15", "lisa_flesch@email.com", "Hachi");
        Cliente cliente2 = new Cliente(02, "Carla Linhares", "267.291.850-31", "ca.linhares@email.com", "Derek");
        Cliente cliente3 = new Cliente(03, "Yasmim Guzman Oliveira", "036.985.663-25", "mimi_oliveira15@email.com", "Fortinbraz");
        Cliente cliente4 = new Cliente(04, "Gabriel da Cruz", "256.208.360-10", "gabriel_dacruz@email.com", "Bethoven");
        Cliente cliente5 = new Cliente(05, "Matheus M. De Farias", "630.598.366-52", "math.farias@email.com", "Jake Peralta");
        Cliente cliente6 = new Cliente(06, "Maria Nunes", "425.073.060-33", "nunes.ma@email.com", "Frajola");
        Cliente cliente7 = new Cliente(07, "José Almeida", "889.028.145-00", "josealmeida123@email.com", "Lili");
        Cliente cliente8 = new Cliente(08, "Nicholas Bourbaki", "171.793.950-30", "nicobourbaki@email.com", "Theo");
        Cliente cliente9 = new Cliente(09, "Kevin Mascarenhas", "585.472.420-07", "kmascarenhas555@email.com", "Amora");
        Cliente cliente10 = new Cliente(10, "Luisa Teles", "639.895.560-96", "luteles@email.com", "Pipoca");

        List<Cliente> listaClientes = new List<Cliente>();
        listaClientes.Add(cliente1);
        listaClientes.Add(cliente2);
        listaClientes.Add(cliente3);
        listaClientes.Add(cliente4);
        listaClientes.Add(cliente5);
        listaClientes.Add(cliente6);
        listaClientes.Add(cliente7);
        listaClientes.Add(cliente8);
        listaClientes.Add(cliente9);
        listaClientes.Add(cliente10);

        ViewBag.listaClientes = listaClientes;

        fornecedor fornecedor1 = new fornecedor(01,"AnyPETS", "15.555.136/0001-96", "anypetssa@buytopets.com.br");
        fornecedor fornecedor2 = new fornecedor(02,"Health dos Pets", "94.868.757/0001-15", "healthdospets@buytopets.com.br");
        fornecedor fornecedor3 = new fornecedor(03,"Cia dos bichinhos", "88.868.336/0001-99", "ciadosbichinhos@buytopets.com.br");
        fornecedor fornecedor4 = new fornecedor(04,"Talk dogs", "13.664.636/0001-29", "talkdogstalk@buytopets.com.br");
        fornecedor fornecedor5 = new fornecedor(05,"Furlan Fornecedores", "63.444.896/0001-10", "furlansfornec.pets@buytopets.com.br");
        List<fornecedor> listaFornecedores = new List<fornecedor>();
        listaFornecedores.Add(fornecedor1);
        listaFornecedores.Add(fornecedor2);
        listaFornecedores.Add(fornecedor3);
        listaFornecedores.Add(fornecedor4);
        listaFornecedores.Add(fornecedor5);
        
        ViewBag.listaFornecedores = listaFornecedores;
        
        return View();
    }

    public IActionResult Privacy()
    {
        return View();
    }

    [ResponseCache(Duration = 0, Location = ResponseCacheLocation.None, NoStore = true)]
    public IActionResult Error()
    {
        return View(new ErrorViewModel { RequestId = Activity.Current?.Id ?? HttpContext.TraceIdentifier });
    }
}
