using UnityEngine;
using Vuforia;

public class TouchObjectGincana : MonoBehaviour
{
	/// <summary>
	/// Esse codigo e do vuforia so fiz umas alteraçoes
	/// </summary>
	public bool locked;
	public float cooldown;

	void Start(){
		locked = false;
		PlayerPrefs.SetInt ("quiz",0);
		PlayerPrefs.SetInt ("Time",0);
		cooldown = Time.time;
	}

	void Update () {
		if (Input.GetMouseButtonDown(0)){ // if left button pressed...
			Ray ray =Camera.main.ScreenPointToRay(Input.mousePosition);
			RaycastHit hit;
			if (Physics.Raycast(ray, out hit)){

				//Começa aqui
				//Se tocar no bau ele vai verificar o que tem no bau

				if(hit.collider.tag=="Bau"&&PlayerPrefs.GetInt("quiz")==0&&PlayerPrefs.GetInt("Time")==0){
					if(cooldown<Time.time){
						cooldown=Time.time+2;
					switch(PlayerPrefs.GetInt(int.Parse(hit.collider.transform.parent.name).ToString())){
					//Ele abre o primeiro e tranca
					case 0:
						//Bau fechado
						if(locked==false){

							PlayerPrefs.SetInt(int.Parse(hit.collider.transform.parent.name).ToString(),1);
							locked=true;
							GameObject obj=hit.collider.gameObject;
							obj.GetComponent<Animator>().SetTrigger("Change");
							obj.GetComponent<BauCode>().Sound();
							}
						
						break;
					//Ele so vai poder abrir o que tiver com 1 que so sera o proximo
					case 1:
						//Bau aberto PS:impossibilita o uso dos outros
						PlayerPrefs.SetInt(int.Parse(hit.collider.transform.parent.name).ToString(),1);
						locked=true;
						GameObject obttest=hit.collider.gameObject;
						obttest.GetComponent<Animator>().SetTrigger("Change");
						obttest.GetComponent<BauCode>().Sound();
						break;
					//Mostra que ele acertou
					case 2:
						//Bau acertou
						Debug.Log("Voce ja acertou");
						break;
					//Mostra que ele errou
					case 3:
						//Bau errou
						Debug.Log("Voce ja errou");
						break;
					}
                    }
                    else
                    {
                        Sound_Manager.Instance.PlayOneShot("BauErrado");
                    }
				}

				if(hit.collider.tag == "teste")
				{
					GameObject obj=hit.collider.gameObject;
					obj.GetComponent<Animator>().SetTrigger("Change");
				}
				if(hit.collider.tag == "testeDavi")
				{
					GameObject obj=hit.collider.gameObject;
					obj.GetComponent<Animation>().Stop();
				}
			}
		}
	}
}
