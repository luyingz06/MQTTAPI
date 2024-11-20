'''
Author: Luying Zhang
Date: Nov 2024
Description: This is a ROS 1 node that publishes messages to the 'mission' topic.
'''

import rclpy
from rclpy.node import Node
from interfaces.msg import MissionMessage

class RN1Node(Node):
    def __init__(self):
        super().__init__('rn1_node') 
        self.publisher_ = self.create_publisher(MissionMessage, 'mission', 10)  # Topic and QoS
        self.timer = self.create_timer(1.0, self.publish_mission)  # Timer to call publish_mission every second
        self.get_logger().info('RN1Node has started publishing messages.')

    def publish_mission(self):
        # Creating the message
        msg = MissionMessage()
        msg.mission_id = 1
        msg.details = "Sample mission details"  # Mission details
        self.publisher_.publish(msg)  # Publish the message
        self.get_logger().info(f'Published mission: {msg.mission_id} - {msg.details}')

def main(args=None):
    # Initialize node
    rclpy.init(args=args)
    node = RN1Node()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

