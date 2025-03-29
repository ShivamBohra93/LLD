public interface Subject {
	public void register_observer(Observer o);
	public void remove_observer(Observer o);
	public void notify_observer();
}