using UnityEngine;
using System.Collections;

public enum MoleState
{
    NONE,
    OPEN,
    IDLE,
    CLOSE,
    CATCH,
    END
}

public class Hole : MonoBehaviour
{
    public MoleState state;
}
