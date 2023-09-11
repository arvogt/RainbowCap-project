# RainbowCap-project
Dear user,

Welcome to the RainbowCap-project. This project developed a spectral illumination plate for photobiological and optogenetic experiments in 96-Well Microplates. This resporatory contains supporting files with protocols for microcontroller (sketches) and 3D print files. For further details please see the publication or contact us directly.

## Protocols for microcontroller
The sketch-files for microcontrollers are only exemplary and should give an impression. Of course, the pin assignment and the illumination times depend on the respective experiments. We provide following files:
1. "basic 10s": This is the simplest protocol and the entire illumination plate lights up for 10 seconds after the ON button is pressed once.
2. "light titration": The actual RainbowCap prototype allows up to four different illumination times within one column. This allows light titration experiments in addition to spectral experiments. For example, the protocol shown here allows illumination for 10 s, 1 s, 100 ms or 10 ms.
3. "pDawn": This protocol was used for the long-term and light-dependent gene expression experiment of the reporter DsRed.

## 3D print files
The print files were originally created with the "3D Builder" software (Microsoft) and are optimized for polyamide laser sintering (PA2200, black coloration afterwards). The files are available both as a final version (final merged) and in edit mode (single parts) to allow future optimizations. We provide the print files for three individual components:
1. "LED-plate": This plate can be used as a part of the whole RainbowCap system, but can also be used as a universal plate for very simple LED experiments.
2. "filter-plate": This plate is used as a holder for the optical filters and can only be used in combination with the LED plate.
3. "adapter": This component connects the LED-plate with the spectroradiometer (CSS-45, Gigahertz-Optik GmbH, Germany) for calibrations.
