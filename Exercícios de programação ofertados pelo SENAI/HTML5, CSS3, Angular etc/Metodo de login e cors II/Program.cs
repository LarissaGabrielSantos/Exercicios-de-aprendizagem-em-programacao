using Exo.WebApi.Contexts;
using Exo.WebApi.Repositories;
using Microsoft.Extensions.Options;
using Microsoft.IdentityModel.Tokens;

var builder = WebApplication.CreateBuilder(args);

builder.Services.AddScoped<ExoContext, ExoContext>();
builder.Services.AddControllers();

builder.Services.AddAuthentication(option =>
{
    options.DefaultAuthenticateScheme = "JwtBearer";
    options.DefaultChallengeScheme = "JwtBearer";
});
.AddJwtBearer ("JwtBearer", options =>
{
    options.TokenValidationParameters = new TokenValidationParameters
    {
        validateIssuer = true,
        validateAudience = true,
        validateLifeTime = true,
        IssuerSigningKey = new SymmetricSecurityKey(System.Text.Encoding.UTF8.GetBytes("exoapi-chave-autenticacao")),
        ClockShew = TimeSpan.FromMinutes(30),
        ValidIssuer="exoapi.webapi",
        ValidAudience = "exoapi.webapi"
    };
});
builder.Services.AddTransient<ProjetoRepository, ProjetoRepository>();
builder.Services.AddTransient<UsuarioRepository, UsuarioRepository>();

var app = builder.Build();

app.UseRouting();
app.UseAuthentication();
app.UseAuthorization();

app.UseEndpoints(endpoints =>
{
    endpoints.MapControllers();
});

app.Run();
