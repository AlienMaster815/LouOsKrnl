[bits 64]



section .data

global InterruptCode
raxp dq 0
global InterruptNum
global InstructionPointer

InterruptNum db 0
InterruptCode dq 0
InstructionPointer dq 0

global SYSTEMCALL

SYSTEMCALL dq 0

savedRIP dq 0 

section .bss

section .text
extern InterruptRouter
extern PIC_sendEOI

%macro pusha 0	
	

	push rax
	push rbx
	push rcx
	push rdx

	push rsi
	push rdi

	push r8
	push r9
	push r10
	push r11
	push r12
	push r13
	push r14
	push r15

	mov rax, [rsp + 8 * 14]
	mov [InstructionPointer], rax
	xor rax, rax



	;push rbp
	;push rsp
%endmacro

%macro popa 0
	;pop rsp
	;pop rbp
	
	pop r15
	pop r14
	pop r13
	pop r12
	pop r11
	pop r10
	pop r9
	pop r8

	pop rdi
	pop rsi

	pop rdx
	pop rcx
	pop rbx
	pop rax
%endmacro

;PIC_sendEOI(unsigned char irq)

%macro Handle 0
	mov rcx, [InterruptNum]
	call InterruptRouter
	mov rcx, [InterruptNum]
%endmacro

global ISR0
global ISR1
global ISR2
global ISR3
global ISR4
global ISR5
global ISR6
global ISR7
global ISR8
global ISR9
global ISR10
global ISR11
global ISR12
global ISR13
global ISR14
global ISR15
global ISR16
global ISR17
global ISR18
global ISR19
global ISR20
global ISR21
global ISR22
global ISR23
global ISR24
global ISR25
global ISR26
global ISR27
global ISR28
global ISR29
global ISR30
global ISR31



global ISR32
global ISR33
global ISR34
global ISR35
global ISR36
global ISR37
global ISR38
global ISR39
global ISR40
global ISR41
global ISR42
global ISR43
global ISR44
global ISR45
global ISR46
global ISR47
global ISR48
global ISR49
global ISR50

global ISR51
global ISR52
global ISR53
global ISR54
global ISR55
global ISR56
global ISR57
global ISR58
global ISR59
global ISR60
global ISR61
global ISR62
global ISR63
global ISR64
global ISR65
global ISR66
global ISR67
global ISR68
global ISR69
global ISR70
global ISR71
global ISR72
global ISR73
global ISR74
global ISR75
global ISR76
global ISR77
global ISR78
global ISR79
global ISR80
global ISR81
global ISR82
global ISR83
global ISR84
global ISR85
global ISR86
global ISR87
global ISR88
global ISR89
global ISR90
global ISR91
global ISR92
global ISR93
global ISR94
global ISR95
global ISR96
global ISR97
global ISR98
global ISR99
global ISR100
global ISR101
global ISR102
global ISR103
global ISR104
global ISR105
global ISR106
global ISR107
global ISR108
global ISR109
global ISR110
global ISR110
global ISR111
global ISR112
global ISR113
global ISR114
global ISR115
global ISR116
global ISR117
global ISR118
global ISR119
global ISR120
global ISR121
global ISR122
global ISR123
global ISR124
global ISR125
global ISR126
global ISR127
global ISR128
global ISR129
global ISR130
global ISR131
global ISR132
global ISR133
global ISR134
global ISR135
global ISR136
global ISR137
global ISR138
global ISR139
global ISR140
global ISR141
global ISR142
global ISR143
global ISR144
global ISR145
global ISR146
global ISR147
global ISR148
global ISR149
global ISR150
global ISR151
global ISR152
global ISR153
global ISR154
global ISR155
global ISR156
global ISR157
global ISR158
global ISR159
global ISR160
global ISR161
global ISR162
global ISR163
global ISR164
global ISR165
global ISR166
global ISR167
global ISR168
global ISR169
global ISR170
global ISR171
global ISR172
global ISR173
global ISR174
global ISR175
global ISR176
global ISR177
global ISR178
global ISR179
global ISR180
global ISR181
global ISR182
global ISR183
global ISR184
global ISR185
global ISR186
global ISR187
global ISR188
global ISR189
global ISR190
global ISR191
global ISR192
global ISR193
global ISR194
global ISR195
global ISR196
global ISR197
global ISR198
global ISR199
global ISR200

ISR0:
	pusha
	mov ah, 0
	mov [InterruptNum], ah
	Handle

