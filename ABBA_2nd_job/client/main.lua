RegisterNetEvent("dark_items:openHypnonema")
AddEventHandler(
    "dark_items:openHypnonema",
    function()
        ExecuteCommand("hypnonema")
    end
)

RegisterNetEvent("dark_items:blackout")
AddEventHandler(
    "dark_items:blackout",
    function()
        SetArtificialLightsState(true)
        print("OFF")
        Citizen.Wait(45000)
        SetArtificialLightsState(false)
        print("ON")
    end
)
