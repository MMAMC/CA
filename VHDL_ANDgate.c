library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity AND_gate is
  port (
    A: in STD_LOGIC;
    B: in STD_LOGIC;
    C: out STD_LOGIC
  );
end AND_gate;

architecture Behavioral of AND_gate is
begin
  C <= A and B;
end Behavioral;
