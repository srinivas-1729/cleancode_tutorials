
class IPrinter {
	public:
		virtual void print() = 0;
};

class IScanner {
	public:
		virtual void scan() = 0;
};

class Printer {
	public:
		void print() {
			
		}
};

class Scanner {
	public:
		void scan() {
			
		}
};

class printerscanner: IPrinter, IScanner { // Interface Segragation Principle
	Printer p_obj;
	Scanner s_obj;
	public:
		void print() {
			p_obj.print();   // delegation
		}
		void scan() {
			s_obj.scan();
		}
};

void printmanager(IPrinter *p)
{
	
}

void scanmanager(IScanner *s)
{
	
}

int main ()
{
	
}