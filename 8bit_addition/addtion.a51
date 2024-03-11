ORG 00H                   // Indicates starting address

MOV P0,#0FFH              // Initializes P0 as input port
MOV P1,#0FFH              // Initializes P1 as input port
MOV P2,#00H               // Initializes P2 as output port
MOV P3,#00H               // Initializes P3 as output port

L1:MOV R1, #00H          // Initializes Register R1
MOV B,P0                 // Moves content of P0 to B
MOV A,P1                 // Moves content of P1 to A
CLR C                    // Clears carry flag
ADD A,B                  // Add the content of A and B and store result in A
JNC L2                   // If carry is not set, jump to label L2
INC R1                   // Increment Register R1 if carry present

L2: MOV P2, R1            // Moves the content from Register R1 to Port2
MOV P3,A                 // Moves the content from A to Port3
SJMP L1                  // Jumps to label L1
END
