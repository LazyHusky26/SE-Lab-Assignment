/**
 * @file
 * @brief Time class header
 * @author John Doe <jdoe@example.com>
 * @version 1.0
 * @copyright CC BY-SA or GFDL
 * @sa <a href="https://en.wikipedia.org/wiki/Wikipedia:Copyrights">Wikipedia:Copyrights - Wikipedia</a>
 */

/**
 * Represents a moment of time
 * @author John Doe
 */
class Time {
public:
    /**
     * Construct with a duration since Jan 1, 1970
     * @param millis A number of milliseconds
     */
    explicit Time(long millis) : m_millis(millis) {
    }

    /**
     * Get a new instance with the current time
     * @return Instance
     */
    static Time now() {
        // ...
    }

private:
    long m_millis; ///< Milliseconds since Jan 1, 1970
};