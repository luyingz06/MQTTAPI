# MQTTAPI

This is a MQTT API.

It contains two ROS packages: mqtt_integration and interfaces.

In mqtt_integration, there are two ROS nodes named rn1_node.py and rn2_node.py. rn1 node publish a custom ROS message to topic mission and rn2 node subscribe to it and prints out the topic.

In interfaces/msg, there is a custom msg file called MissionMessage.msg.

## How to run

Open terminal in ros2_ws directory and run following commands:

```
sudo pip3 install paho-mqtt

colcon build

source install/setup.bash
```

Open tmux into two windows and run the commands in seperate windows:

```
ros2 run mqtt_integration rn1_node

ros2 run mqtt_integration rn2_node
```

You can also open another window to see the running nodes, topics and other info:

```
ros2 node list

ros2 topic list

# there should a customed topic called "/mission", you can run:

ros2 topic echo /mission

```