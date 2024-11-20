import rclpy
from rclpy.node import Node
from interfaces.msg import MissionMessage  # Import the custom message

class RN2Node(Node):
    def __init__(self):
        super().__init__('rn2_node')  # Node name
        self.subscription = self.create_subscription(
            MissionMessage,  # Message type
            'mission',  # Topic name
            self.mission_callback,  # Callback to process the message
            10)  # QoS
        self.get_logger().info('RN2Node has started subscribing to messages.')

    def mission_callback(self, msg):
        # Callback function to process the received message
        self.get_logger().info(f'Received mission: {msg.mission_id} - {msg.details}')

def main(args=None):
    rclpy.init(args=args)  # Initialize ROS 2
    node = RN2Node()  # Create the node
    rclpy.spin(node)  # Keep the node running
    rclpy.shutdown()  # Shutdown when done

if __name__ == '__main__':
    main()

