
import java.util.*;

/**
 * 
 */
public class Scene extends AbstractFactoryObject {

	/**
	 * 
	 */
	public Scene() {
	}

	/**
	 * 
	 */
	private Node rootNode;

	/**
	 * 
	 */
	private Camera camera;

	/**
	 * 
	 */
	private Light light;

	/**
	 * 
	 */
	private StateMachine stateMachine;

	/**
	 * 
	 */
	private btAlignedObjectArray<ParticleEmitter*> particleEmitterList;

	/**
	 * 
	 */
	private WorldTransform* worldTransform;

	/**
	 * The background can have geometry of either a Box or Floor
	 */
	private MaterialProperty* background;

	/**
	 * The world physics of the scene.
	 */
	private PhysicsWorld* physicsWorld;

	/**
	 * @param Node* 
	 * @return
	 */
	public void setRootNode(void Node*) {
		// TODO implement here
		return null;
	}

	/**
	 * @param Camera* 
	 * @return
	 */
	public void setCamera(void Camera*) {
		// TODO implement here
		return null;
	}

	/**
	 * @param Light* 
	 * @return
	 */
	public void setLight(void Light*) {
		// TODO implement here
		return null;
	}

	/**
	 * @param StateMachine* 
	 * @return
	 */
	public void setStateMachine(void StateMachine*) {
		// TODO implement here
		return null;
	}

	/**
	 * @param ParticleEmitter * 
	 * @return
	 */
	public void addParticleEmitter(void ParticleEmitter *) {
		// TODO implement here
		return null;
	}

	/**
	 * @param ParticleEmitter* 
	 * @return
	 */
	public void removeParticleEmitter(void ParticleEmitter*) {
		// TODO implement here
		return null;
	}

	/**
	 * @param const ParticleEmitter & 
	 * @return
	 */
	public bool hasParticleEmitter(void const ParticleEmitter &) {
		// TODO implement here
		return null;
	}

	/**
	 * @param WorldTransform* 
	 * @return
	 */
	public void setWorldTransform(void WorldTransform*) {
		// TODO implement here
		return null;
	}

	/**
	 * @param SceneResource *resultData 
	 * @return
	 */
	public bool serialize(void SceneResource *resultData) {
		// TODO implement here
		return null;
	}

}