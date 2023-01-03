#include "../component_base.h"
class Board : public ComponentBase {
	/* Board represents a physical general purpose compute board that
	 contains various components such as analog readers and digital
	 interrupts.
	 *
	 * This acts as an abstract base class for any drivers representing
	 specific board implementations. It is not meant to be used on its own.
	 */
	class Attributes {
		bool remote;
	};

	class AnalogReader : public ComponentBase {};
};
