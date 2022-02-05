ESX = nil

RegisterNetEvent('esx:setJob')
AddEventHandler('esx:setJob', function(job)
	ESX.PlayerData.job = job
end)

TriggerEvent(
  "esx:getSharedObject",
  function(obj)
    ESX = obj
  end
)



---------------------------------------------GALAXY-----------------------------
ESX.RegisterUsableItem(
  "galaxy0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("galaxy", 0)
    xPlayer.showNotification("sei dipendente del GALAXY!")
  end
)

ESX.RegisterUsableItem(
  "galaxy1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("galaxy", 1)
    xPlayer.showNotification("sei dipendente del GALAXY!")
  end
)

ESX.RegisterUsableItem(
  "galaxy2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("galaxy", 2)
    xPlayer.showNotification("sei dipendente del GALAXY!")
  end
)

ESX.RegisterUsableItem(
  "galaxy3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("galaxy", 3)
    xPlayer.showNotification("sei dipendente del GALAXY!")
  end
)

ESX.RegisterUsableItem(
  "galaxy4",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("galaxy", 4)
    xPlayer.showNotification("Sei direttore del galaxy!")
  end
)
--------------------------------RONIN-----------------------------
ESX.RegisterUsableItem(
  "ronin0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ronin", 0)
    xPlayer.showNotification("Sei un ronin!")
  end
)

ESX.RegisterUsableItem(
  "ronin1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ronin", 1)
    xPlayer.showNotification("Sei un ronin!")
  end
)

ESX.RegisterUsableItem(
  "ronin2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ronin", 2)
    xPlayer.showNotification("Sei un ronin!")
  end
)

ESX.RegisterUsableItem(
  "ronin3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ronin", 3)
    xPlayer.showNotification("Sei il ronin!")
  end
)
-----------------------------------MEDUZA------------------------
ESX.RegisterUsableItem(
  "meduza0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("meduza", 0)
    xPlayer.showNotification("Sei un dipendente del meduza!")
  end
)
ESX.RegisterUsableItem(
  "meduza1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("meduza", 1)
    xPlayer.showNotification("Sei un dipendente del meduza!")
  end
)
ESX.RegisterUsableItem(
  "meduza2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("meduza", 2)
    xPlayer.showNotification("Sei un dipendente del meduza!")
  end
)

ESX.RegisterUsableItem(
  "meduza3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("meduza", 3)
    xPlayer.showNotification("Sei un dipendente del meduza!")
  end
)

ESX.RegisterUsableItem(
  "meduza4",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("meduza", 4)
    xPlayer.showNotification("Sei direttore del meduza!")
  end
)
-------------------------------------------------------------------

--------------------------BROADWAY---------------------------------
ESX.RegisterUsableItem(
  "broadway0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("broadway", 0)
    xPlayer.showNotification("Sei un dipendente del broadway!")
  end
)

ESX.RegisterUsableItem(
  "broadway1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("broadway", 1)
    xPlayer.showNotification("Sei un dipendente del broadway!")
  end
)

ESX.RegisterUsableItem(
  "broadway2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("broadway", 2)
    xPlayer.showNotification("Sei un dipendente del broadway!")
  end
)

ESX.RegisterUsableItem(
  "broadway3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("broadway", 3)
    xPlayer.showNotification("Sei un dipendente del broadway!")
  end
)

ESX.RegisterUsableItem(
  "broadway4",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("broadway", 4)
    xPlayer.showNotification("Sei direttore del broadway!")
  end
)
---------------------------------------------------------------
--------------------------------CONTINENTAL---------------------
ESX.RegisterUsableItem(
  "continental0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 0)
    xPlayer.showNotification("sei dipendente del continental!")
  end
)
ESX.RegisterUsableItem(
  "continental1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 1)
    xPlayer.showNotification("sei dipendente del continental!")
  end
)
ESX.RegisterUsableItem(
  "continental2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 2)
    xPlayer.showNotification("sei dipendente del continental!")
  end
)
ESX.RegisterUsableItem(
  "continental3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 3)
    xPlayer.showNotification("sei dipendente del continental!")
  end
)
ESX.RegisterUsableItem(
  "continental4",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 4)
    xPlayer.showNotification("sei dipendente del continental!")
  end
)
ESX.RegisterUsableItem(
  "continental5",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 5)
    xPlayer.showNotification("sei dipendente del continental!")
  end
)
ESX.RegisterUsableItem(
  "continental6",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 6)
    xPlayer.showNotification("sei dipendente del continental!")
  end
)
ESX.RegisterUsableItem(
  "continental7",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 7)
    xPlayer.showNotification("sei dipendente del continental!")
  end
)
ESX.RegisterUsableItem(
  "continental8",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("continental", 8)
    xPlayer.showNotification("Sei direttore del continetal!")
  end
)
-----------------------------------------------------------

------------------------------MECCANICO--------------------
ESX.RegisterUsableItem(
  "mecano0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("mecano", 0)
    xPlayer.showNotification("Sei un meccanico!")
  end
)