ISR1:
	pusha
	mov ah, 1
	mov [InterruptNum], ah
	popa
	iretq
	Handle


ISR2:
	pusha
	mov ah, 2
	mov [InterruptNum], ah
	Handle

ISR3:
	pusha
	mov ah, 3
	mov [InterruptNum], ah
	Handle

ISR4:
	pusha
	mov ah, 4
	mov [InterruptNum], ah
	Handle

ISR5:
	pusha
	mov ah, 5
	mov [InterruptNum], ah
	Handle

ISR6:
	pusha
	mov ah, 6
	mov [InterruptNum], ah
	Handle

ISR7:
	pusha
	mov ah, 7
	mov [InterruptNum], ah
	Handle

ISR8:
	pusha
	mov ah, 8
	mov [InterruptNum], ah
	Handle

ISR9:
	pusha
	mov ah, 9
	mov [InterruptNum], ah
	Handle

ISR10:
	pusha
	mov ah, 10
	mov [InterruptNum], ah
	Handle

ISR11:
	pusha
	mov ah, 11
	mov [InterruptNum], ah
	Handle

ISR12:
	pusha
	mov ah, 12
	mov [InterruptNum], ah
	Handle

ISR13:
	pusha
	mov ah, 13
	mov [InterruptNum], ah
	Handle
	popa
	iretq

ISR14:
    mov [raxp], rax
    pop rax
    mov [InterruptCode], rax
    xor rax, rax
    mov rax, [raxp]
    pusha
    mov ah, 14
    mov [InterruptNum], ah
    Handle
    popa
    iretq

ISR15:
	pusha
	mov ah, 15
	mov [InterruptNum], ah
	Handle

ISR16:
	pusha
	mov ah, 16
	mov [InterruptNum], ah
	Handle

ISR17:
	pusha
	mov ah, 17
	mov [InterruptNum], ah
	Handle

ISR18:
	pusha
	mov ah, 18
	mov [InterruptNum], ah
	Handle

ISR19:
	pusha
	mov ah, 19
	mov [InterruptNum], ah
	jmp Handle

ISR20:
	pusha
	mov ah, 20
	mov [InterruptNum], ah
	Handle

ISR21:
	pusha
	mov ah, 21
	mov [InterruptNum], ah
	Handle

ISR22:
	pusha
	mov ah, 22
	mov [InterruptNum], ah
	Handle

ISR23:
	pusha
	mov ah, 23
	mov [InterruptNum], ah
	Handle

ISR24:
	pusha
	mov ah, 24
	mov [InterruptNum], ah
	Handle

ISR25:
	pusha
	mov ah, 25
	mov [InterruptNum], ah
	Handle

ISR26:
	pusha
	mov ah, 26
	mov [InterruptNum], ah
	Handle

ISR27:
	pusha
	mov ah, 27
	mov [InterruptNum], ah
	Handle

ISR28:
	pusha
	mov ah, 28
	mov [InterruptNum], ah
	Handle

ISR29:
	pusha
	mov ah, 29
	mov [InterruptNum], ah
	Handle

ISR30:
	pusha
	mov ah, 30
	mov [InterruptNum], ah
	Handle

ISR31:
	pusha
	mov ah, 31
	mov [InterruptNum], ah
	Handle






ISR32:
	cli
	pusha
	mov ah, 32
	mov [InterruptNum], ah
	Handle
	popa
	sti
	iretq


ISR33:
	pusha
	mov ah, 33
	mov [InterruptNum], ah
	Handle
	popa
	iretq

ISR34:
	pusha
	mov ah, 34
	mov [InterruptNum], ah
	Handle
	hlt

ISR35:
	pusha
	mov ah, 35
	mov [InterruptNum], ah
	Handle
	hlt

ISR36:
	pusha
	mov ah, 36
	mov [InterruptNum], ah
	Handle
	hlt

ISR37:
	pusha
	mov ah, 37
	mov [InterruptNum], ah
	Handle
	hlt

ISR38:
	pusha
	mov ah, 38
	mov [InterruptNum], ah
	Handle
	hlt

ISR39:
	pusha
	mov ah, 39
	mov [InterruptNum], ah
	Handle
	hlt

ISR40:
	pusha	
	mov ah, 40
	mov [InterruptNum], ah
	Handle
	hlt

ISR41:
	pusha
	mov ah, 41
	mov [InterruptNum], ah
	Handle
	hlt

