import java.util.ArrayList;

public class WeatherData implements Subject {
	private ArrayList<Observer> observers;
	private float temp;
	private float humidity;
	private float pressure;

	public WeatherData() {
		observers = new ArrayList<>();
	}

	@Override
	public void register_observer(Observer o) {
		observers.add(o);
	}

	@Override
	public void remove_observer(Observer o) {
		observers.remove(o);
	}

	@Override
	public void notify_observer() {
		for (Observer observer : observers) {
			observer.update(temp, humidity, pressure);
		}
	}

	public void set_measurements(float temp, float humidity, float pressure) {
		this.temp = temp;
		this.humidity = humidity;
		this.pressure = pressure;
		notify_observer();
	}
}