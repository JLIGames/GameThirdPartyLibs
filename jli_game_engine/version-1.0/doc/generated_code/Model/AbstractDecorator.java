
import java.util.*;

/**
 * 
 */
public abstract class AbstractDecorator {

	/**
	 * 
	 */
	public AbstractDecorator() {
	}

	/**
	 * 
	 */
	private btAlignedObjectArray<AbstractObject*> children;

	/**
	 * 
	 */
	private AbstractObject* parent;

	/**
	 * @return
	 */
	public AbstractObject* getParent() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public const AbstractObject * getParent() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public bool hasParent() {
		// TODO implement here
		return null;
	}

	/**
	 * @param AbstractObject*parent 
	 * @return
	 */
	public void setParent(void AbstractObject*parent) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public void removeParent() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public bool removeFromParent() {
		// TODO implement here
		return null;
	}

	/**
	 * @param AbstractObject* 
	 * @return
	 */
	public bool hasChild(void AbstractObject*) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public bool hasChildren() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const u32 
	 * @return
	 */
	public AbstractObject* getChild(void const u32) {
		// TODO implement here
		return null;
	}

	/**
	 * @param AbstractObject*
	 */
	public void addChild(void AbstractObject*) {
		// TODO implement here
	}

	/**
	 * @param const u32 
	 * @return
	 */
	public void removeChild(void const u32) {
		// TODO implement here
		return null;
	}

	/**
	 * @param AbstractObject* 
	 * @return
	 */
	public void removeChild(void AbstractObject*) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public void removeChildren() {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public u32 children() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const u32 
	 * @return
	 */
	public void applyChild(void const u32) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public void applyChildren() {
		// TODO implement here
		return null;
	}

}