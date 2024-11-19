# iDMA
[![CI status](https://github.com/pulp-platform/idma/actions/workflows/gitlab-ci.yml/badge.svg?branch=master)](https://github.com/pulp-platform/idma/actions/workflows/gitlab-ci.yml?query=branch%3Amaster)
[![GitHub tag (latest SemVer)](https://img.shields.io/github/v/tag/pulp-platform/iDMA?color=blue&label=current&sort=semver)](CHANGELOG.md)
[![SHL-0.51 license](https://img.shields.io/badge/license-SHL--0.51-green)](LICENSE)

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
@misc{benz2023highperformance,
      title={A High-performance, Energy-efficient Modular {DMA} Engine Architecture},
      author={Thomas Benz and Michael Rogenmoser and Paul Scheffler and Samuel Riedel and Alessandro Ottaviano and Andreas Kurth and Torsten Hoefler and Luca Benini},
      year={2023},
      eprint={2305.05240},
      archivePrefix={arXiv},
      primaryClass={cs.AR}
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
@article{Scheffler2023SparseSS,
  title={Sparse Stream Semantic Registers: A Lightweight ISA Extension Accelerating General Sparse Linear Algebra},
  author={Paul Scheffler and Florian Zaruba and Fabian Schuiki and Torsten Hoefler and Luca Benini},
  journal={ArXiv},
  year={2023},
  volume={abs/2305.05559},
  url={https://api.semanticscholar.org/CorpusID:258564420}
}
```

</p>
</details>


<details>
<summary><b>Iguana: An End-to-End Open-Source Linux-capable RISC-V SoC in 130nm CMOS</b></summary>
<p>

```
@article{benziguana,
  title={Iguana: An End-to-End Open-Source Linux-capable RISC-V SoC in 130nm CMOS},
  author={Benz, Thomas and Scheffler, Paul and Sch{\"o}nleber, Jannis and Benini, Luca}
}
```

</p>
</details>


<details>
<summary><b>Cheshire: A Lightweight, Linux-Capable RISC-V Host Platform for Domain-Specific Accelerator Plug-In</b></summary>
<p>

```
@article{Ottaviano2023CheshireAL,
  title={Cheshire: A Lightweight, Linux-Capable RISC-V Host Platform for Domain-Specific Accelerator Plug-In},
  author={Alessandro Ottaviano and Thomas Emanuel Benz and Paul Scheffler and Luca Benini},
  journal={ArXiv},
  year={2023},
  volume={abs/2305.04760},
  url={https://api.semanticscholar.org/CorpusID:258557988}
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
<summary><b>OSMOSIS: Enabling Multi-Tenancy in Datacenter SmartNICs</b></summary>
<p>

```
@article{Khalilov2023OSMOSISEM,
  title={OSMOSIS: Enabling Multi-Tenancy in Datacenter SmartNICs},
  author={Mikhail Khalilov and Marcin Chrapek and Siyuan Shen and Alessandro Vezzu and Thomas Emanuel Benz and Salvatore Di Girolamo and Timo Schneider and Daniele Di Sensi and Luca Benini and Torsten Hoefler},
  journal={ArXiv},
  year={2023},
  volume={abs/2309.03628},
  url={https://api.semanticscholar.org/CorpusID:261582327}
}
```

</p>
</details>


<details>
<summary><b>”Interrupting” the Status Quo: A First Glance at the RISC-V Advanced Interrupt Architecture (AIA)</b></summary>
<p>

```
@article{marques2024interrupting,
  title={" Interrupting" the Status Quo: A First Glance at the RISC-V Advanced Interrupt Architecture (AIA)},
  author={Marques, Francisco and Rodr{\'\i}guez, Manuel and S{\'a}, Bruno and Pinto, Sandro},
  journal={IEEE Access},
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
@misc{benz2023axirealm,
  title={AXI-REALM: A Lightweight and Modular Interconnect Extension for Traffic Regulation and Monitoring of Heterogeneous Real-Time SoCs},
  author={Thomas Benz and Alessandro Ottaviano and Robert Balas and Angelo Garofalo and Francesco Restuccia and Alessandro Biondi and Luca Benini},
  year={2023},
  eprint={2311.09662},
  archivePrefix={arXiv},
  primaryClass={cs.AR}
}
```

</p>
</details>


## License
iDMA is released under Solderpad v0.51 (SHL-0.51) see [`LICENSE`](LICENSE):

## Contributing
We are happy to accept pull requests and issues from any contributors. See [`CONTRIBUTING.md`](CONTRIBUTING.md)
for additional information.

## Getting Started

### Prerequisites
iDMA can directly be integrated after cloning it from this repository. However, to regenerate
the configuration registers, build the documentation, and run various checks on the source code,
various tools are required.

- [`bender >= v0.24.0`](https://github.com/pulp-platform/bender)
- [`morty >= v0.6.0`](https://github.com/zarubaf/morty)
- [`Verilator = v4.202`](https://www.veripool.org/verilator)
- [`Verible >= v0.0-1051-gd4cd328`](https://github.com/chipsalliance/verible)
- [`Python3 >= 3.8`](https://www.python.org/downloads/) including some the libraries listed
  in [`requirements.txt`](requirements.txt)

### Building the Documentation
Use `make doc` to build the documentation. The output is located at `doc/build`.


### Simulation
We currently do not include any free and open-source simulation setup. However, if you have access to
[*Questa advanced simulator*](https://eda.sw.siemens.com/en-US/ic/questa/simulation/advanced-simulator/),
a simulation can be launched using:

```bash
make idma_sim_all
cd target/sim/vsim
$VSIM -c -do "source compile.tcl; quit"
$VSIM -c -t 1ps -voptargs=+acc \
     +job_file=jobs/backend_rw_axi/simple.txt \
     -logfile rw_axi_simple.log \
     -wlf rw_axi_simple.wlf \
     tb_idma_backend_rw_axi \
     -do "source start.tcl; run -all"
```
with gui:
```bash
make idma_sim_all
cd target/sim/vsim
$VSIM -c -do "source compile.tcl; quit"
$VSIM -t 1ps -voptargs=+acc \
     +job_file=jobs/backend_rw_axi/simple.txt \
     -logfile rw_axi_simple.log \
     -wlf rw_axi_simple.wlf \
     tb_idma_backend_rw_axi \
     -do "source start.tcl; source wave/backend_rw_axi.do; run -all"
```

Where:
- `job_file=jobs/backend_rw_axi/simple.txt` can point to any valid [job file](jobs/README.md)
- `-logfile rw_axi_simple.log` denotes the log file
- `-wlf rw_axi_simple.wlf` specifies a wave file
- `tb_idma_backend_rw_axi` can be any of the supplied testbenches
