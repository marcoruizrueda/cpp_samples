#include <iostream>
#include <inttypes.h>
#include <bitset>

#define HIBYTE(word)             (static_cast<uint8>((static_cast<uint16>(word))>>8))
#define LOBYTE(word)             (static_cast<uint8>((static_cast<uint16>(word))&0x00FF))
#define MAKEWORD(hibyte,lobyte)  (((static_cast<uint16_t>(hibyte))<<8) | ((static_cast<uint16_t>(lobyte))&0x00FF))


int main()
{
    /*
    // auto result = (10 <=> 20) > 0;
    // std::cout << result << std::endl;
    int n1 = 15; //Decimal
    int n2 = 017; //Octal
    int n3 = 0x0f; //Hexadecimal
    int n4 = 0b00001111; //Binary

    std::cout << "Number 1: " << n1 << std::endl;
    std::cout << "Number 2: " << n2 <<std::endl;
    std::cout << "Number 3: " << n3 <<std::endl;
    std::cout << "Number 4: " << n4 <<std::endl;

    // Braced Initializers
    int val {}; //Initializes to 0
    int val1 {10}; //Initializes to 10

    // Can use expression as initializer
    int sum {val + val1};

    std::cout << "Sum: " << sum <<std::endl;

   // Functional Initialization
   int apple_count(5);
   int orange_count(15);
   int fruits (apple_count + orange_count);
   std::cout << "fruits: " << fruits <<std::endl;

    // Assignment notation
    int bike = 2;
    int truck = 7;
    int vehicles = bike + truck;
    std::cout << "vehicles: " << vehicles << std::endl;
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof variable: " << sizeof(vehicles) << std::endl;

    // since x is [[maybe_unused]], no warning generated
    [[maybe_unused]] int xx { 5 };

    // Fill vector values
    int scores[10]; // Declare Array of 10 integers
    for( size_t i{0}; i<10; ++i ){
        scores[i] = i;
    }

    // Display values
    for( size_t i{0}; i<std::size(scores); ++i ){
        std::cout << "i=" << i << " : " << scores[i] << std::endl;
    }

    int r {0};
    for( auto value : scores ){
        std::cout << scores[r] <<std::endl;
        r++;
    }

    // Easier
    for( auto value : scores ){
        std::cout << value <<std::endl;
    }


    // Constant arrays can't be modified
    const int multipliers [] {22,30,15};

    // Omit size of array at declaration
    int class_sizes [] {10, 20, 30, 12};
    
    // If a character array is null terminated, it's called as C-String
    char message1[]{'H', 'i', '\0'};
    std::cout << message1 << std::endl;
    std::cout << "Size of message1: " << sizeof(message1) << std::endl;
    
    */
    // ---------------------------
    uint16_t lTlvHdr = MAKEWORD(2, 3);
    uint16_t result;
    uint8_t oTlvType;
    // shift to get the MSB 7 bits
    oTlvType = lTlvHdr >> 9;
    // grab the LSB 9 bits as TlvLen
    result = lTlvHdr & 0x1FF;
    
    std::bitset<16> y(lTlvHdr);
    std::cout << y << '\n';
    
    std::bitset<16> yy(result);
    std::cout << yy << '\n';
    
    // ---------------------------

    /*
    int i=0;
    while (i < 6 && 1!=2)
	{
		std::cout << "-------- " << i << std::endl;
        if (i+1 == 6){
			break;
		}
        
		++i;
	}
    std::cout << "+++++++ " << i << std::endl;
    //std::cout << oTlvType << std::endl;
    
    int i;
    for( i = 0 ; i < 10; i++ )
    {
        std::cout << "--------" << i << "_" << std::endl;
    }

    if(i == 10){
        i--;
    }

    std::cout << "+++++++ " << i << std::endl;
    
   std::cout << "+++++++ " << 1024>>6 << std::endl;
    // ---------------------------
    
    uint8_t mRxMSAPDU1_1[] = 
    {
     0x01, 0x80, 0xC2, 0x00, 0x00, 0x0e                     // Destination MAC
    , 0x00, 0x04, 0x63, 0xaa, 0x01, 0x01                     // Source MAC
    , 0x88, 0xcc                                             // LLDP EtherType
    , 0xab, 0xcd                                             // Padding bytes
    , 0x02, 0x07, 0x04, 0x00, 0x04, 0x63, 0xaa, 0x01, 0x00   // Chassis ID Tlv
    , 0x04, 0x07, 0x03, 0x00, 0x04, 0x63, 0xaa, 0x01, 0x01   // Port ID Tlv
    , 0x06, 0x02, 0x00, 0x78                                 // TTL Tlv
    , 0x08, 0x09, 'P', 'o', 'r', 't', 'D', 'e', 's', 'c', 'r'// Port Descr Tlv
    , 0x0A, 0x07, 'S', 'y', 's', 'N', 'a', 'm', 'e'          // System Name Tlv
    , 0x0C, 0x08, 'S', 'y', 's', 'D', 'e', 's', 'c', 'r'     // System Descr Tlv
    , 0x0E, 0x04, 0x01, 0x00, 0x01, 0x00                     // System Capabilities Tlv
    , 0x00, 0x00                                             // End of LLDPDU Tlv
    };

    
    std::cout << sizeof(mRxMSAPDU1_1) << std::endl;

    for(size_t i=0; i<sizeof(mRxMSAPDU1_1); ++i){
        std::cout << "Element: " << mRxMSAPDU1_1[i]+14 << std::endl;
    }

    std::cout << sizeof(uint16_t) << std::endl;
    */
    return 0;
}
