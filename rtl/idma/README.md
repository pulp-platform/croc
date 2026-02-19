# iDMA
[![CI status](https://github.com/pulp-platform/idma/actions/workflows/gitlab-ci.yml/badge.svg?branch=master)](https://github.com/pulp-platform/idma/actions/workflows/gitlab-ci.yml?query=branch%3Amaster)
[![GitHub tag (latest SemVer)](https://img.shields.io/github/v/tag/pulp-platform/iDMA?color=blue&label=current&sort=semver)](CHANGELOG.md)
[![SHL-0.51 license](https://img.shields.io/badge/license-SHL--0.51-green)](../../LICENSE.md)

Home of the iDMA - a modular, parametrizable, and highly flexible *Data Movement Accelerator (DMA)*
architecture targeting a wide range of platforms from ultra-low power edge nodes to high-performance
computing systems. iDMA is part of the [PULP (Parallel Ultra-Low-Power) platform](https://pulp-platform.org/),
where it is used as a cluster level DMA in the [Snitch Cluster](https://github.com/pulp-platform/snitch)
and in the [PULP Cluster](https://github.com/pulp-platform/pulp).

iDMA currently implements the following protocols:
- [AXI4](https://developer.arm.com/documentation/ihi0022/hc/?lang=en)[+ATOPs from AXI5](https://github.com/pulp-platform/axi)
- [AXI4 Lite](https://developer.arm.com/documentation/ihi0022/hc/?lang=en)
- [AXI4 Stream](https://developer.arm.com/documentation/ihi0051/b/?lang=en)
- [OBI v1.5.0](https://github.com/openhwgroup/programs/blob/master/TGs/cores-task-group/obi/OBI-v1.5.0.pdf)
- [TileLink UH v1.8.1](https://starfivetech.com/uploads/tilelink_spec_1.8.1.pdf)

## Modular Architecture
iDMA is centered around the idea to split the DMA engine in 3 distinct parts:
- **Frontend:** The frontend implements the communication with the platform and emits transfer requests
- **Midend:** Midend(s) transform a transfer request from the frontend to generic 1D transfers,
              which can be handled by the backend.
- **Bakend:** The backend gets a 1D transfer `(src_addr, dst_addr, length)` and executes it
              on the transport protocol's manager interface.

The interface between the parts are well-defined, making it easy to adapt to a new system or to add
new capabilities.

## Documentation
The [latest documentation](https://pulp-platform.github.io/iDMA) can be accessed pre-built.

## Publications
If you use iDMA in your work or research, you can cite us:

```
@article{benz2023highperformance,
  title={A high-performance, energy-efficient modular DMA engine architecture},
  author={Benz, Thomas and Rogenmoser, Michael and Scheffler, Paul and Riedel, Samuel and Ottaviano, Alessandro and Kurth, Andreas and Hoefler, Torsten and Benini, Luca},
  journal={IEEE Transactions on Computers},
  volume={73},
  number={1},
  pages={263--277},
  year={2023},
  publisher={IEEE}
}
```

The following systems/publications make use of iDMA:

<details>
<summary><b>An Open-Source Platform for High-Performance Non-Coherent On-Chip Communication</b></summary>
<p>

```
@article{Kurth2020AnOP,
  title={An Open-Source Platform for High-Performance Non-Coherent On-Chip Communication},
  author={Andreas Kurth and Wolfgang R{\"o}nninger and Thomas Emanuel Benz and Matheus A. Cavalcante and Fabian Schuiki and Florian Zaruba and Luca Benini},
  journal={IEEE Transactions on Computers},
  year={2020},
  volume={71},
  pages={1794-1809},
  url={https://api.semanticscholar.org/CorpusID:221640945}
}
```

</p>
</details>


<details>
<summary><b>PsPIN: A high-performance low-power architecture for flexible in-network compute</b></summary>
<p>

```
@article{Girolamo2020PsPINAH,
  title={PsPIN: A high-performance low-power architecture for flexible in-network compute},
  author={Salvatore Di Girolamo and Andreas Kurth and Alexandru Calotoiu and Thomas Emanuel Benz and Timo Schneider and Jakub Ber{\'a}nek and Luca Benini and Torsten Hoefler},
  journal={ArXiv},
  year={2020},
  volume={abs/2010.03536},
  url={https://api.semanticscholar.org/CorpusID:222177442}
}
```

</p>
</details>


<details>
<summary><b>Indirection Stream Semantic Register Architecture for Efficient Sparse-Dense Linear Algebra</b></summary>
<p>

```
@article{Scheffler2020IndirectionSS,
  title={Indirection Stream Semantic Register Architecture for Efficient Sparse-Dense Linear Algebra},
  author={Paul Scheffler and Florian Zaruba and Fabian Schuiki and Torsten Hoefler and Luca Benini},
  journal={2021 Design, Automation \& Test in Europe Conference \& Exhibition (DATE)},
  year={2020},
  pages={1787-1792},
  url={https://api.semanticscholar.org/CorpusID:226964339}
}
```

</p>
</details>


<details>
<summary><b>A RISC-V in-network accelerator for flexible high-performance low-power packet processing</b></summary>
<p>

```
@article{Girolamo2021ARI,
  title={A RISC-V in-network accelerator for flexible high-performance low-power packet processing},
  author={Salvatore Di Girolamo and Andreas Kurth and Alexandru Calotoiu and Thomas Emanuel Benz and Timo Schneider and Jakub Ber{\'a}nek and Luca Benini and Torsten Hoefler},
  journal={2021 ACM/IEEE 48th Annual International Symposium on Computer Architecture (ISCA)},
  year={2021},
  pages={958-971},
  url={https://api.semanticscholar.org/CorpusID:235416184}
}
```

</p>
</details>


<details>
<summary><b>A 10-core SoC with 20 Fine-Grain Power Domains for Energy-Proportional Data-Parallel Processing over a Wide Voltage and Temperature Range</b></summary>
<p>

```
@article{Benz2021A1S,
  title={A 10-core SoC with 20 Fine-Grain Power Domains for Energy-Proportional Data-Parallel Processing over a Wide Voltage and Temperature Range},
  author={Thomas Emanuel Benz and Luca Bertaccini and Florian Zaruba and Fabian Schuiki and Frank K. G{\"u}rkaynak and Luca Benini},
  journal={ESSCIRC 2021 - IEEE 47th European Solid State Circuits Conference (ESSCIRC)},
  year={2021},
  pages={263-266},
  url={https://api.semanticscholar.org/CorpusID:240003121}
}
```

</p>
</details>


<details>
<summary><b>PATRONoC: Parallel AXI Transport Reducing Overhead for Networks-on-Chip targeting Multi-Accelerator DNN Platforms at the Edge</b></summary>
<p>

```
@article{Jain2023PATRONoCPA,
  title={PATRONoC: Parallel AXI Transport Reducing Overhead for Networks-on-Chip targeting Multi-Accelerator DNN Platforms at the Edge},
  author={Vikram Jain and Matheus A. Cavalcante and Nazareno Bruschi and Michael Rogenmoser and Thomas Emanuel Benz and Andreas Kurth and Davide Rossi and Luca Benini and Marian Verhelst},
  journal={2023 60th ACM/IEEE Design Automation Conference (DAC)},
  year={2023},
  pages={1-6},
  url={https://api.semanticscholar.org/CorpusID:260351087}
}
```

</p>
</details>


<details>
<summary><b>Sparse Stream Semantic Registers: A Lightweight ISA Extension Accelerating General Sparse Linear Algebra</b></summary>
<p>

```
@article{scheffler2023sparse,
  title={Sparse stream semantic registers: A lightweight ISA extension accelerating general sparse linear algebra},
  author={Scheffler, Paul and Zaruba, Florian and Schuiki, Fabian and Hoefler, Torsten and Benini, Luca},
  journal={IEEE Transactions on Parallel and Distributed Systems},
  volume={34},
  number={12},
  pages={3147--3161},
  year={2023},
  publisher={IEEE}
}
```

</p>
</details>


<details>
<summary><b>Iguana: An End-to-End Open-Source Linux-capable RISC-V SoC in 130nm CMOS</b></summary>
<p>

```
@inproceedings{benz2023iguana,
  title={Iguana: An End-to-End Open-Source Linux-capable RISC-V SoC in 130nm CMOS},
  author={Benz, Thomas and Scheffler, Paul and Sch{\"o}nleber, Jannis and Benini, Luca},
  booktitle={RISC-V Summit Europe 2023},
  year={2023},
  organization={RISC-V International}
}
```

</p>
</details>


<details>
<summary><b>Cheshire: A Lightweight, Linux-Capable RISC-V Host Platform for Domain-Specific Accelerator Plug-In</b></summary>
<p>

```
@article{ottaviano2023cheshire,
  title={Cheshire: A lightweight, linux-capable risc-v host platform for domain-specific accelerator plug-in},
  author={Ottaviano, Alessandro and Benz, Thomas and Scheffler, Paul and Benini, Luca},
  journal={IEEE Transactions on Circuits and Systems II: Express Briefs},
  volume={70},
  number={10},
  pages={3777--3781},
  year={2023},
  publisher={IEEE}
}
```

</p>
</details>


<details>
<summary><b>MemPool: A Scalable Manycore Architecture with a Low-Latency Shared L1 Memory</b></summary>
<p>

```
@article{Riedel2023MemPoolAS,
  title={MemPool: A Scalable Manycore Architecture with a Low-Latency Shared L1 Memory},
  author={Samuel Riedel and Matheus A. Cavalcante and Renzo Andri and Luca Benini},
  journal={ArXiv},
  year={2023},
  volume={abs/2303.17742},
  url={https://api.semanticscholar.org/CorpusID:257900957}
}
```

</p>
</details>


<details>
<summary><b>Protego: A Low-Overhead Open-Source I/O Physical Memory Protection Unit for RISC-V</b></summary>
<p>

```
@inproceedings{wistoff2023protego,
  title={Protego: A Low-Overhead Open-Source I/O Physical Memory Protection Unit for RISC-V},
  author={Wistoff, Nils and Kuster, Andreas and Rogenmoser, Michael and Balas, Robert and Schneider, Moritz and Benini, Luca},
  booktitle={Proceedings of the 1st Safety and Security in Heterogeneous Open System-on-Chip Platforms Workshop (SSH-SoC 2023)},
  year={2023},
  organization={SSH-SoC}
}
```

</p>
</details>


<details>
<summary><b>SARIS: Accelerating stencil computations on energy-efficient RISC-V compute clusters with indirect stream registers</b></summary>
<p>

```
@inproceedings{scheffler2024saris,
  title={SARIS: Accelerating stencil computations on energy-efficient RISC-V compute clusters with indirect stream registers},
  author={Scheffler, Paul and Colagrande, Luca and Benini, Luca},
  booktitle={Proceedings of the 61st ACM/IEEE Design Automation Conference},
  pages={1--6},
  year={2024}
}
```

</p>
</details>


<details>
<summary><b>OSMOSIS: Enabling Multi-Tenancy in Datacenter SmartNICs</b></summary>
<p>

```
@inproceedings{khalilov2024osmosis,
  title={OSMOSIS: Enabling Multi-Tenancy in Datacenter SmartNICs},
  author={Khalilov, Mikhail and Chrapek, Marcin and Shen, Siyuan and Vezzu, Alessandro and Benz, Thomas and Di Girolamo, Salvatore and Schneider, Timo and De Sensi, Daniele and Benini, Luca and Hoefler, Torsten},
  booktitle={2024 USENIX Annual Technical Conference (USENIX ATC 24)},
  pages={247--263},
  year={2024}
}
```

</p>
</details>


<details>
<summary><b>”Interrupting” the Status Quo: A First Glance at the RISC-V Advanced Interrupt Architecture (AIA)</b></summary>
<p>

```
@article{marques2024interrupting,
  title={“Interrupting” the status quo: a first glance at the RISC-V advanced interrupt architecture (AIA)},
  author={Marques, Francisco and Rodr{\'\i}guez, Manuel and S{\'a}, Bruno and Pinto, Sandro},
  journal={IEEE Access},
  volume={12},
  pages={9822--9833},
  year={2024},
  publisher={IEEE}
}

```

</p>
</details>


<details>
<summary><b>AXI-REALM: A Lightweight and Modular Interconnect Extension for Traffic Regulation and Monitoring of Heterogeneous Real-Time SoCs</b></summary>
<p>

```
@inproceedings{benz2024axi,
  title={AXI-REALM: A lightweight and modular interconnect extension for traffic regulation and monitoring of heterogeneous real-time SoCs},
  author={Benz, Thomas and Ottaviano, Alessandro and Balas, Robert and Garofalo, Angelo and Restuccia, Francesco and Biondi, Alessandro and Benini, Luca},
  booktitle={2024 Design, Automation \& Test in Europe Conference \& Exhibition (DATE)},
  pages={1--6},
  year={2024},
  organization={IEEE}
}
```

</p>
</details>


<details>
<summary><b>FlooNoC: A 645-Gb/s/link 0.15-pJ/B/hop Open-Source NoC With Wide Physical Links and End-to-End AXI4 Parallel Multistream Support</b></summary>
<p>

```
@article{fischer2025floonoc,
  title={FlooNoC: A 645-Gb/s/link 0.15-pJ/B/hop Open-Source NoC With Wide Physical Links and End-to-End AXI4 Parallel Multistream Support},
  author={Fischer, Tim and Rogenmoser, Michael and Benz, Thomas and G{\"u}rkaynak, Frank K and Benini, Luca},
  journal={IEEE Transactions on Very Large Scale Integration (VLSI) Systems},
  year={2025},
  publisher={IEEE}
}
```

</p>
</details>


<details>
<summary><b>Occamy: A 432-core 28.1 DP-GFLOP/s/W 83\% FPU utilization dual-chiplet, dual-HBM2E RISC-V-based accelerator for stencil and sparse linear algebra computations with 8-to-64-bit floating-point support in 12nm FinFET</b></summary>
<p>

```
@inproceedings{paulin2024occamy,
  title={Occamy: A 432-core 28.1 DP-GFLOP/s/W 83\% FPU utilization dual-chiplet, dual-HBM2E RISC-V-based accelerator for stencil and sparse linear algebra computations with 8-to-64-bit floating-point support in 12nm FinFET},
  author={Paulin, Gianna and Scheffler, Paul and Benz, Thomas and Cavalcante, Matheus and Fischer, Tim and Eggimann, Manuel and Zhang, Yichao and Wistoff, Nils and Bertaccini, Luca and Colagrande, Luca and others},
  booktitle={2024 IEEE Symposium on VLSI Technology and Circuits (VLSI Technology and Circuits)},
  pages={1--2},
  year={2024},
  organization={IEEE}
}
```

</p>
</details>


<details>
<summary><b>ControlPULPlet: A Flexible Real-time Multi-core RISC-V Controller for 2.5 D Systems-in-package</b></summary>
<p>

```
@article{ottaviano2024controlpulplet,
  title={ControlPULPlet: A Flexible Real-time Multi-core RISC-V Controller for 2.5 D Systems-in-package},
  author={Ottaviano, Alessandro and Balas, Robert and Fischer, Tim and Benz, Thomas and Bartolini, Andrea and Benini, Luca},
  journal={arXiv preprint arXiv:2410.15985},
  year={2024}
}
```

</p>
</details>


<details>
<summary><b>AXI-REALM: Safe, Modular and Lightweight Traffic Monitoring and Regulation for Heterogeneous Mixed-Criticality Systems</b></summary>
<p>

```
@article{benz2025axi,
  title={AXI-REALM: Safe, Modular and Lightweight Traffic Monitoring and Regulation for Heterogeneous Mixed-Criticality Systems},
  author={Benz, Thomas and Ottaviano, Alessandro and Liang, Chaoqun and Balas, Robert and Garofalo, Angelo and Restuccia, Francesco and Biondi, Alessandro and Rossi, Davide and Benini, Luca},
  journal={arXiv preprint arXiv:2501.10161},
  year={2025}
}
```

</p>
</details>


<details>
<summary><b>Occamy: A 432-Core Dual-Chiplet Dual-HBM2E 768-DP-GFLOP/s RISC-V System for 8-to-64-bit Dense and Sparse Computing in 12-nm FinFET</b></summary>
<p>

```
@article{scheffler2025occamy,
  title={Occamy: A 432-Core Dual-Chiplet Dual-HBM2E 768-DP-GFLOP/s RISC-V System for 8-to-64-bit Dense and Sparse Computing in 12-nm FinFET},
  author={Scheffler, Paul and Benz, Thomas and Potocnik, Viviane and Fischer, Tim and Colagrande, Luca and Wistoff, Nils and Zhang, Yichao and Bertaccini, Luca and Ottavi, Gianmarco and Eggimann, Manuel and others},
  journal={IEEE Journal of Solid-State Circuits},
  year={2025},
  publisher={IEEE}
}

```

</p>
</details>


<details>
<summary><b>A Reliable, Time-Predictable Heterogeneous SoC for AI-Enhanced Mixed-Criticality Edge Applications</b></summary>
<p>

```
@misc{garofalo2025reliabletimepredictableheterogeneoussoc,
      title={A Reliable, Time-Predictable Heterogeneous SoC for AI-Enhanced Mixed-Criticality Edge Applications},
      author={Angelo Garofalo and Alessandro Ottaviano and Matteo Perotti and Thomas Benz and Yvan Tortorella and Robert Balas and Michael Rogenmoser and Chi Zhang and Luca Bertaccini and Nils Wistoff and Maicol Ciani and Cyril Koenig and Mattia Sinigaglia and Luca Valente and Paul Scheffler and Manuel Eggimann and Matheus Cavalcante and Francesco Restuccia and Alessandro Biondi and Francesco Conti and Frank K. Gurkaynak and Davide Rossi and Luca Benini},
      year={2025},
      eprint={2502.18953},
      archivePrefix={arXiv},
      primaryClass={cs.AR},
      url={https://arxiv.org/abs/2502.18953},
}
```

</p>
</details>





## License
iDMA is released under Solderpad v0.51 (SHL-0.51) see [`LICENSE`](../..LICENSE.md):

