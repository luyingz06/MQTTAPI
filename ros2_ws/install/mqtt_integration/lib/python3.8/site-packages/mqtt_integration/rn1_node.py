import rclpy
from rclpy.node import Node
from interfaces.msg import MissionMessage  # Import the custom message

class RN1Node(Node):
    def __init__(self):
        super().__init__('rn1_node')  # Node name
        self.publisher_ = self.create_publisher(MissionMessage, 'mission', 10)  # Topic and QoS
        self.timer = self.create_timer(1.0, self.publish_mission)  # Timer to call publish_mission every second
        self.get_logger().info('RN1Node has started publishing messages.')

    def publish_mission(self):
        # Creating the message
        msg = MissionMessage()
        msg.mission_id = 1  # Set mission ID
        msg.details = "Sample mission details"  # Mission details
        self.publisher_.publish(msg)  # Publish the message
        self.get_logger().info(f'Published mission: {msg.mission_id} - {msg.details}')

def main(args=None):
    rclpy.init(args=args)  # Initialize ROS 2
    node = RN1Node()  # Create the node
    rclpy.spin(node)  # Keep the node running
    rclpy.shutdown()  # Shutdown when done

if __name__ == '__main__':
    main()

