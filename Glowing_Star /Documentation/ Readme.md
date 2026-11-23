Here you will find a description of each manufacturing document to make the repository structure clear and easy to navigate.

## 1. `Glowing_Star_BOM.txt`  
- **Title:** *Bill of Materials (BOM)*  
- **Content:** A complete list of all electronic components required to assemble the printed circuit board (PCB).  
- **Details:**  
  - Component designators (e.g., R1, C1, LED1).  
  - Component values (e.g., 22kΩ resistor, 1µF capacitor).  
  - Quantity per board.  
  - Specific part references (e.g., manufacturer part numbers / catalog codes).  

## 2. `Glowing_Star_BOT.pdf`  
- **Title:** *Bottom Layer (BOT)*  
- **Content:** Drawing of the bottom side of the PCB (copper traces and pads, as well as bottom-mounted components if applicable).  
- **Purpose:** Used in PCB fabrication to define the conductive tracks on the bottom layer.  

## 3. `Glowing_Star_MIL.pdf`  
- **Title:** *Mill Layer (MIL)*  
- **Content:** Mechanical drawing for milling the board outline and routing cutouts.  
- **Purpose:** Defines the exact board dimensions and shape (e.g., rounded corners, slots, and mounting holes).  

## 4. `Glowing_Star_Silkscreen_BOT.pdf` & `Glowing_Star_Silkscreen_TOP.pdf`  
- **Title:** *Silkscreen / Legend – Bottom & Top*  
- **Content:**  
  - **TOP:** Component markings, text, and reference designators printed on the top side of the board.  
  - **BOT:** Silkscreen markings on the bottom side of the board (if present).  
- **Purpose:** Serves as a visual guide during component placement and inspection (e.g., identifying the location of R1 or C1).  

## 5. `Glowing_Star_SolderMask_BOT.pdf`  
- **Title:** *Solder Mask – Bottom Layer*  
- **Content:** Drawing of the bottom solder mask (the protective green or colored coating that insulates copper traces and prevents accidental short circuits).  
- **Purpose:** Defines the mask openings (where the solder mask is *omitted*) to expose copper pads for soldering.  

## 6. `Glowing_Star_SolderMask_TOP.pdf`  
- **Title:** *Solder Mask – Top Layer*  
- **Content:** Drawing of the top solder mask (analogous to the bottom layer, applied to the top side of the board).  

## 7. `Glowing_Star_PnP_back.txt`  
- **Title:** *Pick and Place (PnP) – Back Side*  
- **Content:** Centroid file listing components and their exact coordinates on the board for automated SMT assembly machines.  
- **Details:**  
  - Coordinates (X, Y).  
  - Component rotation angle.  
  - Package/footprint type (e.g., "0805" for SMD resistors).  

## 8. `Glowing_Star_SMB.pdf`  
- **Title:** *Solder Mask – Bottom (SMB)*  
- **Content:** Alternative/additional Gerber/PDF output for the bottom solder mask (containing supplementary fabrication details).  

## Why Are These Files Important?  
These manufacturing files are **essential for PCB fabrication and assembly**. Without them, the manufacturer would not know:  
- How to fabricate the bare board (**MIL, BOT, Solder Mask**).  
- Where and how to mount the components (**PnP, BOM**).  
- How to print component designators for assembly and debugging (**Silkscreen**).
