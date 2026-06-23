# rtl/idma

Croc's iDMA integration. iDMA itself is a normal git dependency (see `idma:` in
`../../Bender.yml`); only the pieces Croc must supply locally live here.

## `idma_rw_obi.sv`

The iDMA **read-write OBI** backend (`idma_backend_rw_obi` + `idma_legalizer_rw_obi` +
`idma_transport_layer_rw_obi`), generated from the iDMA generator. The iDMA release ships
generated backends for its *default* protocol set only, which does **not** include pure
`rw_obi` — so Croc generates and commits just that one variant here, listed directly in
Croc's own `Bender.yml`. It therefore travels with Croc (also when Croc is used as a Bender
dependency) and needs no patching of the iDMA checkout.

Regenerate after bumping the iDMA version:

    IDMA=$(bender path idma)
    make -C "$IDMA" \
        target/rtl/idma_transport_layer_rw_obi.sv \
        target/rtl/idma_legalizer_rw_obi.sv \
        target/rtl/idma_backend_rw_obi.sv \
        IDMA_BACKEND_IDS=rw_obi IDMA_FE_IDS= PYTHON=<venv-python>
    cat "$IDMA"/target/rtl/idma_{transport_layer,legalizer,backend}_rw_obi.sv \
        > rtl/idma/idma_rw_obi.sv

The generator needs a Python venv with: mako pyyaml hjson flatdict tabulate gitpython.

The hand-written wrapper that instantiates this backend is `../croc_idma.sv`.

> If Croc is integrated into a larger SoC that also generates `rw_obi` at the root, drop this
> file to avoid a duplicate module definition.
