#include <string.h>
#include <elf.h>
#include <endian.h>

#if __BYTE_ORDER == __BIG_ENDIAN
#define ENDIAN_SUFFIX "eb"
#else
#define ENDIAN_SUFFIX ""
#endif

#define LDSO_ARCH "aarch64" ENDIAN_SUFFIX

#define IS_COPY(x) ((x)==R_AARCH64_COPY)
#define IS_PLT(x) ((x)==R_AARCH64_JUMP_SLOT)

static inline void do_single_reloc(
	struct dso *self, unsigned char *base_addr,
	size_t *reloc_addr, int type, size_t addend,
	Sym *sym, size_t sym_size,
	struct symdef def, size_t sym_val)
{
	switch(type) {
	case R_AARCH64_GLOB_DAT:
	case R_AARCH64_JUMP_SLOT:
	case R_AARCH64_64:
		*reloc_addr = sym_val + addend;
		break;
	case R_AARCH64_32:
		*(uint32_t *)reloc_addr = sym_val + addend;
	case R_AARCH64_RELATIVE:
		*reloc_addr += (size_t)base_addr + addend;
		break;
	case R_AARCH64_COPY:
		memcpy(reloc_addr, (void *)sym_val, sym_size);
		break;
	case R_AARCH64_TLS_DTPMOD:
		*reloc_addr = def.dso ? def.dso->tls_id : self->tls_id;
		break;
	}
	/* FIXME: Are all cases met? Are they handled correctly? */
}

#define NO_LEGACY_INITFINI
