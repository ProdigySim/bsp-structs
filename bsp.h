struct lump_t
{
	int	version;	// lump format version
	int	fileofs;	// offset into file (bytes)
	int	filelen;	// length of lump (bytes)
	char	fourCC[4];	// lump ident code
};

struct dheader_t
{
	int	ident;                // BSP file identifier
	int	version;              // BSP file version
	lump_t lumps[64];  // lump directory array
	int	mapRevision;          // the map's revision (iteration, version) number
};

public struct BSP_FILE {
	dheader_t header;
};

public struct dbrush_t {
	int fstside;
	int numside;
	int flags;
};

public struct seven_brushes_t {
	dbrush_t brushes[7];
};
