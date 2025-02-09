import pika

connection = pika.BlockingConnection(
    pika.ConnectionParameters(host='localhost'))
channel = connection.channel()

channel.queue_declare(queue='BCMQ')

def callback(ch, method, properties, body):
    print("recieved %r" % body)
    
channel.basic_consume(
    queue='BCMQ', on_message_callback = callback, auto_ack=True)
    
print(' [*] waiting for message. To exit press CTRL+C')
channel.start_consuming()
