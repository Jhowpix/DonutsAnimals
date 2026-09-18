class Donuts_InjectionHorse : Epinephrine 
{ 
    override void OnApply(PlayerBase player) 
    { 
        // Executa a lógica padrão da Epinefrina 
        super.OnApply(player); if (!player) return; 

        // 1. REGENERAÇÕES (Lado do Servidor) 
        if (GetGame().IsServer()) 
        { 
            // Cura Total: Vida, Sangue e Choque
             player.SetHealth("", "Health", player.GetMaxHealth("", "Health")); 
             player.SetHealth("", "Blood", player.GetMaxHealth("", "Blood")); 
             player.SetHealth("", "Shock", player.GetMaxHealth("", "Shock")); 

             // Status: Energia e Hidratação ao máximo 
             if (player.GetStatEnergy()) player.GetStatEnergy().Set(player.GetStatEnergy().GetMax());
             if (player.GetStatWater()) player.GetStatWater().Set(player.GetStatWater().GetMax()); 
             
             // Remove todos os sangramentos ativos 
             if (player.GetBleedingManagerServer()) player.GetBleedingManagerServer().RemoveAllSources();
         } 

        // 2. SOM (Lado do Cliente) 
        // Dispara o som na posição do player para garantir que toque até o fim 
        if (!GetGame().IsDedicatedServer()) 
        { 
            SEffectManager.PlaySound("Donuts_Horse_SoundSet", player.GetPosition()); 
        } 

    } 
}