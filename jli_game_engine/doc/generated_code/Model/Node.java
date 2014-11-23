
import java.util.*;

/**
 * 
 */
public class Node extends AbstractFactoryObject {

	/**
	 * 
	 */
	public Node() {
	}

	/**
	 * 
	 */
	public char* name;

	/**
	 * 
	 */
	private Light light;

	/**
	 * 
	 */
	private Camera camera;

	/**
	 * 
	 */
	private Geometry geometry;

	/**
	 * 
	 */
	private StateMachine stateMachine;

	/**
	 * Bitmask used by Camera and Light. If this node is in the same category as the Camera, the camera could draw this node. If this node is in the same category as the Light, the light could be projected onto this node.
	 */
	private u32 categoryBitMask;

	/**
	 * 
	 */
	private btAlignedObjectArray<ParticleEmitter*> particleEmitterList;

	/**
	 * 
	 */
	private btTransform* transform;

	/**
	 * 
	 */
	public PhysicsBody physicsBody;

	/**
	 * 
	 */
	public PhysicsField physicsField;

	/**
	 * @param ParticleEmitter* 
	 * @return
	 */
	public void addParticleEmitter(void ParticleEmitter*) {
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
	 * @return
	 */
	public btTransform* getTransform() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const btTransform & 
	 * @return
	 */
	public void setTransform(void const btTransform &) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public btVector3 getPosition() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const btVector3 & 
	 * @return
	 */
	public void setPosition(void const btVector3 &) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public btVector3 getRotation() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const btVector3 & 
	 * @return
	 */
	public void setRotation(void const btVector3 &) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public btVector3 getEulerAngles() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const btVector3 & 
	 * @return
	 */
	public void setEulerAngles(void const btVector3 &) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public btQuaternion getOrientation() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const btQuaternion & 
	 * @return
	 */
	public void setOrientation(void const btQuaternion &) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public btVector3 getScale() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const btVector3 & 
	 * @return
	 */
	public void setScale(void const btVector3 &) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public btVector3 getPivot() {
		// TODO implement here
		return null;
	}

	/**
	 * @param const btVector3 & 
	 * @return
	 */
	public void setPivot(void const btVector3 &) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public btTransform getWorldTransform() {
		// TODO implement here
		return null;
	}

	/**
	 * @param bool hide  
	 * @return
	 */
	public void enableHidden(void bool hide ) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public bool isHidden() {
		// TODO implement here
		return null;
	}

	/**
	 * @param float opacity 
	 * @return
	 */
	public void setOpacity(void float opacity) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public float getOpacity() {
		// TODO implement here
		return 0.0f;
	}

	/**
	 * @param const char * 
	 * @return
	 */
	public void setName(void const char *) {
		// TODO implement here
		return null;
	}

	/**
	 * @return
	 */
	public const char* getName() {
		// TODO implement here
		return null;
	}

}