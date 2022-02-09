#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
#include<windows.h>
using namespace std;


int main()
{
string command = "nil";
string answer = "nil";
string system_to_hack = "nil";
int function = 0;
while(function == 0)
{
cout << "to start hacking, your computer must be prepared";
cout << "\nProcced? (y/n)";
cin >> answer;
if(answer == "y" or answer == "yes")
{
cout << "please wait...";
Sleep(1000000);
cout << "\nready to hack";
function = 1;
}
if(answer == "n" or answer == "no")
{
function = -1;
return 0;
}
if(answer != "n" and answer != "no" and answer != "y" and answer != "yes")
{
cout << "Error 404";
cout << "function not found";
}
}
while(function == 1)
{
cout << "\nCommand? ";
cin >> command;
if(command == ".hack")
{
cout << ".hack is a valid command";
cout << "\ninsert the system to hack:";
cin >> system_to_hack;
if(system_to_hack == "roblox")
{
cout << ".hack acessing";
cout << "\n.acess true";
cout << "\n.hack.password.user.acess";
cout << "\n.acess.send_system_ip_adress.acess";
cout << "\n.hack.send_info.ip_to_gateway_457.acess";
cout << "\n.hack.send_info.ip_to_gateway_457";
cout << "\n.acess.builderman.ip_send";
cout << "\n.hack.krnl.exploiter";
cout << "\n.add.delete.all_acess_users.password.send";
cout << "\n.add_virus.memz_trojan.exe.transfer.acess_system.send_ip";
cout << "\n.execute_virus.memz_trojan.exe.transfer_ip_grant_acess.builderman_virus";
cout << "\nacess granted";
cout << "\n.add_component.type=virus.acess";
cout << "\nhacked system";
}
if(system_to_hack == "facebook")
{
cout << ".hack acessing";
cout << "\n.acess true";
cout << "\n.hack_messages.acess.users";
cout << "\n.acess.users.delete_all.send_password.users.acess_profile";
cout << "\n.add_component.virus.transfer.memz_trojan.exe.acess.server.transfer.system_to_server.memz_trojan.exe";
cout << "\nexecute_component.acess.server.execute.memz_trojan.exe.secret_mode=enabled.acess.hack";
cout << "\nadd_component.virus.transfer.youareanidiot.exe.acess_server.transfer_youareanidiot.exe_to_server.secret_mode=disabled";
}
if(system_to_hack == "whatsapp")
{
cout << "\n.hack acessing";
cout << "\n.acess true";
cout << "\n.hack_messages.acess.users";
cout << "\n.acess.users_delete.account.all.send_password.info";
cout << "\n.add_component.virus.memz_trojan.exe.secret_mode=enabled.acess.server.transfer_memz_trojan.exe_to_server";
cout << "\nexecute_component.server.memz_trojan.exe";
cout << "\nhacked system";
}
}
}
}