ISR42:
	pusha
	mov ah, 42
	mov [InterruptNum], ah
	Handle
	hlt

ISR43:
	pusha	
	mov ah, 43
	mov [InterruptNum], ah
	Handle
	hlt

ISR44:
	pusha	
	mov ah, 44
	mov [InterruptNum], ah
	Handle
	hlt

ISR45:
	pusha
	mov ah, 45
	mov [InterruptNum], ah
	Handle
	hlt

ISR46:
	pusha
	mov ah, 46
	mov [InterruptNum], ah
	Handle
	hlt

ISR47:
	pusha
	mov ah, 47
	mov [InterruptNum], ah
	Handle
	hlt

ISR48:
	pusha
	mov ah, 48
	mov [InterruptNum], ah
	Handle
	hlt

ISR49:
	pusha
	mov ah, 49
	mov [InterruptNum], ah
	Handle
	hlt

ISR50:
	pusha
	mov ah, 50
	mov [InterruptNum], ah
	Handle
	hlt

ISR51:
	pusha
	mov ah, 51
	mov [InterruptNum], ah
	Handle
	hlt

ISR52:
	pusha
	mov ah, 52
	mov [InterruptNum], ah
	Handle
	hlt

ISR53:
	pusha
	mov ah, 53
	mov [InterruptNum], ah
	Handle
	hlt

ISR54:
	pusha
	mov ah, 54
	mov [InterruptNum], ah
	Handle
	hlt

ISR55:
	pusha
	mov ah, 55
	mov [InterruptNum], ah
	Handle
	hlt

ISR56:
	pusha
	mov ah, 56
	mov [InterruptNum], ah
	Handle
	hlt

ISR57:
	pusha
	mov ah, 57
	mov [InterruptNum], ah
	Handle
	hlt

ISR58:
	pusha
	mov ah, 58
	mov [InterruptNum], ah
	Handle
	hlt

ISR59:
	pusha
	mov ah, 59
	mov [InterruptNum], ah
	Handle
	hlt

ISR60:
	pusha
	mov ah, 60
	mov [InterruptNum], ah
	Handle
	hlt

ISR61:
	pusha
	mov ah, 61
	mov [InterruptNum], ah
	Handle
	hlt

ISR62:
	pusha
	mov ah, 62
	mov [InterruptNum], ah
	Handle
	hlt

ISR63:
	pusha
	mov ah, 63
	mov [InterruptNum], ah
	Handle
	hlt

ISR64:
	pusha
	mov ah, 64
	mov [InterruptNum], ah
	Handle
	hlt

ISR65:
	pusha
	mov ah, 65
	mov [InterruptNum], ah
	Handle
	hlt

ISR66:
	pusha
	mov ah, 66
	mov [InterruptNum], ah
	Handle
	hlt

ISR67:
	pusha
	mov ah, 67
	mov [InterruptNum], ah
	Handle
	hlt

ISR68:
	pusha
	mov ah, 68
	mov [InterruptNum], ah
	Handle
	hlt

ISR69:
	pusha
	mov ah, 69
	mov [InterruptNum], ah
	Handle
	hlt

ISR70:
	pusha
	mov ah, 70
	mov [InterruptNum], ah
	Handle
	hlt

ISR71:
	pusha
	mov ah, 71
	mov [InterruptNum], ah
	Handle
	hlt

ISR72:
	pusha
	mov ah, 72
	mov [InterruptNum], ah
	Handle
	hlt

ISR73:
	pusha
	mov ah, 73
	mov [InterruptNum], ah
	Handle
	hlt

ISR74:
	pusha
	mov ah, 74
	mov [InterruptNum], ah
	Handle
	hlt

ISR75:
	pusha
	mov ah, 75
	mov [InterruptNum], ah
	Handle
	hlt

ISR76:
	pusha
	mov ah, 76
	mov [InterruptNum], ah
	Handle
	hlt

ISR77:
	pusha
	mov ah, 77
	mov [InterruptNum], ah
	Handle
	hlt

ISR78:
	pusha
	mov ah, 78
	mov [InterruptNum], ah
	Handle
	hlt

ISR79:
	pusha
	mov ah, 79
	mov [InterruptNum], ah
	Handle
	hlt

ISR80:
	pusha
	mov ah, 80
	mov [InterruptNum], ah
	Handle
	hlt

ISR81:
	pusha
	mov ah, 81
	mov [InterruptNum], ah
	Handle
	hlt

