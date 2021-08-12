#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Point {
  double latitude;
  double longitude;
};

struct Time {
  int hours;
  int minutes;
  int seconds;
};

struct Statistics {
  Point point;
  double elevation;
  Time time;
};

size_t length;

struct IO {
  void get(Statistics &statistics) {
    cin 
      >> statistics.point.latitude 
      >> statistics.point.longitude
      >> statistics.elevation
      >> statistics.time.hours
      >> statistics.time.minutes
      >> statistics.time.seconds;
  }

  bool isOver(Statistics &statistics) {
    if (
      statistics.point.latitude == -1
      && statistics.point.longitude == -1
      && statistics.elevation == -1
      && statistics.time.hours == -1
      && statistics.time.minutes == -1
      && statistics.time.seconds == -1
    ) {
      return true;
    }

    return false;
  }
};

IO io;

struct Distance {
  double radian(double value) {
    return value * M_PI / 180.0;
  }

  double get(Point initial, Point final) {
    double distanceBetweenLatitudes = 
      radian(final.latitude - initial.latitude);
    double distanceBetweenLogintudes = 
      radian(final.longitude - initial.longitude);

    initial.latitude = radian(initial.latitude);
    final.latitude = radian(final.latitude);

    double a = pow(
      sin(distanceBetweenLatitudes / 2), 2) 
      + pow(sin(distanceBetweenLogintudes / 2), 2) 
      * cos(initial.latitude) 
      * cos(final.latitude);

    return (2 * asin(sqrt(a))) * 6371;
  }

  double getTotal(Statistics statistics[]) {
    double totalDistance = 0;

    for (int i = 0; i < length; i++) {
      if (i != 0)
        totalDistance += get(statistics[i - 1].point, statistics[i].point);
    }

    return totalDistance;
  }
};

Distance pointsDistance;

struct Interval {
  Time get(Time initial, Time final) {
    return {
      hours: final.hours - initial.hours,
      minutes: final.minutes - initial.minutes,
      seconds: final.seconds - initial.seconds,
    };
  }

  Time getTotal(Statistics statistics[]) {
    return get(statistics[0].time, statistics[length - 1].time);
  }

  int getSeconds(Time time) {
    return ((3600 * time.hours) + (60 * time.minutes) + time.seconds);
  }
};

Interval interval;

struct Elevation {
  bool compare(char type, double previous, double current) {
    if (type == 'h' && current > previous) {
      return true;
    }

    if (type == 'l' && current < previous) {
      return true;
    }

    return false;
  }

  double getHighest(Statistics statistics[]) {
    double highest = statistics[0].elevation;

    for (int i = 0; i < length; i++) {
      if (compare('h', highest, statistics[i].elevation)) {
        highest = statistics[i].elevation;
      }
    }

    return highest;
  }

  double getLowest(Statistics statistics[]) {
    double lowest = statistics[0].elevation;

    for (int i = 0; i < length; i++) {
      if (compare('l', lowest, statistics[i].elevation)) {
        lowest = statistics[i].elevation;
      }
    }

    return lowest;
  }
};

Elevation elevation;

struct Speed {
  double get(
    Point initialPoint, 
    Point finalPoint, 
    Time initialTime, 
    Time finalTime
  ) {
    double distance = pointsDistance.get(initialPoint, finalPoint);
    Time timeInterval = interval.get(initialTime, finalTime);

    int timeInSeconds = interval.getSeconds(timeInterval);

    return distance * 1.0 / timeInSeconds;
  }

  double getMaximum(Statistics statistics[]) {
    double maximumSpeed = 0;

    for (int i = 0; i < length; i++) {
      if (i != 0) {
        double speed = get(
          statistics[i - 1].point, 
          statistics[i].point, 
          statistics[i - 1].time, 
          statistics[i].time
        );

        if (speed > maximumSpeed) {
          maximumSpeed = speed;
        }
      }
    }

    return maximumSpeed;
  }

  double getAverage(Statistics statistics[]) {
    double sum = 0;

    for (int i = 0; i < length; i++) {
      if (i != 0) {
        double speed = get(
          statistics[i - 1].point, 
          statistics[i].point, 
          statistics[i - 1].time, 
          statistics[i].time
        );

        sum += speed;
      }
    }

    return sum / (length - 2);
  } 
};

Speed speed;

int main() {
  Statistics statistics[1000];
  length = -1;

  do {
    length++;
    io.get(statistics[length]);
  }
  while (!io.isOver(statistics[length]));

  cout << fixed << setprecision(2);

  double totalDistance = pointsDistance.getTotal(statistics);
  cout << "Distancia total: " << totalDistance << " km" << endl;
  
  Time totalTime = interval.get(statistics[0].time, statistics[length - 1].time);
  cout 
    << "Tempo total decorrido: " 
    << totalTime.hours 
    << ":" << totalTime.minutes
    << ":" << totalTime.seconds 
    << endl;

  double maxiumSpeed = speed.getMaximum(statistics);
  cout << "Velocidade maxima: " << maxiumSpeed << " km/h" << endl;

  double averageSpeed = speed.getAverage(statistics);
  cout << "Velocidade media: " << averageSpeed << " km/h" << endl;

  double highestAltitude = elevation.getHighest(statistics);
  cout << "Maior altitude: " << highestAltitude << " m" << endl;

  double lowerAltitude = elevation.getLowest(statistics);
  cout << "Menor altitude: " << lowerAltitude << " m" << endl;

  return 0;
}