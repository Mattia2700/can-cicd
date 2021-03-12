# INPUT FILES
NETWORK_FILE = "../networks/[network]/network.json"
NETWORK_FILE_VALIDATION_SCHEMA = "config/network_schema_flatbufgenerator.json"

# OUTPUT for schema_generator
# INPUT for schema_compiler
FLATBUF_SCHEMA_FILE = "out/[network]/schema.fbs"

MERGE_NETWORKS = False
MAX_PAYLOAD_SIZE_BYTES = 8
TYPES_SIZE = {
    "enum": 1,
    "bool": 1,
    "int8": 1,
    "uint8": 1,

    "int16": 2,
    "uint16": 2,

    "int32": 4,
    "uint32": 4,
    "float32": 4,

    "int64": 8,
    "uint64": 8,
    "float64": 8
}

# LANGUAGES
CONFIG_LANGUAGES = [
        "c",
        "python"
    ]