ISR82:
	pusha
	mov ah, 82
	mov [InterruptNum], ah
	Handle
	hlt

ISR83:
	pusha
	mov ah, 83
	mov [InterruptNum], ah
	Handle
	hlt

ISR84:
	pusha
	mov ah, 84
	mov [InterruptNum], ah
	Handle
	hlt

ISR85:
	pusha
	mov ah, 85
	mov [InterruptNum], ah
	Handle
	hlt

ISR86:
	pusha
	mov ah, 86
	mov [InterruptNum], ah
	Handle
	hlt

ISR87:
	pusha
	mov ah, 87
	mov [InterruptNum], ah
	Handle
	hlt

ISR88:
	pusha
	mov ah, 88
	mov [InterruptNum], ah
	Handle
	hlt

ISR89:
	pusha
	mov ah, 89
	mov [InterruptNum], ah
	Handle
	hlt

ISR90:
	pusha
	mov ah, 90
	mov [InterruptNum], ah
	Handle
	hlt

ISR91:
	pusha
	mov ah, 91
	mov [InterruptNum], ah
	Handle
	hlt

ISR92:
	pusha
	mov ah, 92
	mov [InterruptNum], ah
	Handle
	hlt

ISR93:
	pusha
	mov ah, 93
	mov [InterruptNum], ah
	Handle
	hlt

ISR94:
	pusha
	mov ah, 94
	mov [InterruptNum], ah
	Handle
	hlt

ISR95:
	pusha
	mov ah, 95
	mov [InterruptNum], ah
	Handle
	hlt

ISR96:
	pusha
	mov ah, 96
	mov [InterruptNum], ah
	Handle
	hlt

ISR97:
	pusha
	mov ah, 97
	mov [InterruptNum], ah
	Handle
	hlt

ISR98:
	pusha
	mov ah, 98
	mov [InterruptNum], ah
	Handle
	hlt

ISR99:
	pusha
	mov ah, 99
	mov [InterruptNum], ah
	Handle
	hlt

ISR100:
	pusha
	mov ah, 100
	mov [InterruptNum], ah
	Handle
	hlt

ISR101:
	pusha
	mov ah, 101
	mov [InterruptNum], ah
	Handle
	hlt

ISR102:
	pusha
	mov ah, 102
	mov [InterruptNum], ah
	Handle
	hlt

ISR103:
	pusha
	mov ah, 103
	mov [InterruptNum], ah
	Handle
	hlt

ISR104:
	pusha
	mov ah, 104
	mov [InterruptNum], ah
	Handle
	hlt

ISR105:
	pusha
	mov ah, 105
	mov [InterruptNum], ah
	Handle
	hlt

ISR106:
	pusha
	mov ah, 106
	mov [InterruptNum], ah
	Handle
	hlt

ISR107:
	pusha
	mov ah, 107
	mov [InterruptNum], ah
	Handle
	hlt

ISR108:
	pusha
	mov ah, 108
	mov [InterruptNum], ah
	Handle
	hlt

ISR109:
	pusha
	mov ah, 109
	mov [InterruptNum], ah
	Handle
	hlt

ISR110:
	pusha
	mov ah, 110
	mov [InterruptNum], ah
	Handle
	hlt

ISR111:
	pusha
	mov ah, 111
	mov [InterruptNum], ah
	Handle
	hlt

ISR112:
	pusha
	mov ah, 112
	mov [InterruptNum], ah
	Handle
	hlt

ISR113:
	pusha
	mov ah, 113
	mov [InterruptNum], ah
	Handle
	hlt

ISR114:
	pusha
	mov ah, 114
	mov [InterruptNum], ah
	Handle
	hlt

ISR115:
	pusha
	mov ah, 115
	mov [InterruptNum], ah
	Handle
	hlt

ISR116:
	pusha
	mov ah, 116
	mov [InterruptNum], ah
	Handle
	hlt

ISR117:
	pusha
	mov ah, 117
	mov [InterruptNum], ah
	Handle
	hlt

ISR118:
	pusha
	mov ah, 118
	mov [InterruptNum], ah
	Handle
	hlt

ISR119:
	pusha
	mov ah, 119
	mov [InterruptNum], ah
	Handle
	hlt

ISR120:
	pusha
	mov ah, 120
	mov [InterruptNum], ah
	Handle
	hlt

ISR121:
	pusha
	mov ah, 121
	mov [InterruptNum], ah
	Handle
	hlt

