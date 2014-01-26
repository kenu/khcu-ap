package kr.ac.khcu.c06;

import java.util.Collection;

public class Bicycle {
	Collection<String> c;
	int cadence;
	int gear;
	int speed;
	
	void speedUp(int value) {
		this.speed += value;
	}
	
	void applyBrake(int value) {
		this.speed -= value;
	}

	@Override
	public String toString() {
		return "Bicycle [cadence=" + cadence + ", gear=" + gear + ", speed="
				+ speed + "]";
	}
	
}
