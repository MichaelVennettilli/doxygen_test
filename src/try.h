// First, there is a descriptor of the file.
/**
* @file
*
* @section DESCRIPTION
*
* The time class represents a moment of time.
*/

// Then there is a descriptor of the class!
/**
* @brief A sample Time class
*
* This is a simple class to demonstrate how Doxygen is used.
* It implements a dummy Time class.
*/
class Time {
	public:
		/**
		* Constructor that sets the time to a given value.
		*
		* @brief Brief comment
		* @param timemillis Number of milliseconds.
		* 
		* @note this is a note.
		*/
		Time (int timemillis) {
			this->timemillis = timemillis;
		}
		/**
		* Get the current time.
		*
		* @return A time object set to the current time.
		*/
		static Time now () {
			return *this;
		}
		
		/**
		 * Returns the time in seconds using \f$ t_{\text{milli}}/1000 \f$
		 * 
		 * @return Returns the time in seconds.
		 **/
		double seconds(){
			return timemillis/1000;
		}
		void test();
		
	private:
		double timemillis;
};

/**
 * Testing documentation from comment with function initialization
 * outside of class.
 * 
 */
void Time::test(){}

/**
 * @brief Testing multiple parameters.
 * 
 * @tparam NT number type, needs binary operator + defined
 * @param x integer summand
 * @param y other integer summand
 * @return the sum of x and y
 * 
 */
template<typename NT>
NT sum(NT x, NT y){return x+y;}
