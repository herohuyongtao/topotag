Library release of paper ***TopoTag: A Robust and Scalable Topological Fiducial Marker System***.

**Project page**: https://herohuyongtao.github.io/research/publications/topo-tag/.


## Overview
TopoTag is a robust and scalable topological fiducial marker system, which supports reliable and accurate pose estimation from a single image. TopoTag uses topological and geometrical information in marker detection to achieve higher robustness. Topological information is extensively used for 2D marker detection, and further corresponding geometrical information for ID decoding. Robust 3D pose estimation is achieved by taking advantage of all TopoTag vertices. Without sacrificing bits for higher recall and precision like previous systems, TopoTag can use full bits for ID encoding. TopoTag supports tens of thousands unique IDs and easily extends to millions of unique tags resulting in massive scalability. Experiments on the dataset and real indoor and outdoor scene tests with a rolling shutter camera both show that TopoTag significantly outperforms previous fiducial marker systems in terms of various metrics, including detection accuracy, vertex jitter, pose jitter and accuracy, etc. In addition, TopoTag supports occlusion as long as the main tag topological structure is maintained and allows for flexible shape design where users can customize internal and external marker shapes.

![](https://herohuyongtao.github.io/research/publications/topo-tag/teaser.png)


## How to run
Refer to the test script `test/main.cpp` on how to use the library. 
> Remarks: 
> 1. Make sure to set **`tagModelFile`** and **`tagBitSize`** in file `test/data/topotag_detection_params.yml` to match the TopoTag family you want to use. For example, the provided sample image is using 3x3 circular TopoTag, so `tagModelFile` and `tagBitSize` are set to be `Topotag_3x3_circle_model.dat` and `3` respectively.
> 2. Current library only supports **Win32** target architecture (e.g., select **Win32** for the "Optional platform for generator" when CMake).


## Terms of use
The library is provided for research purposes only. Any commercial use is prohibited. When using the library in your research work, please cite the following paper:
> **"TopoTag: A Robust and Scalable Topological Fiducial Marker System."**  
> Guoxing Yu, Yongtao Hu, and Jingwen Dai  
> *IEEE TVCG 2021*.
```
@article{yu2021topotag,
  title={{TopoTag: A Robust and Scalable Topological Fiducial Marker System}},
  author={Yu, Guoxing and Hu, Yongtao and Dai, Jingwen},
  journal={IEEE Transactions on Visualization and Computer Graphics (TVCG)},
  volume={27},
  number={9},
  pages={3769-3780},
  year={2021},
  publisher={IEEE}
}
```


## Contact
If you find any bug or have any question about the code, please report to the **Issues** page.