ISR122:
	pusha
	mov ah, 122
	mov [InterruptNum], ah
	Handle
	hlt

ISR123:
	pusha
	mov ah, 123
	mov [InterruptNum], ah
	Handle
	hlt

ISR124:
	pusha
	mov ah, 124
	mov [InterruptNum], ah
	Handle
	hlt

ISR125:
	pusha
	mov ah, 125
	mov [InterruptNum], ah
	Handle
	hlt

ISR126:
	pusha
	mov ah, 126
	mov [InterruptNum], ah
	Handle
	hlt

ISR127:
	pusha
	mov ah, 127
	mov [InterruptNum], ah
	Handle
	hlt

ISR128:
	cli
	mov [SYSTEMCALL], rax;
	pusha
	mov ah, 128
	mov [InterruptNum], ah
	Handle
	popa
	sti
	iretq

ISR129:
	pusha
	mov ah, 129
	mov [InterruptNum], ah
	Handle
	hlt

ISR130:
	pusha
	mov ah, 130
	mov [InterruptNum], ah
	Handle
	hlt

ISR131:
	pusha
	mov ah, 131
	mov [InterruptNum], ah
	Handle
	hlt

ISR132:
	pusha
	mov ah, 132
	mov [InterruptNum], ah
	Handle
	hlt

ISR133:
	pusha
	mov ah, 133
	mov [InterruptNum], ah
	Handle
	hlt

ISR134:
	pusha
	mov ah, 134
	mov [InterruptNum], ah
	Handle
	hlt

ISR135:
	pusha
	mov ah, 135
	mov [InterruptNum], ah
	Handle
	hlt

ISR136:
	pusha
	mov ah, 136
	mov [InterruptNum], ah
	Handle
	hlt

ISR137:
	pusha
	mov ah, 137
	mov [InterruptNum], ah
	Handle
	hlt

ISR138:
	pusha
	mov ah, 138
	mov [InterruptNum], ah
	Handle
	hlt

ISR139:
	pusha
	mov ah, 139
	mov [InterruptNum], ah
	Handle
	hlt

ISR140:
	pusha
	mov ah, 140
	mov [InterruptNum], ah
	Handle
	hlt

ISR141:
	pusha
	mov ah, 141
	mov [InterruptNum], ah
	Handle
	hlt

ISR142:
	pusha
	mov ah, 142
	mov [InterruptNum], ah
	Handle
	hlt

ISR143:
	pusha
	mov ah, 143
	mov [InterruptNum], ah
	Handle
	hlt

ISR144:
	pusha
	mov ah, 144
	mov [InterruptNum], ah
	Handle
	hlt

ISR145:
	pusha
	mov ah, 145
	mov [InterruptNum], ah
	Handle
	hlt

ISR146:
	pusha
	mov ah, 146
	mov [InterruptNum], ah
	Handle
	hlt

ISR147:
	pusha
	mov ah, 147
	mov [InterruptNum], ah
	Handle
	hlt

ISR148:
	pusha
	mov ah, 148
	mov [InterruptNum], ah
	Handle
	hlt

ISR149:
	pusha
	mov ah, 149
	mov [InterruptNum], ah
	Handle
	hlt

ISR150:
	pusha
	mov ah, 150
	mov [InterruptNum], ah
	Handle
	hlt

ISR151:
	pusha
	mov ah, 151
	mov [InterruptNum], ah
	Handle
	hlt

ISR152:
	pusha
	mov ah, 152
	mov [InterruptNum], ah
	Handle
	hlt

ISR153:
	pusha
	mov ah, 153
	mov [InterruptNum], ah
	Handle
	hlt

ISR154:
	pusha
	mov ah, 154
	mov [InterruptNum], ah
	Handle
	hlt

ISR155:
	pusha
	mov ah, 155
	mov [InterruptNum], ah
	Handle
	hlt

ISR156:
	pusha
	mov ah, 156
	mov [InterruptNum], ah
	Handle
	hlt

ISR157:
	pusha
	mov ah, 157
	mov [InterruptNum], ah
	Handle
	hlt

ISR158:
	pusha
	mov ah, 158
	mov [InterruptNum], ah
	Handle
	hlt

ISR159:
	pusha
	mov ah, 159
	mov [InterruptNum], ah
	Handle
	hlt

ISR160:
	pusha
	mov ah, 160
	mov [InterruptNum], ah
	Handle
	hlt

