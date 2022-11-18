
/**
 * \brief Dynamic queue class
 * \tparam T Template value
 */
template <class T>
class DynamicTemplateQueue
{
	/**
	 * \brief Queue nodes
	 */
	struct QueueNode
	{
		T value;
		QueueNode *next;
		QueueNode(T value1, QueueNode* next1 = nullptr)
		{
			value = value1;
			next = next1;
		}
	};

	/**
	 * \brief Front of the queue
	 */
	QueueNode *front;

	/**
	 * \brief Back of the queue
	 */
	QueueNode *rear;
public:
	/**
	 * \brief Constructor
	 */
	DynamicTemplateQueue();

	/**
	 * \brief Destructor
	 */
	~DynamicTemplateQueue();

	/**
	 * \brief Adds value to the back of the queue
	 */
	void enqueue(T);

	/**
	 * \brief Removes value from the back of the queue
	 */
	void dequeue(T &);

	/**
	 * \brief Checks if a queue is empty
	 * \return Returns true if queue is empty, false if not empty
	 */
	bool isEmpty() const;

	/**
	 * \brief Clears a queue
	 */
	void clear();
};