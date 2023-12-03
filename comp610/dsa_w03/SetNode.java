package dsa_w03;

/**
 *
 * @author coriandar
 */
public class SetNode<E extends Comparable> implements Comparable<SetNode> {

    public E data;
    public SetNode<E> prev;
    public SetNode<E> next;
    
    @Override
    public int compareTo (SetNode Enode) {
        return this.data.compareTo(Enode.data);
    }

}
