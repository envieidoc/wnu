#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	./shc -v -r -T -f io_wnu.sh 
#endif

static  char data [] = 
#define      chk2_z	19
#define      chk2	((&data[3]))
	"\211\002\175\257\254\311\145\146\342\336\164\232\037\060\336\335"
	"\336\251\313\060\357\234"
#define      rlax_z	1
#define      rlax	((&data[22]))
	"\057"
#define      msg2_z	19
#define      msg2	((&data[23]))
	"\310\077\336\040\265\160\056\223\227\366\320\333\075\103\103\044"
	"\063\341\024\376"
#define      opts_z	1
#define      opts	((&data[43]))
	"\362"
#define      text_z	4055
#define      text	((&data[620]))
	"\331\373\146\023\176\307\331\243\237\106\120\051\247\017\366\245"
	"\352\012\153\321\111\360\056\366\022\013\176\366\173\020\100\104"
	"\245\204\344\221\015\340\053\141\162\210\376\154\255\146\156\123"
	"\130\052\361\044\007\114\310\116\270\122\114\263\216\030\353\122"
	"\064\133\274\152\002\305\021\266\250\302\361\204\022\066\116\206"
	"\120\121\010\077\006\314\331\017\136\001\276\101\062\334\004\077"
	"\275\053\277\115\060\052\355\122\074\205\261\010\143\335\034\054"
	"\041\000\114\243\114\352\154\022\320\323\365\126\163\065\124\334"
	"\017\156\233\327\341\145\077\337\205\052\315\335\372\013\123\253"
	"\144\264\053\114\037\100\154\065\135\051\324\205\210\061\310\007"
	"\136\342\165\163\006\314\274\343\373\203\100\010\332\250\271\116"
	"\046\260\231\126\223\274\206\316\305\102\174\115\047\353\175\251"
	"\262\031\305\114\104\155\300\241\103\142\136\066\226\020\007\001"
	"\357\134\343\300\323\110\322\311\165\170\076\027\273\023\011\317"
	"\302\330\321\112\365\174\064\075\064\240\125\056\350\307\056\323"
	"\021\363\140\176\311\242\267\023\371\123\377\210\025\017\211\325"
	"\256\021\202\230\300\027\144\226\076\152\107\110\261\354\346\222"
	"\056\324\336\163\357\274\234\104\343\334\145\267\235\223\012\026"
	"\312\213\104\304\054\077\276\100\245\111\107\377\254\335\361\152"
	"\242\227\322\363\162\035\016\015\002\035\046\370\111\064\155\265"
	"\062\105\132\306\062\102\030\166\060\212\113\201\075\224\076\204"
	"\104\123\207\314\173\041\217\070\217\263\010\334\355\241\331\010"
	"\330\171\215\015\037\242\375\322\157\042\113\125\177\275\156\222"
	"\243\224\072\064\273\247\273\235\261\241\047\244\022\350\226\167"
	"\332\003\031\352\242\204\347\220\276\011\140\322\012\075\327\174"
	"\253\130\341\235\061\066\116\263\277\243\275\015\137\364\016\010"
	"\200\321\123\356\053\117\313\033\151\246\165\336\136\052\315\211"
	"\011\217\140\145\166\037\161\047\022\355\313\334\146\321\175\212"
	"\044\065\220\262\044\176\343\073\115\376\021\325\366\147\252\065"
	"\235\376\332\276\315\164\027\257\334\232\100\350\110\133\077\035"
	"\154\377\103\027\150\100\243\126\116\002\176\136\026\107\027\013"
	"\051\206\173\224\001\123\144\107\113\272\261\243\216\103\212\021"
	"\044\236\271\005\365\073\060\276\236\216\007\313\253\366\027\351"
	"\207\213\100\213\260\160\110\251\273\362\222\244\047\155\152\037"
	"\200\102\164\021\310\033\352\176\240\256\210\321\205\243\136\256"
	"\252\012\347\236\275\363\325\135\174\377\347\014\117\077\236\230"
	"\376\103\374\253\067\345\300\207\042\013\346\374\115\103\231\177"
	"\004\223\131\103\375\055\013\266\162\043\236\276\073\366\223\152"
	"\304\012\054\116\344\222\162\073\131\314\253\337\145\275\143\347"
	"\036\053\075\106\301\024\172\352\265\113\074\110\162\306\147\152"
	"\342\230\035\034\166\215\316\176\327\101\323\071\250\233\176\022"
	"\255\336\022\325\360\333\224\313\004\002\235\215\036\070\077\256"
	"\245\117\042\342\056\241\315\131\124\247\034\051\245\034\203\310"
	"\064\372\010\230\274\340\017\275\217\373\173\207\161\301\340\312"
	"\072\070\210\121\160\221\233\266\215\274\151\257\212\172\274\211"
	"\052\067\137\224\161\173\015\000\012\271\034\110\334\025\320\064"
	"\161\014\065\324\312\233\306\257\346\264\172\356\062\373\221\114"
	"\263\022\031\074\342\233\067\313\231\223\037\362\120\257\247\047"
	"\317\136\044\243\064\137\214\315\357\270\275\100\255\111\277\021"
	"\223\337\232\131\135\130\211\026\326\340\075\003\135\101\145\331"
	"\145\343\136\210\373\061\323\316\161\356\272\025\326\013\355\324"
	"\174\337\264\302\156\367\172\076\164\174\254\216\344\007\037\274"
	"\035\034\303\077\144\231\071\017\225\335\223\154\131\265\226\245"
	"\141\165\020\217\355\337\351\256\365\025\371\200\125\113\255\202"
	"\245\151\335\056\173\056\103\344\300\020\267\060\216\036\070\144"
	"\225\325\165\107\050\060\225\223\341\174\323\040\134\211\072\327"
	"\032\261\247\262\001\070\125\320\377\242\157\032\121\364\043\372"
	"\045\377\372\276\376\011\170\257\143\056\121\077\040\067\131\224"
	"\361\212\232\015\305\127\350\351\045\342\152\274\010\330\331\207"
	"\316\052\250\343\234\220\076\204\312\106\050\005\207\022\340\316"
	"\166\251\305\152\261\226\247\216\142\376\015\236\102\112\271\333"
	"\013\163\245\177\307\306\241\223\151\032\060\026\175\176\146\330"
	"\211\333\151\024\245\077\212\330\055\264\247\157\271\363\037\050"
	"\357\032\025\245\302\021\371\246\034\357\211\237\125\264\363\314"
	"\342\160\341\316\214\360\356\114\360\330\052\071\344\365\254\312"
	"\143\005\170\106\115\100\374\373\143\317\121\263\224\213\206\255"
	"\322\043\312\353\000\127\025\170\277\145\372\046\043\147\062\031"
	"\167\302\371\375\076\325\075\155\177\201\236\345\257\047\226\016"
	"\377\270\031\152\025\202\000\256\263\061\233\134\002\051\113\126"
	"\271\001\240\141\357\314\315\221\016\051\023\334\067\070\145\144"
	"\213\110\333\044\311\315\160\015\105\100\263\276\273\101\164\206"
	"\272\012\266\243\316\137\101\153\374\370\366\370\117\320\034\216"
	"\353\013\271\240\313\047\352\015\072\134\103\150\351\160\310\204"
	"\356\166\335\363\334\301\002\221\205\027\365\201\220\253\161\302"
	"\270\010\070\221\336\315\334\234\043\062\146\113\074\077\257\114"
	"\051\261\366\207\250\273\306\055\261\270\264\032\357\260\274\035"
	"\202\031\114\263\322\362\352\147\246\314\073\211\136\266\300\054"
	"\015\164\261\320\333\150\254\005\003\070\110\265\254\336\310\037"
	"\147\353\226\264\011\003\366\365\271\330\122\354\222\157\161\266"
	"\241\061\211\005\311\156\136\067\324\177\214\114\254\253\317\067"
	"\056\062\164\167\006\114\374\301\233\257\103\367\156\232\234\335"
	"\055\221\254\322\063\073\007\115\115\323\366\167\251\007\012\054"
	"\013\007\103\260\124\110\016\311\336\035\154\317\155\260\022\356"
	"\001\020\014\220\242\051\043\070\245\341\376\320\147\234\071\260"
	"\144\000\317\327\212\335\302\241\365\252\167\361\252\372\024\026"
	"\052\111\274\052\035\312\246\037\307\166\024\372\000\006\145\115"
	"\115\003\311\240\113\054\064\234\045\323\011\070\234\337\233\177"
	"\037\175\016\051\025\337\005\046\211\134\157\177\172\052\031\112"
	"\116\263\171\253\305\237\236\347\041\062\147\000\161\177\374\211"
	"\035\145\255\165\374\332\040\073\021\334\060\357\214\243\176\267"
	"\051\300\217\063\272\306\113\352\173\147\353\055\357\355\071\072"
	"\352\015\142\114\140\323\223\033\055\113\046\306\115\353\103\043"
	"\063\004\077\020\330\357\377\017\050\064\034\174\265\350\205\161"
	"\237\073\201\370\240\150\062\043\263\356\233\061\033\253\310\336"
	"\060\321\031\354\360\216\275\204\013\351\131\217\033\104\333\112"
	"\117\307\245\215\214\104\126\077\141\320\020\216\157\150\204\224"
	"\044\152\047\247\171\046\007\041\164\136\321\003\205\011\242\203"
	"\232\307\112\123\131\371\311\140\150\100\023\164\257\272\036\346"
	"\235\337\035\052\144\007\303\077\156\344\216\246\143\350\273\252"
	"\151\111\000\122\304\102\334\201\251\340\147\041\104\336\272\142"
	"\216\142\074\353\315\065\365\022\236\131\360\176\020\373\165\221"
	"\356\065\004\174\343\171\020\305\160\234\154\357\302\217\267\170"
	"\116\302\164\136\205\115\331\025\075\161\072\103\261\252\123\224"
	"\041\026\101\263\324\345\235\002\146\272\273\130\161\321\131\135"
	"\104\242\213\152\253\126\041\017\107\070\311\061\034\077\002\143"
	"\214\371\122\306\126\333\350\220\236\001\071\220\001\100\363\210"
	"\277\340\343\310\227\130\221\026\144\352\332\200\111\170\216\133"
	"\233\126\371\014\143\327\341\220\106\237\050\210\047\010\352\237"
	"\027\000\162\007\376\271\065\261\260\336\206\125\175\137\036\011"
	"\005\252\002\226\314\305\037\174\007\220\216\342\155\065\073\123"
	"\365\130\012\327\201\210\113\075\305\370\266\152\103\245\155\107"
	"\155\071\240\054\061\175\023\035\300\022\031\161\020\200\311\111"
	"\327\057\265\360\271\070\336\255\223\314\103\142\337\100\223\351"
	"\332\141\202\107\300\324\377\046\047\312\346\177\054\112\036\344"
	"\162\011\067\261\034\272\006\360\123\376\221\053\177\143\271\171"
	"\371\316\204\103\314\322\374\340\234\316\217\166\207\275\215\207"
	"\061\162\132\210\045\213\167\075\145\151\021\326\001\021\076\322"
	"\272\327\154\011\310\206\261\230\363\002\232\312\232\155\045\171"
	"\110\133\373\311\232\307\210\145\064\126\222\150\210\231\344\062"
	"\066\010\330\052\261\224\006\312\132\120\001\031\272\217\236\001"
	"\231\254\260\376\226\074\032\254\315\356\360\031\377\047\221\116"
	"\225\055\370\313\226\132\303\261\116\210\361\247\044\365\211\351"
	"\370\157\041\031\330\104\062\170\333\166\045\254\351\227\352\310"
	"\024\244\102\344\065\264\170\137\360\325\373\204\224\332\133\125"
	"\377\374\026\166\345\023\315\057\333\341\065\215\373\304\122\346"
	"\002\102\276\221\264\316\320\142\235\263\075\022\217\253\167\142"
	"\031\373\244\357\161\253\045\123\057\245\200\161\344\053\020\223"
	"\003\251\107\015\271\267\054\307\061\234\370\374\367\364\346\151"
	"\056\006\202\072\012\314\346\375\331\355\303\106\325\171\010\316"
	"\127\354\253\162\220\216\267\353\133\102\000\151\006\113\162\011"
	"\117\042\316\107\122\321\047\176\147\005\324\207\215\150\112\200"
	"\304\365\377\142\243\233\035\032\343\165\151\340\146\274\176\304"
	"\212\275\014\054\265\066\246\247\023\236\340\125\143\024\212\013"
	"\230\004\015\352\363\120\356\252\276\100\035\330\330\076\064\014"
	"\162\305\254\027\216\311\000\203\375\216\015\115\310\331\255\200"
	"\356\062\016\320\105\231\041\207\105\050\172\046\120\020\333\117"
	"\301\315\061\054\121\040\060\161\100\140\300\043\257\276\053\302"
	"\220\366\217\234\277\231\100\036\341\136\207\314\204\102\026\237"
	"\310\367\034\142\005\106\207\305\127\004\164\350\027\261\031\224"
	"\004\022\171\346\010\153\275\136\031\245\111\316\043\145\352\216"
	"\303\305\336\033\140\254\154\251\150\025\112\361\011\074\154\112"
	"\272\334\307\243\042\154\217\031\135\360\331\244\273\210\354\274"
	"\237\240\042\263\367\271\206\267\262\102\026\071\106\035\304\227"
	"\253\243\004\163\365\223\153\130\113\130\062\273\136\231\140\212"
	"\325\074\263\111\312\020\056\251\216\040\026\006\122\260\121\153"
	"\367\254\240\370\201\346\270\151\237\141\304\100\253\267\235\346"
	"\224\245\200\345\336\156\074\024\214\217\215\066\107\171\073\174"
	"\331\211\327\160\155\051\312\167\276\125\103\253\057\065\111\217"
	"\102\223\216\352\100\302\104\117\334\114\044\034\175\247\024\231"
	"\075\277\256\216\163\347\364\174\161\240\011\204\146\117\155\113"
	"\130\211\020\130\352\324\066\336\262\204\207\104\315\303\167\150"
	"\227\050\264\077\036\370\035\335\323\141\024\176\217\374\054\126"
	"\227\231\310\335\053\147\040\075\201\244\006\165\254\011\302\163"
	"\052\240\260\147\267\265\207\231\164\160\357\044\205\044\334\326"
	"\250\340\105\031\261\337\224\115\205\244\275\312\257\343\323\163"
	"\261\275\031\063\126\227\146\161\076\076\310\344\046\104\325\232"
	"\124\335\364\152\176\147\001\264\163\123\126\165\157\103\330\357"
	"\303\155\227\306\273\245\216\366\345\377\125\265\253\310\036\371"
	"\261\144\244\307\024\166\350\357\250\123\033\106\277\270\121\254"
	"\347\236\346\350\371\272\004\107\162\047\265\263\140\160\240\253"
	"\242\243\144\076\210\012\266\256\316\244\023\342\332\223\140\334"
	"\355\326\135\134\254\313\106\346\250\215\145\040\337\160\250\171"
	"\076\273\170\103\077\076\163\220\127\247\242\310\270\271\264\040"
	"\221\244\045\361\320\001\031\015\133\020\044\300\045\341\001\231"
	"\343\126\060\062\323\163\336\206\201\347\254\216\315\320\221\372"
	"\364\106\240\245\052\227\001\171\212\350\152\065\004\301\142\374"
	"\006\264\306\165\254\141\262\046\242\264\101\145\114\300\373\130"
	"\002\101\162\324\172\102\347\345\377\166\351\217\274\273\076\025"
	"\107\043\177\307\372\257\051\206\206\221\314\123\320\026\320\271"
	"\267\336\226\071\274\227\074\376\066\251\047\342\171\257\027\101"
	"\162\366\102\347\313\005\252\153\331\216\260\052\336\206\313\026"
	"\233\111\164\201\367\355\037\365\226\365\136\163\270\256\320\234"
	"\260\331\141\157\130\305\367\010\015\372\012\344\234\053\044\051"
	"\333\334\273\361\147\100\375\053\337\343\064\125\157\136\057\070"
	"\064\314\311\231\351\365\047\005\254\154\241\311\354\167\072\250"
	"\370\355\316\111\237\031\044\277\020\277\027\005\146\171\311\202"
	"\015\343\323\056\206\144\304\106\223\045\254\117\000\362\263\331"
	"\357\274\363\312\137\215\146\300\046\213\330\235\353\201\012\216"
	"\377\223\126\240\146\117\325\162\333\073\305\036\233\061\322\061"
	"\143\013\011\226\341\015\164\262\010\154\066\143\252\323\224\326"
	"\066\224\144\166\132\225\233\317\010\120\225\250\146\255\066\112"
	"\357\344\061\354\131\021\270\244\371\354\062\021\322\241\000\152"
	"\211\233\261\307\026\034\131\276\167\350\350\042\153\071\355\201"
	"\034\062\240\210\066\040\020\163\251\251\112\167\360\313\127\232"
	"\076\326\205\114\162\237\362\360\030\142\175\327\167\231\307\253"
	"\113\204\171\260\241\072\212\007\105\073\040\230\344\042\337\340"
	"\237\117\317\303\172\163\160\303\257\174\014\017\336\352\341\247"
	"\161\020\111\370\212\256\022\374\312\315\076\313\271\205\247\265"
	"\131\236\356\356\354\310\022\333\215\064\047\141\222\161\141\312"
	"\214\354\122\042\201\100\157\360\062\030\244\071\165\227\054\370"
	"\261\254\160\030\335\271\317\222\046\216\311\205\223\123\346\245"
	"\062\207\264\327\350\241\334\003\277\004\244\252\015\327\134\105"
	"\015\163\017\304\357\214\373\171\270\076\047\355\012\247\007\051"
	"\241\277\366\375\324\071\361\236\024\211\101\074\330\257\023\261"
	"\336\265\164\207\051\000\155\111\230\331\015\342\072\072\333\236"
	"\101\136\346\216\145\256\242\207\342\202\350\125\240\310\214\004"
	"\035\166\132\026\074\053\010\076\125\373\050\072\207\132\254\017"
	"\050\244\346\312\031\325\223\176\203\360\063\025\171\100\127\246"
	"\234\342\010\325\062\052\030\026\342\136\330\206\361\067\212\350"
	"\066\226\146\104\353\111\316\060\300\124\260\310\055\064\154\140"
	"\201\027\223\257\233\206\045\243\365\306\055\160\344\276\113\125"
	"\204\047\034\034\246\110\213\167\113\026\020\056\061\030\272\021"
	"\147\123\135\343\315\100\077\124\034\233\042\075\020\256\335\243"
	"\312\271\135\136\077\377\035\211\051\065\023\073\070\155\334\322"
	"\072\142\076\372\015\221\076\034\102\320\275\325\004\227\254\067"
	"\110\037\175\152\214\036\164\312\033\141\166\077\250\214\020\371"
	"\036\103\165\113\164\305\304\222\365\352\162\310\234\002\363\157"
	"\056\101\332\375\277\254\035\071\275\303\300\070\115\331\243\205"
	"\013\045\061\107\324\341\032\023\137\230\136\377\242\002\167\172"
	"\065\003\204\056\013\172\001\350\152\022\217\223\374\106\201\360"
	"\064\124\072\275\122\263\337\244\156\307\021\142\204\337\302\141"
	"\320\051\063\351\145\054\224\331\234\001\240\241\043\233\352\351"
	"\221\373\003\267\072\237\116\125\112\053\174\277\222\176\035\277"
	"\142\102\264\051\010\347\206\005\251\001\376\215\350\342\266\051"
	"\375\027\224\042\073\032\104\245\015\256\253\152\207\003\077\126"
	"\011\370\367\153\147\112\375\120\304\211\145\075\062\303\170\300"
	"\367\004\016\103\223\251\021\007\057\314\333\252\037\333\132\147"
	"\170\157\375\210\115\260\077\125\352\335\234\044\036\251\104\153"
	"\117\365\262\161\312\375\203\262\154\346\110\077\226\257\023\061"
	"\362\167\337\011\014\007\212\054\013\346\156\237\007\262\070\351"
	"\237\216\363\344\147\135\153\015\364\006\053\000\173\035\234\316"
	"\251\117\271\113\360\310\057\244\164\310\013\153\346\076\146\310"
	"\054\157\303\076\204\207\366\302\256\077\011\213\007\210\267\363"
	"\247\175\352\310\341\222\130\274\170\237\166\104\336\146\313\061"
	"\115\203\071\106\107\235\227\162\224\023\053\343\220\207\316\052"
	"\151\073\345\326\300\002\235\061\320\245\022\106\046\330\336\334"
	"\201\375\317\117\237\147\072\011\360\122\163\175\373\013\004\120"
	"\054\140\212\026\224\035\232\245\375\210\256\110\075\146\074\320"
	"\327\302\177\004\023\175\376\225\200\340\021\101\036\347\147\242"
	"\136\316\040\332\143\124\033\001\362\114\377\055\341\246\045\375"
	"\254\032\104\313\303\153\332\331\166\055\353\305\066\373\147\334"
	"\266\325\235\220\311\214\066\064\253\202\253\104\166\021\256\255"
	"\330\214\003\174\216\235\350\257\017\333\201\330\066\117\365\336"
	"\241\060\270\305\371\010\337\000\173\231\156\133\300\120\130\021"
	"\044\320\020\243\207\312\140\301\303\116\373\152\034\315\161\225"
	"\210\130\154\361\271\231\375\357\032\233\115\027\375\320\107\114"
	"\270\052\131\063\005\130\344\206\073\147\063\362\246\216\342\250"
	"\213\314\360\300\352\301\343\032\052\151\104\236\206\047\375\327"
	"\216\356\222\257\256\152\022\031\123\007\016\201\374\210\161\350"
	"\327\125\374\156\060\325\255\113\037\102\317\133\101\034\200\257"
	"\100\076\052\227\247\303\140\317\231\004\041\322\073\207\126\144"
	"\147\303\117\153\200\370\322\177\146\104\317\020\313\300\365\320"
	"\054\262\160\322\122\372\133\110\322\042\163\250\163\237\357\132"
	"\164\141\217\016\224\276\017\140\314\043\247\066\272\221\157\063"
	"\370\110\325\147\240\317\370\223\344\026\036\065\312\210\263\002"
	"\140\101\100\305\227\303\010\316\014\310\100\366\353\065\111\214"
	"\171\103\161\204\061\062\036\145\120\252\273\275\105\354\033\017"
	"\323\142\347\153\151\111\313\254\116\273\213\362\362\222\027\325"
	"\365\270\317\015\036\000\343\357\333\263\250\315\260\044\316\022"
	"\015\072\303\076\333\364\262\257\327\105\316\265\260\227\042\143"
	"\073\055\062\337\252\152\135\066\070\065\160\331\337\374\010\246"
	"\073\154\101\012\150\356\134\113\237\157\325\314\313\251\342\001"
	"\200\175\017\055\176\277\317\365\135\175\115\213\100\132\116\026"
	"\022\002\243\250\125\344\222\141\074\026\303\132\231\117\351\326"
	"\022\250\211\070\225\316\074\047\041\002\052\072\011\325\345\166"
	"\127\326\037\164\207\355\347\305\351\034\323\250\252\162\125\264"
	"\011\172\155\032\171\366\057\350\301\232\140\140\211\222\307\050"
	"\200\202\334\050\074\002\127\265\351\043\103\350\136\165\201\127"
	"\164\314\344\167\206\350\100\346\313\037\154\350\375\063\075\111"
	"\254\100\301\150\316\202\233\156\056\111\311\352\036\320\042\221"
	"\355\303\171\361\076\012\366\024\164\241\114\024\362\331\307\063"
	"\220\275\340\250\035\006\260\246\262\231\240\001\016\235\045\055"
	"\273\077\270\121\003\315\100\357\136\314\110\265\123\244\034\360"
	"\260\240\265\302\174\324\357\237\051\023\064\131\061\206\167\021"
	"\323\174\041\363\063\275\243\366\024\023\271\314\133\326\317\012"
	"\137\056\104\212\046\212\373\374\227\050\374\375\255\167\101\362"
	"\242\216\371\200\035\103\221\222\357\237\203\366\024\143\306\154"
	"\116\141\317\346\120\121\022\361\151\174\203\166\157\045\256\276"
	"\341\135\210\334\204\136\135\263\014\021\320\206\167\071\223\361"
	"\313\140\115\014\076\211\047\276\216\145\135\254\130\174\046\000"
	"\037\246\166\317\007\041\315\303\013\256\203\113\234\252\072\056"
	"\107\124\074\147\207\133\340\044\212\260\011\362\171\166\236\123"
	"\050\040\056\362\074\051\146\324\202\351\176\220\350\371\007\026"
	"\325\277\237\160\253\351\053\353\003\341\104\322\377\345\320\334"
	"\076\066\075\127\257\220\357\077\007\326\072\253\114\147\064\237"
	"\270\027\020\225\323\171\150\041\001\122\324\315\266\243\102\032"
	"\226\312\076\163\371\250\245\162\107\157\211\271\170\274\120\256"
	"\336\030\333\032\010\210\222\177\041\346\070\366\370\144\273\046"
	"\031\324\004\125\224\306\023\044\052\043\165\006\306\012\041\251"
	"\334\252\357\151\074\043\034\336\256\155\173\116\226\173\265\034"
	"\113\024\024\130\101\321\315\200\144\155\265\315\205\204\015\245"
	"\052\037\112\271\314\327\046\176\231\044\135\124\311\140\162\025"
	"\306\361\257\265\245\105\334\321\313\256\026\031\002\125\257\241"
	"\160\127\002\123\311\320\265\346\015\002\357\005\135\046\143\143"
	"\123\372\242\255\156\013\076\300\151\163\340\233\055\123\117\220"
	"\043\045\303\137\060\215\320\205\125\271\101\243\153\204\063\111"
	"\130\022\167\274\152\066\244\237\057\261\236\250\061\172\167\230"
	"\241\222\272\246\016\262\325\226\042\334\316\162\117\351\105\104"
	"\201\316\101\345\352\365\157\204\265\102\114\003\252\211\006\015"
	"\257\360\335\133\305\105\140\061\145\040\127\311\135\036\124\256"
	"\057\050\355\143\056\106\110\353\333\361\040\260\351\224\107\377"
	"\324\302\246\224\044\314\052\240\213\225\250\173\377\023\376\137"
	"\023\200\214\323\054\071\327\240\244\257\160\275\362\335\032\351"
	"\030\177\113\137\373\100\042\160\335\331\265\066\112\104\357\341"
	"\345\066\115\101\027\316\144\361\262\012\110\153\162\201\333\212"
	"\006\343\166\354\144\017\362\023\143\127\235\032\275\147\165\113"
	"\136\222\201\107\153\001\330\230\032\077\016\106\031\161\325\364"
	"\313\162\301\155\146\300\207\165\270\311\365\333\046\375\337\247"
	"\007\302\305\361\201\176\051\043\355\363\011\171\104\365\055\327"
	"\254\105\056\144\220\232\035\364\065\177\212\146\101\161\223\130"
	"\362\341\123\047\104\121\220\273\255\310\101\361\236\035\270\143"
	"\212\237\211\301\230\240\104\322\074\255\111\103\326\124\027\124"
	"\151\175\034\202\270\255\210\344\237\377\230\043\350\336\114\136"
	"\034\377\012\165\171\304\151\335\050\071\210\276\356\302\140\120"
	"\116\041\207\025\004\272\023\364\225\207\030\152\121\304\107\025"
	"\200\276\245\374\370\363\011\167\105\313\330\112\072\252\311\044"
	"\373\341\170\237\054\265\324\141\075\002\170\227\264\106\334\003"
	"\162\133\370\013\022\372\046\362\132\077\223\232\375\221\015\102"
	"\311\140\063\127\330\115\237\111\326\301\205\362\237\212\110\147"
	"\270\354\312\335\123\171\202\053\252\112\063\050\360\020\275\106"
	"\220\044\146\057\302\034\013\037\302\004\303\000\360\330\117\043"
	"\235\350\157\314\122\227\057\354\065\003\275\062\027\354\207\374"
	"\351\040\245\175\337\156\023\003\037\337\254\054\212\130\244\074"
	"\336\072\240\344\225\007\311\314\370\253\205\150\255\225\274\113"
	"\002\063\316\161\371\031\351\231\137\026\273\137\213\217\221\326"
	"\127\233\274\167\031\073\310\102\044\162\035\356\223\200\021\235"
	"\352\127\172\065\354\226\157\266\216\050\076\075\161\034\353\200"
	"\355\270\216\152\346\065\131\301\052\066\123\140\176\053\332\066"
	"\240\056\263\312\211\136\317\266\161\152\003\134\334\300\202\031"
	"\342\172\113\106\304\376\167\251\165\126\155\074\345\170\331\133"
	"\065\010\212\022\010\372\044\046\202\015\176\046\161\140\042\312"
	"\300\250\112\165\167\134\060\102\077\314\160\117\147\303\200\155"
	"\010\352\116\027\353\241\113\166\275\373\307\327\346\001\374\010"
	"\101\264\156\047\155\167\200\072\320\105\110\230\251\000\106\135"
	"\225\267\260\167\276\337\237\274\115\357\211\312\167\141\171\047"
	"\250\010\343\247\323\311\202\226\272\044\364\072\176\337\161\056"
	"\352\271\004\122\166\201\107\314\110\012\056\274\275\120\260\256"
	"\240\157\235\120\276\256\076\013\312\152\377\334\203\232\103\044"
	"\317\103\050\235\161\201\137\362\353\376\371\136\174\352\015\263"
	"\150\337\276\252\225\352\251\230\246\224\167\042\070\210\316\025"
	"\322\132\157\056\001\006\302\324\135\137\006\044\106\256\355\305"
	"\264\174\322\301\100\346\317\072\111\267\051\326\162\216\332\210"
	"\151\310\306\332\054\310\002\030\204\256\047\227\117\340\121\162"
	"\153\051\055\125\224\206\162\173\157\157\331\303\363\201\024\333"
	"\370\267\056\132\255\036\316\367\374\156\372\257\143\116\304\301"
	"\163\032\151\375\377\204\075\026\277\366\213\227\125\334\324\333"
	"\220\105\033\367\104\323\365\016\133\007\333\060\301\172\144\267"
	"\225\032\363\220\344\341\043\005\140\013\000\121\051\303\026\372"
	"\337\377\164\130\012\054\320\267\306\215\152\203\120\146\203\254"
	"\136\266\173\345\051\203\012\163\253\317\342\110\020\063\330\002"
	"\141\324\225\026\210\361\252\050\376\046\026\145\175\032\041\030"
	"\304\067\362\017\312\025\353\112\032\303\042\343\147\200\170\243"
	"\220\003\037\243\025\364\000\312\212\277\134\245\324\204\256\000"
	"\215\262\265\332\247\066\317\301\121\152\360\071\111\322\256\240"
	"\261\276\164\314\046\055\141\144\151\073\251\257\273\276\211\141"
	"\325\124\050\200\104\262\002\110\223\336\377\070\212\312\335\066"
	"\220\135\056\305\040\066\161\015\220\311\104\211\067\171\231\311"
	"\134\262\105\120\077\004\024\075\267\115\363\144\272\270\110\214"
	"\130\075\355\267\263\126\150\366\033\232\372\131\234\172\275\214"
	"\317\101\007\141\265\343\261\034\007\051\300\143\101\071\024\171"
	"\147\312\244\165\035\031\020\226\035\245\201\155\353\030\305\037"
	"\105\043\120\022\327\103\014\035\332\000\376\100\253\002\223"