ISR161:
	pusha
	mov ah, 161
	mov [InterruptNum], ah
	Handle
	hlt

ISR162:
	pusha
	mov ah, 162
	mov [InterruptNum], ah
	Handle
	hlt

ISR163:
	pusha
	mov ah, 163
	mov [InterruptNum], ah
	Handle
	hlt

ISR164:
	pusha
	mov ah, 164
	mov [InterruptNum], ah
	Handle
	hlt

ISR165:
	pusha
	mov ah, 165
	mov [InterruptNum], ah
	Handle
	hlt

ISR166:
	pusha
	mov ah, 166
	mov [InterruptNum], ah
	Handle
	hlt

ISR167:
	pusha
	mov ah, 167
	mov [InterruptNum], ah
	Handle
	hlt

ISR168:
	pusha
	mov ah, 168
	mov [InterruptNum], ah
	Handle
	hlt

ISR169:
	pusha
	mov ah, 169
	mov [InterruptNum], ah
	Handle
	hlt

ISR170:
	pusha
	mov ah, 170
	mov [InterruptNum], ah
	Handle
	hlt

ISR171:
	pusha
	mov ah, 171
	mov [InterruptNum], ah
	Handle
	hlt

ISR172:
	pusha
	mov ah, 172
	mov [InterruptNum], ah
	Handle
	hlt

ISR173:
	pusha
	mov ah, 173
	mov [InterruptNum], ah
	Handle
	hlt

ISR174:
	pusha
	mov ah, 174
	mov [InterruptNum], ah
	Handle
	hlt

ISR175:
	pusha
	mov ah, 175
	mov [InterruptNum], ah
	Handle
	hlt

ISR176:
	pusha
	mov ah, 176
	mov [InterruptNum], ah
	Handle
	hlt

ISR177:
	pusha
	mov ah, 177
	mov [InterruptNum], ah
	Handle
	hlt

ISR178:
	pusha
	mov ah, 8
	mov [InterruptNum], ah
	Handle
	hlt

ISR179:
	pusha
	mov ah, 179
	mov [InterruptNum], ah
	Handle
	hlt

ISR180:
	pusha
	mov ah, 180
	mov [InterruptNum], ah
	Handle
	hlt

ISR181:
	pusha
	mov ah, 181
	mov [InterruptNum], ah
	Handle
	hlt

ISR182:
	pusha
	mov ah, 182
	mov [InterruptNum], ah
	Handle
	hlt

ISR183:
	pusha
	mov ah, 183
	mov [InterruptNum], ah
	Handle
	hlt

ISR184:
	pusha
	mov ah, 184
	mov [InterruptNum], ah
	Handle
	hlt

ISR185:
	pusha
	mov ah, 185
	mov [InterruptNum], ah
	Handle
	hlt

ISR186:
	pusha
	mov ah, 186
	mov [InterruptNum], ah
	Handle
	hlt

ISR187:
	pusha
	mov ah, 187
	mov [InterruptNum], ah
	Handle
	hlt

ISR188:
	pusha
	mov ah, 188
	mov [InterruptNum], ah
	Handle
	hlt

ISR189:
	pusha
	mov ah, 189
	mov [InterruptNum], ah
	Handle
	hlt

ISR190:
	pusha
	mov ah, 190
	mov [InterruptNum], ah
	Handle
	hlt

ISR191:
	pusha
	mov ah, 191
	mov [InterruptNum], ah
	Handle
	hlt

ISR192:
	pusha
	mov ah, 192
	mov [InterruptNum], ah
	Handle
	hlt

ISR193:
	pusha
	mov ah, 193
	mov [InterruptNum], ah
	Handle
	hlt

ISR194:
	pusha
	mov ah, 194
	mov [InterruptNum], ah
	Handle
	hlt

ISR195:
	pusha
	mov ah, 195
	mov [InterruptNum], ah
	Handle
	hlt

ISR196:
	pusha
	mov ah, 196
	mov [InterruptNum], ah
	Handle
	hlt

ISR197:
	pusha
	mov ah, 197
	mov [InterruptNum], ah
	Handle
	hlt

ISR198:
	pusha
	mov ah, 198
	mov [InterruptNum], ah
	Handle
	hlt

ISR199:
	pusha
	mov ah, 199
	mov [InterruptNum], ah
	Handle
	hlt

ISR200:
	pusha
	mov ah, 200
	mov [InterruptNum], ah
	Handle
	hlt