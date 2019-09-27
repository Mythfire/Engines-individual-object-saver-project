using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
public class SpriteDropper : MonoBehaviour
{


    const string SpriteDropDLL = "Unity_Sprite_Drop_And_Save";

    [DllImport(SpriteDropDLL)]
    public static extern bool  save (float spriteX, float spriteY);

    [DllImport(SpriteDropDLL)]
    public static extern Vector2  replace ();


    // Start is called before the first frame update
    void Start()
    {
        Debug.Log(replace().x);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Q))
        { save ( this.transform.position.x, this.transform.position.y ); }

        if (Input.GetKeyDown(KeyCode.E))
        { this.transform.position = replace(); }

        //let our monster get moved around by the standard wasd inputs.
        transform.position += new Vector3(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical")) * Time.deltaTime; 

        
    }
}