#define      tst2_z	19
#define      tst2	((&data[5677]))
	"\164\313\262\205\275\036\102\040\215\252\251\300\261\330\242\164"
	"\315\155\375\242\222\214"
#define      chk1_z	22
#define      chk1	((&data[5697]))
	"\066\010\172\166\161\363\040\261\271\205\364\040\326\201\311\042"
	"\357\215\170\325\317\316\005\262\103"
#define      pswd_z	256
#define      pswd	((&data[5724]))
	"\033\056\237\052\272\335\143\161\301\254\127\143\311\361\343\313"
	"\211\340\375\141\256\012\220\320\310\272\131\032\331\260\225\262"
	"\230\246\110\304\017\160\147\327\047\161\160\255\025\071\235\041"
	"\061\055\131\250\242\217\162\212\307\357\003\351\313\053\346\034"
	"\317\253\334\260\341\075\350\374\362\074\063\062\030\260\377\075"
	"\202\074\164\155\140\142\051\217\325\236\335\041\202\334\042\165"
	"\041\061\125\361\252\313\011\351\002\005\335\103\046\216\325\276"
	"\364\200\176\345\163\007\220\105\314\345\236\011\230\214\223\130"
	"\163\030\362\350\370\075\126\225\177\160\074\111\257\167\265\265"
	"\007\052\164\154\330\336\102\354\212\154\343\135\203\310\151\035"
	"\075\214\041\122\263\274\023\306\151\260\372\235\200\340\246\370"
	"\130\046\041\261\037\152\324\350\316\055\043\342\216\150\230\065"
	"\103\055\221\043\215\065\015\331\325\121\027\357\020\221\126\222"
	"\050\173\174\373\245\324\223\210\176\255\217\066\052\332\070\244"
	"\363\346\235\175\261\204\043\163\030\336\211\372\043\014\105\340"
	"\271\023\062\046\314\066\170\066\114\367\002\013\122\166\130\056"
	"\343\251\011\271\257\000\143\356\070\223\044\035\000\065\343\265"
	"\360\305\302\111\344\247\210\345\150\122\310\213\126\310\145\022"
	"\337\313\202\153\204\070\133\301\103\152\361\350\045\344\327\127"
	"\055\140\326\032\105\356\204\276\050\043\204\054\064\267\062\120"
	"\005\234"
#define      shll_z	10
#define      shll	((&data[6044]))
	"\307\304\023\266\211\056\362\057\334\131"
#define      msg1_z	42
#define      msg1	((&data[6060]))
	"\373\004\017\002\270\202\271\213\100\353\263\361\224\250\322\112"
	"\200\333\241\302\066\200\255\020\251\046\212\035\217\064\043\124"
	"\235\177\232\244\365\064\172\141\322\224\325\243\346\223\236\206"
#define      date_z	1
#define      date	((&data[6102]))
	"\127"
#define      xecc_z	15
#define      xecc	((&data[6105]))
	"\024\374\207\041\043\017\274\037\165\167\234\125\101\002\012\147"
	"\033"
#define      inlo_z	3
#define      inlo	((&data[6120]))
	"\107\076\075"
#define      lsto_z	1
#define      lsto	((&data[6123]))
	"\213"
#define      tst1_z	22
#define      tst1	((&data[6124]))
	"\165\136\252\065\335\140\235\146\014\070\231\331\243\332\170\025"
	"\236\274\215\177\103\072"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
