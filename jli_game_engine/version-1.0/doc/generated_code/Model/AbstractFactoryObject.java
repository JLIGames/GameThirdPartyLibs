
import java.util.*;

/**
 * 
 */
public abstract class AbstractFactoryObject extends AbstractObject {

	/**
	 * 
	 */
	public AbstractFactoryObject() {
	}

	/**
	 * @param bool shared  
	 * @return
	 */
	public AbstractFactoryObject* create(void bool shared ) {
		// TODO implement here
		return null;
	}

	/**
	 * @param bool shared    
	 * @return
	 */
	public AbstractFactoryObject* clone(void bool shared   ) {
		// TODO implement here
		return null;
	}

	/**
	 * @param AbstractFactoryObject* 
	 * @return
	 */
	public bool destroy(void AbstractFactoryObject*) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public abstract const char * getName();

	/**
	 * @return
	 */
	public abstract u32 getType();

}