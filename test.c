int dummy[] = {-1};
#include <stdio.h>

#define hexDigitToNum(h) ((h >= 97) ? h - 87 : h - 48)

const char* quineData;

int main() {
	int c = 0;
	while (quineData[c]) {
		putchar(hexDigitToNum(quineData[c]) * 16 + hexDigitToNum(quineData[c+1]));
		c += 2;
	}
    printf("quineData = \"%s\";\n", quineData);
    return 0;
}

/*-}();

chunks :: Int -> [a] -> [[a]]
chunks _ [] = []
chunks n xs =
    let (ys, zs) = splitAt n xs
    in  ys : chunks n zs

toDigit :: Int -> Int
toDigit x
    | x >= 48 && x <= 57 = x - 48
    | x >= 97 && x <= 102 = x - 87

fromHexRepr :: String -> Int
fromHexRepr (a:b:[]) = 16 * (toDigit $ fromEnum a) + (toDigit $ fromEnum b)

decode :: String -> String
decode s = map (\s' -> toEnum(fromHexRepr s') :: Char) (chunks 2 s)

main :: IO ()
main = do
    putStr . decode $ quineData
    putStrLn ("quineData = \"" ++ quineData ++ "\";")

-- */ const char*
quineData = "696e742064756d6d795b5d203d207b2d317d3b0a23696e636c756465203c737464696f2e683e0a0a23646566696e65206865784469676974546f4e756d28682920282868203e3d20393729203f2068202d203837203a2068202d203438290a0a636f6e737420636861722a207175696e65446174613b0a0a696e74206d61696e2829207b0a09696e742063203d20303b0a097768696c6520287175696e65446174615b635d29207b0a090970757463686172286865784469676974546f4e756d287175696e65446174615b635d29202a203136202b206865784469676974546f4e756d287175696e65446174615b632b315d29293b0a090963202b3d20323b0a097d0a202020207072696e746628227175696e6544617461203d205c2225735c223b5c6e222c207175696e6544617461293b0a2020202072657475726e20303b0a7d0a0a2f2a2d7d28293b0a0a6368756e6b73203a3a20496e74202d3e205b615d202d3e205b5b615d5d0a6368756e6b73205f205b5d203d205b5d0a6368756e6b73206e207873203d0a202020206c6574202879732c207a7329203d2073706c69744174206e2078730a20202020696e20207973203a206368756e6b73206e207a730a0a746f4469676974203a3a20496e74202d3e20496e740a746f446967697420780a202020207c2078203e3d2034382026262078203c3d203537203d2078202d2034380a202020207c2078203e3d2039372026262078203c3d20313032203d2078202d2038370a0a66726f6d48657852657072203a3a20537472696e67202d3e20496e740a66726f6d486578526570722028613a623a5b5d29203d203136202a2028746f446967697420242066726f6d456e756d206129202b2028746f446967697420242066726f6d456e756d2062290a0a6465636f6465203a3a20537472696e67202d3e20537472696e670a6465636f64652073203d206d617020285c7327202d3e20746f456e756d2866726f6d4865785265707220732729203a3a20436861722920286368756e6b7320322073290a0a6d61696e203a3a20494f2028290a6d61696e203d20646f0a20202020707574537472202e206465636f64652024207175696e65446174610a202020207075745374724c6e2028227175696e6544617461203d205c2222202b2b207175696e6544617461202b2b20225c223b22290a0a2d2d202a2f20636f6e737420636861722a0a";
