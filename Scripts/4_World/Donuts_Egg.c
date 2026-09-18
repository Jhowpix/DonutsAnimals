class Donuts_Egg : EasterEgg
{
    protected bool m_WasSpawned = false;
    ref Timer m_Timer;

    void Donuts_Egg()
    {
        m_Timer = new Timer(CALL_CATEGORY_SYSTEM);

        SetEventMask(EntityEvent.SIMULATE);
    }

    void EOnSimulate(IEntity owner, float dt)
    { 
        vector velocity = GetVelocity(this);
        // Detecta quando o ovo para

       if (velocity.Length() < 0.1 && !m_WasSpawned)
        {
            m_WasSpawned = true;
            SEffectManager.PlaySound("Donuts_Egg_SoundSet", GetPosition());
            m_Timer.Run(3.0,this,"SpawnChicken");
          
            
        }
    }
    void SpawnChicken()
    {
        if (!this || GetHierarchyParent())
        {
            m_WasSpawned = false; // Reseta para tentar de novo se jogado após o fail
            SetEventMask(EntityEvent.SIMULATE);
            return;
        }

        vector pos = GetPosition();
        pos[1] = GetGame().SurfaceY(pos[0], pos[2]);

        EntityAI chick = EntityAI.Cast(GetGame().CreateObject("Donuts_Chick", pos + "0 0.2 0", false, true, true));

        SEffectManager.PlaySound("Donuts_Chick_SoundSet", GetPosition());

        GetGame().ObjectDelete(this);
       
    }
}