ESX.RegisterUsableItem(
  "mecano1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("mecano", 1)
    xPlayer.showNotification("Sei un meccanico!")
  end
)

ESX.RegisterUsableItem(
  "mecano2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("mecano", 2)
    xPlayer.showNotification("Sei un meccanico!")
  end
)

ESX.RegisterUsableItem(
  "mecano3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("mecano", 3)
    xPlayer.showNotification("Sei un meccanico!")
  end
)

ESX.RegisterUsableItem(
  "mecano4",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("mecano", 4)
    xPlayer.showNotification("Sei un meccanico!")
  end
)

ESX.RegisterUsableItem(
  "mecano5",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("mecano", 5)
    xPlayer.showNotification("Sei direttore meccanico!")
  end
)


----------------------------BALLAS---------------------
ESX.RegisterUsableItem(
  "ballas0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ballas", 0)
    xPlayer.showNotification("Sei membro dei ballas!")
  end
)

ESX.RegisterUsableItem(
  "ballas1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ballas", 1)
    xPlayer.showNotification("Sei membro dei ballas!")
  end
)

ESX.RegisterUsableItem(
  "ballas2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ballas", 2)
    xPlayer.showNotification("Sei membro dei ballas!")
  end
)

ESX.RegisterUsableItem(
  "ballas3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ballas", 3)
    xPlayer.showNotification("Sei membro dei ballas!")
  end
)

ESX.RegisterUsableItem(
  "ballas4",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ballas", 4)
    xPlayer.showNotification("Sei boss dei ballas!")
  end
)
-------------------BENNY'S---------------------------
ESX.RegisterUsableItem(
  "bennys0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("bennys", 0)
    xPlayer.showNotification("Sei un nuovo dipendente del bennys!")
  end
)

ESX.RegisterUsableItem(
  "bennys1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("bennys", 1)
    xPlayer.showNotification("Sei un dipendente del bennys!")
  end
)

ESX.RegisterUsableItem(
  "bennys2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("bennys", 2)
    xPlayer.showNotification("Sei direttore del bennys!")
  end
)

--------------------------------------------------------------

----------------------------------FRATELLANZA-----------------
ESX.RegisterUsableItem(
  "fratellanza0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("lafratellanza", 0)
    xPlayer.showNotification("Sei membro della fratellanza!")
  end
)

ESX.RegisterUsableItem(
  "fratellanza1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("lafratellanza", 1)
    xPlayer.showNotification("Sei membro della fratellanza!")
  end
)

ESX.RegisterUsableItem(
  "fratellanza2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("lafratellanza", 2)
    xPlayer.showNotification("Sei membro della fratellanza!")
  end
)

ESX.RegisterUsableItem(
  "fratellanza3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("lafratellanza", 3)
    xPlayer.showNotification("Sei membro della fratellanza!")
  end
)

ESX.RegisterUsableItem(
  "fratellanza1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("lafratellanza", 4)
    xPlayer.showNotification("Sei il boss della fratellanza!")
  end
)
------------------------------------------------------------------------

-------------------------------AMBULANZA------------------
ESX.RegisterUsableItem(
  "ambulance0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ambulance", 0)
    xPlayer.showNotification("Sei un paramedico!")
  end
)
ESX.RegisterUsableItem(
  "ambulance1",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ambulance", 1)
    xPlayer.showNotification("Sei un medico!")
  end
)
ESX.RegisterUsableItem(
  "ambulance2",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ambulance", 2)
    xPlayer.showNotification("Sei un medico!")
  end
)

ESX.RegisterUsableItem(
  "ambulance3",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)
    xPlayer.setJob("ambulance", 3)
    xPlayer.showNotification("Sei direttore sanitario!")
  end
)
--------------------------------------------------------

-------------------------CARD_JOB-----------------------------------
ESX.RegisterUsableItem(
  "cardealerluxe0",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)

    if xPlayer.getJob().name == "cardealerluxe"  then

      xPlayer.setJob("corleone", 0)
      xPlayer.showNotification("sei un corleone!")
      
    elseif xPlayer.getJob().name == "corleone" then
      
      xPlayer.setJob("cardealerluxe", 0)
      xPlayer.showNotification("sei del concessionario!")
      
    else
      xPlayer.showNotification("Accesso negato!")
    end
  end
)

ESX.RegisterUsableItem(
  "cardealerluxe5",
  function(source)
    local _source = source
    local xPlayer = ESX.GetPlayerFromId(_source)

    if xPlayer.getJob().name == "cardealerluxe"  then

      xPlayer.setJob("corleone", 5)
      xPlayer.showNotification("sei un corleone!")
      
    elseif xPlayer.getJob().name == "corleone" then
      
      xPlayer.setJob("cardealerluxe", 3)
      xPlayer.showNotification("sei il capo concessionario!")
      
    else
      xPlayer.showNotification("Accesso negato!")
    end
  end
)
