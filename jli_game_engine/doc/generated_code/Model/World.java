
import java.util.*;

/**
 * This class will hold the singletons for the game world.
 */
public class World extends AbstractSingleton {

	/**
	 * This class will hold the singletons for the game world.
	 */
	public World() {
	}

	/**
	 * 
	 */
	private WorldSound worldSound;

	/**
	 * 
	 */
	private StateMachine worldStateMachine;

	/**
	 * 
	 */
	private WorldLuaVirtualMachine worldLuaVirtualMachine;

	/**
	 * 
	 */
	private WorldObjectFactory worldObjectFactory;

	/**
	 * 
	 */
	private Timer worldTimer;

	/**
	 * 
	 */
	private Scene* currentScene;

	/**
	 * @return
	 */
	public WorldSound getSound() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public StateMachine getStateMachine() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public WorldLuaVirtualMachine getLuaVM() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public WorldObjectFactory getFactory() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public Timer getTimer() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public Scene* getCurrentScene() {
		// TODO implement here
		return null;
	}

	/**
	 * @param Scene* 
	 * @return
	 */
	public void setCurrentScene(void Scene*) {
		// TODO implement here
		return null;
	}

}