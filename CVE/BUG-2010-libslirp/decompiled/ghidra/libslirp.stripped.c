typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned char    dwfenc;
typedef unsigned int    dword;
typedef unsigned long    qword;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct eh_frame_hdr eh_frame_hdr, *Peh_frame_hdr;

struct eh_frame_hdr {
    byte eh_frame_hdr_version; // Exception Handler Frame Header Version
    dwfenc eh_frame_pointer_encoding; // Exception Handler Frame Pointer Encoding
    dwfenc eh_frame_desc_entry_count_encoding; // Encoding of # of Exception Handler FDEs
    dwfenc eh_frame_table_encoding; // Exception Handler Table Encoding
};

typedef struct fde_table_entry fde_table_entry, *Pfde_table_entry;

struct fde_table_entry {
    dword initial_loc; // Initial Location
    dword data_loc; // Data location
};

typedef ushort sa_family_t;

typedef void _IO_lock_t;

typedef struct _IO_marker _IO_marker, *P_IO_marker;

typedef struct _IO_FILE _IO_FILE, *P_IO_FILE;

typedef long __off_t;

typedef long __off64_t;

typedef ulong size_t;

struct _IO_FILE {
    int _flags;
    char * _IO_read_ptr;
    char * _IO_read_end;
    char * _IO_read_base;
    char * _IO_write_base;
    char * _IO_write_ptr;
    char * _IO_write_end;
    char * _IO_buf_base;
    char * _IO_buf_end;
    char * _IO_save_base;
    char * _IO_backup_base;
    char * _IO_save_end;
    struct _IO_marker * _markers;
    struct _IO_FILE * _chain;
    int _fileno;
    int _flags2;
    __off_t _old_offset;
    ushort _cur_column;
    char _vtable_offset;
    char _shortbuf[1];
    _IO_lock_t * _lock;
    __off64_t _offset;
    void * __pad1;
    void * __pad2;
    void * __pad3;
    void * __pad4;
    size_t __pad5;
    int _mode;
    char _unused2[15];
};

struct _IO_marker {
    struct _IO_marker * _next;
    struct _IO_FILE * _sbuf;
    int _pos;
};

typedef struct stat64 stat64, *Pstat64;

typedef ulong __dev_t;

typedef ulong __ino64_t;

typedef ulong __nlink_t;

typedef uint __mode_t;

typedef uint __uid_t;

typedef uint __gid_t;

typedef long __blksize_t;

typedef long __blkcnt64_t;

typedef struct timespec timespec, *Ptimespec;

typedef long __time_t;

struct timespec {
    __time_t tv_sec;
    long tv_nsec;
};

struct stat64 {
    __dev_t st_dev;
    __ino64_t st_ino;
    __nlink_t st_nlink;
    __mode_t st_mode;
    __uid_t st_uid;
    __gid_t st_gid;
    int __pad0;
    __dev_t st_rdev;
    __off_t st_size;
    __blksize_t st_blksize;
    __blkcnt64_t st_blocks;
    struct timespec st_atim;
    struct timespec st_mtim;
    struct timespec st_ctim;
    long __unused[3];
};

typedef struct in_addr in_addr, *Pin_addr;

typedef uint uint32_t;

typedef uint32_t in_addr_t;

struct in_addr {
    in_addr_t s_addr;
};

typedef struct _IO_FILE FILE;

typedef struct sockaddr sockaddr, *Psockaddr;

struct sockaddr {
    sa_family_t sa_family;
    char sa_data[14];
};

typedef uint __socklen_t;

typedef __socklen_t socklen_t;

typedef long __ssize_t;

typedef __ssize_t ssize_t;

typedef int __pid_t;

typedef int (* __compar_fn_t)(void *, void *);

typedef struct Elf64_Rela Elf64_Rela, *PElf64_Rela;

struct Elf64_Rela {
    qword r_offset; // location to apply the relocation action
    qword r_info; // the symbol table index and the type of relocation
    qword r_addend; // a constant addend used to compute the relocatable field value
};

typedef enum Elf64_DynTag {
    DT_AUDIT=1879047932,
    DT_AUXILIARY=2147483645,
    DT_BIND_NOW=24,
    DT_CHECKSUM=1879047672,
    DT_CONFIG=1879047930,
    DT_DEBUG=21,
    DT_DEPAUDIT=1879047931,
    DT_ENCODING=32,
    DT_FEATURE_1=1879047676,
    DT_FILTER=2147483647,
    DT_FINI=13,
    DT_FINI_ARRAY=26,
    DT_FINI_ARRAYSZ=28,
    DT_FLAGS=30,
    DT_FLAGS_1=1879048187,
    DT_GNU_CONFLICT=1879047928,
    DT_GNU_CONFLICTSZ=1879047670,
    DT_GNU_HASH=1879047925,
    DT_GNU_LIBLIST=1879047929,
    DT_GNU_LIBLISTSZ=1879047671,
    DT_GNU_PRELINKED=1879047669,
    DT_HASH=4,
    DT_INIT=12,
    DT_INIT_ARRAY=25,
    DT_INIT_ARRAYSZ=27,
    DT_JMPREL=23,
    DT_MOVEENT=1879047674,
    DT_MOVESZ=1879047675,
    DT_MOVETAB=1879047934,
    DT_NEEDED=1,
    DT_NULL=0,
    DT_PLTGOT=3,
    DT_PLTPAD=1879047933,
    DT_PLTPADSZ=1879047673,
    DT_PLTREL=20,
    DT_PLTRELSZ=2,
    DT_POSFLAG_1=1879047677,
    DT_PREINIT_ARRAYSZ=33,
    DT_REL=17,
    DT_RELA=7,
    DT_RELACOUNT=1879048185,
    DT_RELAENT=9,
    DT_RELASZ=8,
    DT_RELCOUNT=1879048186,
    DT_RELENT=19,
    DT_RELSZ=18,
    DT_RPATH=15,
    DT_RUNPATH=29,
    DT_SONAME=14,
    DT_STRSZ=10,
    DT_STRTAB=5,
    DT_SYMBOLIC=16,
    DT_SYMENT=11,
    DT_SYMINENT=1879047679,
    DT_SYMINFO=1879047935,
    DT_SYMINSZ=1879047678,
    DT_SYMTAB=6,
    DT_TEXTREL=22,
    DT_TLSDESC_GOT=1879047927,
    DT_TLSDESC_PLT=1879047926,
    DT_VERDEF=1879048188,
    DT_VERDEFNUM=1879048189,
    DT_VERNEED=1879048190,
    DT_VERNEEDNUM=1879048191,
    DT_VERSYM=1879048176
} Elf64_DynTag;

typedef enum Elf_ProgramHeaderType {
    PT_DYNAMIC=2,
    PT_GNU_EH_FRAME=1685382480,
    PT_GNU_RELRO=1685382482,
    PT_GNU_STACK=1685382481,
    PT_INTERP=3,
    PT_LOAD=1,
    PT_NOTE=4,
    PT_NULL=0,
    PT_PHDR=6,
    PT_SHLIB=5,
    PT_TLS=7
} Elf_ProgramHeaderType;

typedef struct Elf64_Shdr Elf64_Shdr, *PElf64_Shdr;

typedef enum Elf_SectionHeaderType {
    SHT_CHECKSUM=1879048184,
    SHT_DYNAMIC=6,
    SHT_DYNSYM=11,
    SHT_FINI_ARRAY=15,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_GNU_HASH=1879048182,
    SHT_GNU_LIBLIST=1879048183,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_verneed=1879048190,
    SHT_GNU_versym=1879048191,
    SHT_GROUP=17,
    SHT_HASH=5,
    SHT_INIT_ARRAY=14,
    SHT_NOBITS=8,
    SHT_NOTE=7,
    SHT_NULL=0,
    SHT_PREINIT_ARRAY=16,
    SHT_PROGBITS=1,
    SHT_REL=9,
    SHT_RELA=4,
    SHT_SHLIB=10,
    SHT_STRTAB=3,
    SHT_SUNW_COMDAT=1879048187,
    SHT_SUNW_move=1879048186,
    SHT_SUNW_syminfo=1879048188,
    SHT_SYMTAB=2,
    SHT_SYMTAB_SHNDX=18
} Elf_SectionHeaderType;

struct Elf64_Shdr {
    dword sh_name;
    enum Elf_SectionHeaderType sh_type;
    qword sh_flags;
    qword sh_addr;
    qword sh_offset;
    qword sh_size;
    dword sh_link;
    dword sh_info;
    qword sh_addralign;
    qword sh_entsize;
};

typedef struct Elf64_Dyn Elf64_Dyn, *PElf64_Dyn;

struct Elf64_Dyn {
    enum Elf64_DynTag d_tag;
    qword d_val;
};

typedef struct Elf64_Phdr Elf64_Phdr, *PElf64_Phdr;

struct Elf64_Phdr {
    enum Elf_ProgramHeaderType p_type;
    dword p_flags;
    qword p_offset;
    qword p_vaddr;
    qword p_paddr;
    qword p_filesz;
    qword p_memsz;
    qword p_align;
};

typedef struct Elf64_Sym Elf64_Sym, *PElf64_Sym;

struct Elf64_Sym {
    dword st_name;
    byte st_info;
    byte st_other;
    word st_shndx;
    qword st_value;
    qword st_size;
};

typedef struct Elf64_Ehdr Elf64_Ehdr, *PElf64_Ehdr;

struct Elf64_Ehdr {
    byte e_ident_magic_num;
    char e_ident_magic_str[3];
    byte e_ident_class;
    byte e_ident_data;
    byte e_ident_version;
    byte e_ident_pad[9];
    word e_type;
    word e_machine;
    dword e_version;
    qword e_entry;
    qword e_phoff;
    qword e_shoff;
    dword e_flags;
    word e_ehsize;
    word e_phentsize;
    word e_phnum;
    word e_shentsize;
    word e_shnum;
    word e_shstrndx;
};

typedef ushort uint16_t;




void _DT_INIT(void)

{
  __gmon_start__();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * inet_ntop(int __af,void *__cp,char *__buf,socklen_t __len)

{
  char *pcVar1;
  
  pcVar1 = inet_ntop(__af,__cp,__buf,__len);
  return pcVar1;
}



long slirp_new(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_1 == (uint *)0x0) {
    g_return_if_fail_warning("Slirp","slirp_new","cfg != NULL");
    lVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      g_return_if_fail_warning("Slirp","slirp_new","cfg->version >= SLIRP_CONFIG_VERSION_MIN");
      lVar1 = 0;
    }
    else {
      if (*param_1 < 2) {
        if ((*(ulong *)(param_1 + 0x22) < 0x44) && (*(long *)(param_1 + 0x22) != 0)) {
          g_return_if_fail_warning
                    ("Slirp","slirp_new","cfg->if_mtu >= IF_MTU_MIN || cfg->if_mtu == 0");
          lVar1 = 0;
        }
        else {
          if (*(ulong *)(param_1 + 0x22) < 0xfff2) {
            if ((*(ulong *)(param_1 + 0x24) < 0x44) && (*(long *)(param_1 + 0x24) != 0)) {
              g_return_if_fail_warning
                        ("Slirp","slirp_new","cfg->if_mru >= IF_MRU_MIN || cfg->if_mru == 0");
              lVar1 = 0;
            }
            else {
              if (*(ulong *)(param_1 + 0x24) < 0xfff2) {
                lVar1 = g_malloc0(0x1778);
                FUN_0010d107();
                *(undefined8 *)(lVar1 + 6000) = param_3;
                *(undefined8 *)(lVar1 + 0x1768) = param_2;
                uVar2 = g_rand_new();
                *(undefined8 *)(lVar1 + 0x1750) = uVar2;
                *(uint *)(lVar1 + 0x7c) = param_1[1];
                *(undefined *)(lVar1 + 9) = *(undefined *)(param_1 + 2);
                *(undefined *)(lVar1 + 10) = *(undefined *)(param_1 + 6);
                FUN_00105e6b(lVar1);
                FUN_0010929d(lVar1);
                FUN_00107e9d(lVar1);
                FUN_0010a28a(lVar1);
                *(uint *)(lVar1 + 0xc) = param_1[3];
                *(uint *)(lVar1 + 0x10) = param_1[4];
                *(uint *)(lVar1 + 0x14) = param_1[5];
                uVar2 = *(undefined8 *)(param_1 + 9);
                *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 7);
                *(undefined8 *)(lVar1 + 0x20) = uVar2;
                *(undefined *)(lVar1 + 0x28) = *(undefined *)(param_1 + 0xb);
                uVar2 = *(undefined8 *)(param_1 + 0xe);
                *(undefined8 *)(lVar1 + 0x2c) = *(undefined8 *)(param_1 + 0xc);
                *(undefined8 *)(lVar1 + 0x34) = uVar2;
                if (*(long *)(param_1 + 0x10) != 0) {
                  FUN_0011c2cc(lVar1 + 0x58,0x21,*(undefined8 *)(param_1 + 0x10),lVar1 + 0x58);
                }
                uVar2 = g_strdup(*(undefined8 *)(param_1 + 0x14));
                *(undefined8 *)(lVar1 + 0x6d8) = uVar2;
                uVar2 = g_strdup(*(undefined8 *)(param_1 + 0x16));
                *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
                uVar2 = g_strdup(*(undefined8 *)(param_1 + 0x20));
                *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
                *(uint *)(lVar1 + 0x3c) = param_1[0x18];
                *(uint *)(lVar1 + 0x40) = param_1[0x19];
                uVar2 = *(undefined8 *)(param_1 + 0x1c);
                *(undefined8 *)(lVar1 + 0x44) = *(undefined8 *)(param_1 + 0x1a);
                *(undefined8 *)(lVar1 + 0x4c) = uVar2;
                uVar2 = g_strdup(*(undefined8 *)(param_1 + 0x12));
                *(undefined8 *)(lVar1 + 0x1400) = uVar2;
                if (*(long *)(param_1 + 0x1e) != 0) {
                  FUN_001058e0(lVar1,*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1e)
                              );
                }
                if (*(long *)(param_1 + 0x22) == 0) {
                  uVar3 = 0x5dc;
                }
                else {
                  uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x22);
                }
                *(undefined4 *)(lVar1 + 0x88) = uVar3;
                if (*(long *)(param_1 + 0x24) == 0) {
                  uVar3 = 0x5dc;
                }
                else {
                  uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x24);
                }
                *(undefined4 *)(lVar1 + 0x8c) = uVar3;
                *(undefined *)(lVar1 + 0x90) = *(undefined *)(param_1 + 0x26);
                *(undefined *)(lVar1 + 0x1760) = *(undefined *)((long)param_1 + 0x99);
              }
              else {
                g_return_if_fail_warning("Slirp","slirp_new","cfg->if_mru <= IF_MRU_MAX");
                lVar1 = 0;
              }
            }
          }
          else {
            g_return_if_fail_warning("Slirp","slirp_new","cfg->if_mtu <= IF_MTU_MAX");
            lVar1 = 0;
          }
        }
      }
      else {
        g_return_if_fail_warning("Slirp","slirp_new","cfg->version <= SLIRP_CONFIG_VERSION_MAX");
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void free(void *__ptr)

{
  free(__ptr);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t recv(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = recv(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strcasecmp(char *__s1,char *__s2)

{
  int iVar1;
  
  iVar1 = strcasecmp(__s1,__s2);
  return iVar1;
}



void g_string_new(void)

{
  g_string_new();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int * __errno_location(void)

{
  int *piVar1;
  
  piVar1 = __errno_location();
  return piVar1;
}



void g_malloc(void)

{
  g_malloc();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int strncmp(char *__s1,char *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = strncmp(__s1,__s2,__n);
  return iVar1;
}



void g_free(void)

{
  g_free();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strcpy(char *__dest,char *__src)

{
  char *pcVar1;
  
  pcVar1 = strcpy(__dest,__src);
  return pcVar1;
}



void g_strsplit(void)

{
  g_strsplit();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void qsort(void *__base,size_t __nmemb,size_t __size,__compar_fn_t __compar)

{
  qsort(__base,__nmemb,__size,__compar);
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int setsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t __optlen)

{
  int iVar1;
  
  iVar1 = setsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fcntl(int __fd,int __cmd,...)

{
  int iVar1;
  
  iVar1 = fcntl(__fd,__cmd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * inet_ntoa(in_addr __in)

{
  char *pcVar1;
  
  pcVar1 = inet_ntoa((in_addr)__in);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getpeername(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getpeername(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int fclose(FILE *__stream)

{
  int iVar1;
  
  iVar1 = fclose(__stream);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int shutdown(int __fd,int __how)

{
  int iVar1;
  
  iVar1 = shutdown(__fd,__how);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

size_t strlen(char *__s)

{
  size_t sVar1;
  
  sVar1 = strlen(__s);
  return sVar1;
}



void __stack_chk_fail(void)

{
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint16_t htons(uint16_t __hostshort)

{
  uint16_t uVar1;
  
  uVar1 = htons(__hostshort);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int dup2(int __fd,int __fd2)

{
  int iVar1;
  
  iVar1 = dup2(__fd,__fd2);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  ssize_t sVar1;
  
  sVar1 = send(__fd,__buf,__n,__flags);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strchr(char *__s,int __c)

{
  char *pcVar1;
  
  pcVar1 = strchr(__s,__c);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int snprintf(char *__s,size_t __maxlen,char *__format,...)

{
  int iVar1;
  
  iVar1 = snprintf(__s,__maxlen,__format);
  return iVar1;
}



void g_rand_free(void)

{
  g_rand_free();
  return;
}



void g_assertion_message_expr(void)

{
  g_assertion_message_expr();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void __assert_fail(char *__assertion,char *__file,uint __line,char *__function)

{
                    // WARNING: Subroutine does not return
  __assert_fail(__assertion,__file,__line,__function);
}



void g_return_if_fail_warning(void)

{
  g_return_if_fail_warning();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint32_t htonl(uint32_t __hostlong)

{
  uint32_t uVar1;
  
  uVar1 = htonl(__hostlong);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memset(void *__s,int __c,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int ioctl(int __fd,ulong __request,...)

{
  int iVar1;
  
  iVar1 = ioctl(__fd,__request);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t sendto(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t __addr_len)

{
  ssize_t sVar1;
  
  sVar1 = sendto(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int close(int __fd)

{
  int iVar1;
  
  iVar1 = close(__fd);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__pid_t setsid(void)

{
  __pid_t _Var1;
  
  _Var1 = setsid();
  return _Var1;
}



void g_string_free(void)

{
  g_string_free();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  ssize_t sVar1;
  
  sVar1 = read(__fd,__buf,__nbytes);
  return sVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int memcmp(void *__s1,void *__s2,size_t __n)

{
  int iVar1;
  
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * fgets(char *__s,int __n,FILE *__stream)

{
  char *pcVar1;
  
  pcVar1 = fgets(__s,__n,__stream);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getsockopt(int __fd,int __level,int __optname,void *__optval,socklen_t *__optlen)

{
  int iVar1;
  
  iVar1 = getsockopt(__fd,__level,__optname,__optval,__optlen);
  return iVar1;
}



void g_rand_new(void)

{
  g_rand_new();
  return;
}



void g_spawn_async(void)

{
  g_spawn_async();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint if_nametoindex(char *__ifname)

{
  uint uVar1;
  
  uVar1 = if_nametoindex(__ifname);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

FILE * fopen64(char *__filename,char *__modes)

{
  FILE *pFVar1;
  
  pFVar1 = fopen64(__filename,__modes);
  return pFVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memcpy(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}



void g_strstr_len(void)

{
  g_strstr_len();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int inet_pton(int __af,char *__cp,void *__buf)

{
  int iVar1;
  
  iVar1 = inet_pton(__af,__cp,__buf);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * malloc(size_t __size)

{
  void *pvVar1;
  
  pvVar1 = malloc(__size);
  return pvVar1;
}



void g_malloc_n(void)

{
  g_malloc_n();
  return;
}



void __isoc99_sscanf(void)

{
  __isoc99_sscanf();
  return;
}



void g_rand_int_range(void)

{
  g_rand_int_range();
  return;
}



void g_parse_debug_string(void)

{
  g_parse_debug_string();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int listen(int __fd,int __n)

{
  int iVar1;
  
  iVar1 = listen(__fd,__n);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

ssize_t recvfrom(int __fd,void *__buf,size_t __n,int __flags,sockaddr *__addr,socklen_t *__addr_len)

{
  ssize_t sVar1;
  
  sVar1 = recvfrom(__fd,__buf,__n,__flags,__addr,__addr_len);
  return sVar1;
}



void g_strfreev(void)

{
  g_strfreev();
  return;
}



void g_string_append_printf(void)

{
  g_string_append_printf();
  return;
}



void g_log(void)

{
  g_log();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * realloc(void *__ptr,size_t __size)

{
  void *pvVar1;
  
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint16_t ntohs(uint16_t __netshort)

{
  uint16_t uVar1;
  
  uVar1 = ntohs(__netshort);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int bind(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = bind(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int open64(char *__file,int __oflag,...)

{
  int iVar1;
  
  iVar1 = open64(__file,__oflag);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

void * memmove(void *__dest,void *__src,size_t __n)

{
  void *pvVar1;
  
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}



void g_malloc0_n(void)

{
  g_malloc0_n();
  return;
}



void g_realloc(void)

{
  g_realloc();
  return;
}



void g_malloc0(void)

{
  g_malloc0();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  int iVar1;
  
  iVar1 = accept(__fd,__addr,__addr_len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int getsockname(int __fd,sockaddr *__addr,socklen_t *__len)

{
  int iVar1;
  
  iVar1 = getsockname(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int atoi(char *__nptr)

{
  int iVar1;
  
  iVar1 = atoi(__nptr);
  return iVar1;
}



void g_strdup(void)

{
  g_strdup();
  return;
}



void g_getenv(void)

{
  g_getenv();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  int iVar1;
  
  iVar1 = connect(__fd,__addr,__len);
  return iVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

__off64_t lseek64(int __fd,__off64_t __offset,int __whence)

{
  __off64_t _Var1;
  
  _Var1 = lseek64(__fd,__offset,__whence);
  return _Var1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

uint32_t ntohl(uint32_t __netlong)

{
  uint32_t uVar1;
  
  uVar1 = ntohl(__netlong);
  return uVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strerror(int __errnum)

{
  char *pcVar1;
  
  pcVar1 = strerror(__errnum);
  return pcVar1;
}



// WARNING: Unknown calling convention yet parameter storage is locked

char * strstr(char *__haystack,char *__needle)

{
  char *pcVar1;
  
  pcVar1 = strstr(__haystack,__needle);
  return pcVar1;
}



void g_error_free(void)

{
  g_error_free();
  return;
}



// WARNING: Unknown calling convention yet parameter storage is locked

int socket(int __domain,int __type,int __protocol)

{
  int iVar1;
  
  iVar1 = socket(__domain,__type,__protocol);
  return iVar1;
}



void __cxa_finalize(void)

{
  __cxa_finalize();
  return;
}



// WARNING: Removing unreachable block (ram,0x001031f7)
// WARNING: Removing unreachable block (ram,0x00103203)

void entry(void)

{
  return;
}



void _FINI_0(void)

{
  if (DAT_00324f40 != '\0') {
    return;
  }
  __cxa_finalize(PTR_LOOP_003232a0);
  entry();
  DAT_00324f40 = 1;
  return;
}



// WARNING: Removing unreachable block (ram,0x00103248)
// WARNING: Removing unreachable block (ram,0x00103254)

void _INIT_0(void)

{
  return;
}



// WARNING: Type propagation algorithm not settling

void FUN_001032ba(long param_1,in_addr param_2,byte *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int local_18;
  
  uVar3 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0xc);
  lVar4 = param_1 + 0x1408;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"arp_table_add...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    inet_ntoa(param_2);
    g_log("Slirp",0x80," ip = %s");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," hw addr = %02x:%02x:%02x:%02x:%02x:%02x",(ulong)*param_3,(ulong)param_3[1],
          (ulong)param_3[2],(ulong)param_3[3],(ulong)param_3[4],(ulong)param_3[5]);
  }
  if (((param_2 != (in_addr)0x0) && (param_2 != (in_addr)0xffffffff)) &&
     (param_2 != (in_addr)(uVar2 | ~uVar3))) {
    local_18 = 0;
    while (local_18 < 0x10) {
      if (param_2 == (in_addr)((in_addr *)((long)local_18 * 0x1c + lVar4 + 0xe))->s_addr) {
        memcpy((void *)((long)local_18 * 0x1c + lVar4 + 8),param_3,6);
        return;
      }
      local_18 = local_18 + 1;
    }
    *(in_addr *)&((in_addr *)(lVar4 + (long)*(int *)(param_1 + 0x15c8) * 0x1c + 0xe))->s_addr =
         param_2;
    memcpy((void *)((long)*(int *)(param_1 + 0x15c8) * 0x1c + lVar4 + 8),param_3,6);
    iVar1 = *(int *)(param_1 + 0x15c8) + 1;
    uVar3 = (uint)(iVar1 >> 0x1f) >> 0x1c;
    *(int *)(param_1 + 0x15c8) = (iVar1 + uVar3 & 0xf) - uVar3;
  }
  return;
}



// WARNING: Type propagation algorithm not settling

undefined8 FUN_0010350e(long param_1,in_addr param_2,byte *param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 uVar4;
  int local_18;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0xc);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"arp_table_search...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    pcVar3 = inet_ntoa(param_2);
    g_log("Slirp",0x80," ip = %s",pcVar3);
  }
  if ((param_2 == (in_addr)0xffffffff) || (param_2 == (in_addr)(uVar2 | ~uVar1))) {
    memset(param_3,0xff,6);
    uVar4 = 1;
  }
  else {
    local_18 = 0;
    while (local_18 < 0x10) {
      if (param_2 == (in_addr)((in_addr *)((long)local_18 * 0x1c + param_1 + 0x1408 + 0xe))->s_addr)
      {
        uVar4 = 0x103641;
        memcpy(param_3,(void *)((long)local_18 * 0x1c + param_1 + 0x1408 + 8),6);
        if ((DAT_003250e0 & 1) != 0) {
          g_log("Slirp",0x80," found hw addr = %02x:%02x:%02x:%02x:%02x:%02x",(ulong)*param_3,
                (ulong)param_3[1],(ulong)param_3[2],(ulong)param_3[3],(ulong)param_3[4],
                (ulong)param_3[5],uVar4);
        }
        return 1;
      }
      local_18 = local_18 + 1;
    }
    uVar4 = 0;
  }
  return uVar4;
}



undefined2 * FUN_001036f2(long param_1,int *param_2,void *param_3)

{
  int iVar1;
  uint32_t uVar2;
  long lVar3;
  undefined2 *puVar4;
  uint32_t local_24;
  
  local_24 = 0;
  while( true ) {
    if (0xf < (int)local_24) {
      return (undefined2 *)0;
    }
    lVar3 = param_1 + ((long)(int)local_24 + 0x22) * 8;
    if ((*(short *)(lVar3 + 10) == 0) ||
       (iVar1 = memcmp(param_3,(void *)(lVar3 + 0xc),6), iVar1 == 0)) break;
    local_24 = local_24 + 1;
  }
  puVar4 = (undefined2 *)(param_1 + ((long)(int)local_24 + 0x22) * 8 + 10);
  *puVar4 = 1;
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar2 = htonl(local_24);
  *param_2 = iVar1 + uVar2;
  return puVar4;
}



short * FUN_001037bc(long param_1,uint32_t *param_2,void *param_3)

{
  uint32_t uVar1;
  uint32_t uVar2;
  int iVar3;
  short *psVar4;
  
  uVar1 = ntohl(*param_2);
  uVar2 = ntohl(*(uint32_t *)(param_1 + 0x3c));
  if ((uVar1 < uVar2) || (uVar2 + 0x10 <= uVar1)) {
LAB_00103862:
    psVar4 = (short *)0x0;
  }
  else {
    param_1 = param_1 + ((ulong)(uVar1 - uVar2) + 0x22) * 8;
    psVar4 = (short *)(param_1 + 10);
    if (*psVar4 != 0) {
      iVar3 = memcmp(param_3,(void *)(param_1 + 0xc),6);
      if (iVar3 != 0) goto LAB_00103862;
    }
    *psVar4 = 1;
  }
  return psVar4;
}



undefined2 * FUN_00103869(long param_1,int *param_2,void *param_3)

{
  int iVar1;
  uint32_t uVar2;
  undefined2 *puVar3;
  uint32_t local_24;
  
  local_24 = 0;
  while( true ) {
    if (0xf < (int)local_24) {
      return (undefined2 *)0;
    }
    iVar1 = memcmp(param_3,(void *)(param_1 + ((long)(int)local_24 + 0x22) * 8 + 0xc),6);
    if (iVar1 == 0) break;
    local_24 = local_24 + 1;
  }
  puVar3 = (undefined2 *)(param_1 + ((long)(int)local_24 + 0x22) * 8 + 10);
  *puVar3 = 1;
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar2 = htonl(local_24);
  *param_2 = iVar1 + uVar2;
  return puVar3;
}



void FUN_0010391b(long param_1,uint *param_2,uint32_t *param_3)

{
  uint32_t *puVar1;
  byte bVar2;
  byte bVar3;
  uint32_t uVar4;
  int iVar5;
  uint uVar6;
  uint32_t uVar7;
  byte *pbVar8;
  byte *local_28;
  
  *param_2 = 0;
  uVar4 = htonl(0);
  *param_3 = uVar4;
  pbVar8 = (byte *)(param_1 + 0x240);
  iVar5 = memcmp((void *)(param_1 + 0x108),&DAT_0011d1a0,4);
  if (iVar5 == 0) {
    local_28 = (byte *)(param_1 + 0x10c);
    while (local_28 < pbVar8) {
      bVar2 = *local_28;
      if (bVar2 == 0) {
        local_28 = local_28 + 1;
      }
      else {
        if ((bVar2 == 0xff) || (pbVar8 <= local_28 + 1)) break;
        puVar1 = (uint32_t *)(local_28 + 2);
        bVar3 = local_28[1];
        uVar6 = (uint)bVar3;
        if (pbVar8 < (byte *)((long)puVar1 + (long)(int)uVar6)) break;
        if ((DAT_003250e0 & 1) != 0) {
          g_log("Slirp",0x80,0x11d1a4,(ulong)bVar2,(ulong)uVar6);
        }
        if (bVar2 == 0x32) {
          if (3 < bVar3) {
            *param_3 = *puVar1;
          }
        }
        else {
          if ((bVar2 == 0x35) && (bVar3 != 0)) {
            *param_2 = (uint)*(byte *)puVar1;
          }
        }
        local_28 = (byte *)((long)puVar1 + (long)(int)uVar6);
      }
    }
    if (((*param_2 == 3) && (uVar4 = *param_3, uVar7 = htonl(0), uVar4 == uVar7)) &&
       (*(int *)(param_1 + 0x28) != 0)) {
      *param_3 = *(uint32_t *)(param_1 + 0x28);
    }
  }
  return;
}



void FUN_00103ad6(long param_1,long param_2)

{
  undefined *puVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  char *pcVar4;
  size_t sVar5;
  long in_FS_OFFSET;
  uint32_t local_7c;
  uint local_78;
  uint32_t local_74;
  long local_70;
  uint32_t *local_68;
  long local_60;
  void *local_58;
  uint32_t *local_50;
  undefined local_48 [2];
  uint16_t local_46;
  undefined4 local_44;
  undefined local_38 [2];
  uint16_t local_36;
  uint32_t local_34 [3];
  undefined4 local_26;
  undefined2 local_22;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  FUN_0010391b(param_2,&local_78,&local_7c,&local_78);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"bootp packet op=%d msgtype=%d...",(ulong)*(byte *)(param_2 + 0x1c),
          (ulong)local_78);
  }
  uVar3 = local_7c;
  uVar2 = htonl(0);
  if (uVar3 == uVar2) {
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80,&DAT_0011d1fc);
    }
  }
  else {
    if ((DAT_003250e0 & 1) != 0) {
      uVar3 = ntohl(local_7c);
      g_log("Slirp",0x80," req_addr=%08x\n...",(ulong)uVar3);
    }
  }
  if (local_78 == 0) {
    local_78 = 3;
  }
  if ((local_78 != 1) && (local_78 != 3)) goto LAB_00104467;
  local_26 = *(undefined4 *)(param_2 + 0x38);
  local_22 = *(undefined2 *)(param_2 + 0x3c);
  local_60 = FUN_0010a39a(param_1);
  if (local_60 == 0) goto LAB_00104467;
  *(long *)(local_60 + 0x30) = *(long *)(local_60 + 0x30) + 0x10;
  local_58 = *(void **)(local_60 + 0x30);
  *(long *)(local_60 + 0x30) = *(long *)(local_60 + 0x30) + 0x1c;
  memset(local_58,0,0x240);
  uVar3 = local_7c;
  if (local_78 == 1) {
    uVar2 = htonl(0);
    if ((uVar3 != uVar2) &&
       (local_70 = FUN_001037bc(param_1,&local_7c,&local_26,&local_7c), local_70 != 0)) {
      local_34[0] = local_7c;
    }
    if (local_70 == 0) {
LAB_00103cd2:
      local_70 = FUN_001036f2(param_1,local_34,&local_26,local_34);
      if (local_70 == 0) {
        if ((DAT_003250e0 & 1) != 0) {
          g_log("Slirp",0x80,"no address left\n...");
        }
        goto LAB_00104467;
      }
    }
    *(undefined4 *)(local_70 + 2) = local_26;
    *(undefined2 *)(local_70 + 6) = local_22;
  }
  else {
    uVar2 = htonl(0);
    if (uVar3 == uVar2) {
      local_70 = FUN_00103869(param_1,local_34,param_2 + 0x38,local_34);
      if (local_70 == 0) goto LAB_00103cd2;
    }
    else {
      local_70 = FUN_001037bc(param_1,&local_7c,&local_26,&local_7c);
      if (local_70 == 0) {
        local_34[0] = 0xffffffff;
      }
      else {
        local_34[0] = local_7c;
        *(undefined4 *)(local_70 + 2) = local_26;
        *(undefined2 *)(local_70 + 6) = local_22;
      }
    }
  }
  FUN_001032ba(param_1,(ulong)local_34[0],&local_26,(ulong)local_34[0]);
  local_44 = *(undefined4 *)(param_1 + 0x14);
  local_46 = htons(0x43);
  local_36 = htons(0x44);
  *(undefined *)((long)local_58 + 0x1c) = 2;
  *(undefined4 *)((long)local_58 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  *(undefined *)((long)local_58 + 0x1d) = 1;
  *(undefined *)((long)local_58 + 0x1e) = 6;
  memcpy((void *)((long)local_58 + 0x38),(void *)(param_2 + 0x38),6);
  *(uint32_t *)((long)local_58 + 0x2c) = local_34[0];
  *(undefined4 *)((long)local_58 + 0x30) = local_44;
  local_50 = (uint32_t *)((long)local_58 + 0x240);
  *(undefined4 *)((long)local_58 + 0x108) = 0x63538263;
  local_68 = (uint32_t *)((long)local_58 + 0x10c);
  if (local_70 == 0) {
    if ((DAT_003250e0 & 1) != 0) {
      uVar3 = ntohl(local_7c);
      g_log("Slirp",0x80,"nak\'ed addr=%08x\n...",(ulong)uVar3);
    }
    *(undefined *)local_68 = 0x35;
    ((undefined *)local_68)[1] = 1;
    ((undefined *)local_68)[2] = 6;
    puVar1 = (undefined *)local_68 + 4;
    ((undefined *)local_68)[3] = 0x38;
    local_68 = (uint32_t *)((undefined *)local_68 + 5);
    *puVar1 = 0x1f;
    memcpy(local_68,"requested address not available",0x1f);
    local_68 = (uint32_t *)((undefined *)local_68 + 0x1f);
  }
  else {
    if ((DAT_003250e0 & 1) != 0) {
      uVar3 = ntohl(local_34[0]);
      if (local_78 == 1) {
        pcVar4 = "offered";
      }
      else {
        pcVar4 = "ack\'ed";
      }
      g_log("Slirp",0x80,"%s addr=%08x\n...",pcVar4,(ulong)uVar3);
    }
    if (local_78 == 1) {
      *(undefined *)local_68 = 0x35;
      ((undefined *)local_68)[1] = 1;
      ((undefined *)local_68)[2] = 2;
    }
    else {
      *(undefined *)local_68 = 0x35;
      ((undefined *)local_68)[1] = 1;
      ((undefined *)local_68)[2] = 5;
    }
    local_68 = (uint32_t *)((undefined *)local_68 + 3);
    if (*(long *)(param_1 + 0x1a0) != 0) {
      snprintf((char *)((long)local_58 + 0x88),0x80,"%s");
    }
    *(undefined *)local_68 = 0x36;
    ((undefined *)local_68)[1] = 4;
    *(undefined4 *)((undefined *)local_68 + 2) = local_44;
    ((undefined *)local_68)[6] = 1;
    ((undefined *)local_68)[7] = 4;
    *(undefined4 *)((undefined *)local_68 + 8) = *(undefined4 *)(param_1 + 0x10);
    puVar1 = (undefined *)local_68 + 0xc;
    if (*(int *)(param_1 + 0x7c) == 0) {
      ((undefined *)local_68)[0xc] = 3;
      ((undefined *)local_68)[0xd] = 4;
      *(undefined4 *)((undefined *)local_68 + 0xe) = local_44;
      ((undefined *)local_68)[0x12] = 6;
      ((undefined *)local_68)[0x13] = 4;
      *(undefined4 *)((undefined *)local_68 + 0x14) = *(undefined4 *)(param_1 + 0x40);
      puVar1 = (undefined *)local_68 + 0x18;
    }
    local_68 = (uint32_t *)puVar1;
    puVar1 = (undefined *)local_68 + 1;
    *(undefined *)local_68 = 0x33;
    local_68 = (uint32_t *)((undefined *)local_68 + 2);
    *puVar1 = 4;
    local_74 = htonl(0x15180);
    *local_68 = local_74;
    local_68 = local_68 + 1;
    if (*(char *)(param_1 + 0x58) != '\0') {
      sVar5 = strlen((char *)(param_1 + 0x58));
      local_74 = (uint32_t)sVar5;
      if ((uint32_t *)((long)local_68 + (long)(int)local_74 + 2) < local_50) {
        puVar1 = (undefined *)((long)local_68 + 1);
        *(undefined *)local_68 = 0xc;
        local_68 = (uint32_t *)((long)local_68 + 2);
        *puVar1 = (char)sVar5;
        memcpy(local_68,(void *)(param_1 + 0x58),(long)(int)local_74);
        local_68 = (uint32_t *)((undefined *)local_68 + (int)local_74);
      }
      else {
        g_log("Slirp",0x10,"DHCP packet size exceeded, omitting host name option.");
      }
    }
    if (*(long *)(param_1 + 0x1b8) != 0) {
      sVar5 = strlen(*(char **)(param_1 + 0x1b8));
      local_74 = (uint32_t)sVar5;
      if ((uint32_t *)((long)local_68 + (long)(int)local_74 + 2) < local_50) {
        puVar1 = (undefined *)((long)local_68 + 1);
        *(undefined *)local_68 = 0xf;
        local_68 = (uint32_t *)((long)local_68 + 2);
        *puVar1 = (char)sVar5;
        memcpy(local_68,*(void **)(param_1 + 0x1b8),(long)(int)local_74);
        local_68 = (uint32_t *)((undefined *)local_68 + (int)local_74);
      }
      else {
        g_log("Slirp",0x10,"DHCP packet size exceeded, omitting domain name option.");
      }
    }
    if (*(long *)(param_1 + 0x1400) != 0) {
      sVar5 = strlen(*(char **)(param_1 + 0x1400));
      local_74 = (uint32_t)sVar5;
      if ((uint32_t *)((long)local_68 + (long)(int)local_74 + 2) < local_50) {
        puVar1 = (undefined *)((long)local_68 + 1);
        *(undefined *)local_68 = 0x42;
        local_68 = (uint32_t *)((long)local_68 + 2);
        *puVar1 = (char)sVar5;
        memcpy(local_68,*(void **)(param_1 + 0x1400),(long)(int)local_74);
        local_68 = (uint32_t *)((undefined *)local_68 + (int)local_74);
      }
      else {
        g_log("Slirp",0x10,"DHCP packet size exceeded, omitting tftp-server-name option.");
      }
    }
    if (*(long *)(param_1 + 0x1b0) != 0) {
      local_74 = (uint32_t)*(undefined8 *)(param_1 + 0x1a8);
      if ((uint32_t *)((long)local_68 + (long)(int)local_74) < local_50) {
        memcpy(local_68,*(void **)(param_1 + 0x1b0),(long)(int)local_74);
        local_68 = (uint32_t *)((long)local_68 + (long)(int)local_74);
      }
      else {
        g_log("Slirp",0x10,"DHCP packet size exceeded, omitting domain-search option.");
      }
    }
  }
  if (local_50 <= local_68) {
                    // WARNING: Subroutine does not return
    __assert_fail("q < end","../src/bootp.c",0x160,"bootp_reply");
  }
  *(undefined *)local_68 = 0xff;
  local_34[0] = 0xffffffff;
  *(undefined4 *)(local_60 + 0x38) = 0x224;
  FUN_0011b11d(0,local_60,local_48,local_38,0x10);
LAB_00104467:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00104485(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(char *)(lVar1 + 0x1c) == '\x01') {
    FUN_00103ad6(*(undefined8 *)(param_1 + 0x40),lVar1,lVar1);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0010455b)

ulong FUN_001044c3(long param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  long in_FS_OFFSET;
  uint local_54;
  ushort local_36;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = 0;
  uVar6 = 0;
  bVar2 = false;
  local_54 = param_2;
  if (*(int *)(param_1 + 0x38) != 0) {
    puVar5 = *(ushort **)(param_1 + 0x30);
    uVar6 = *(uint *)(param_1 + 0x38);
    if ((int)param_2 < (int)*(uint *)(param_1 + 0x38)) {
      uVar6 = param_2;
    }
    local_54 = param_2 - uVar6;
    if ((((ulong)puVar5 & 1) != 0) && (0 < (int)uVar6)) {
      uVar4 = 0;
      local_36 = (ushort)*(byte *)puVar5;
      puVar5 = (ushort *)((long)puVar5 + 1);
      bVar2 = true;
      uVar6 = uVar6 - 1;
    }
    while (-1 < (int)(uVar6 - 0x20)) {
      uVar4 = uVar4 + *puVar5 + (uint)puVar5[1] + (uint)puVar5[2] + (uint)puVar5[3] +
              (uint)puVar5[4] + (uint)puVar5[5] + (uint)puVar5[6] + (uint)puVar5[7] +
              (uint)puVar5[8] + (uint)puVar5[9] + (uint)puVar5[10] + (uint)puVar5[0xb] +
              (uint)puVar5[0xc] + (uint)puVar5[0xd] + (uint)puVar5[0xe] + (uint)puVar5[0xf];
      puVar5 = puVar5 + 0x10;
      uVar6 = uVar6 - 0x20;
    }
    while (-1 < (int)(uVar6 - 8)) {
      uVar4 = uVar4 + *puVar5 + (uint)puVar5[1] + (uint)puVar5[2] + (uint)puVar5[3];
      puVar5 = puVar5 + 4;
      uVar6 = uVar6 - 8;
    }
    if ((uVar6 != 0) || (bVar2)) {
      uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10);
      if (0xffff < uVar4) {
        uVar4 = uVar4 - 0xffff;
      }
      while (uVar6 = uVar6 - 2, -1 < (int)uVar6) {
        uVar4 = uVar4 + *puVar5;
        puVar5 = puVar5 + 1;
      }
      if (bVar2) {
        uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10);
        if (0xffff < uVar4) {
          uVar4 = uVar4 - 0xffff;
        }
        uVar4 = uVar4 * 0x100;
        if (uVar6 == 0xffffffff) {
          local_36 = local_36 & 0xff | (ushort)*(byte *)puVar5 << 8;
          uVar4 = uVar4 + local_36;
          uVar6 = 0;
        }
        else {
          uVar6 = 0xffffffff;
        }
      }
      else {
        if (uVar6 == 0xffffffff) {
          local_36 = (ushort)*(byte *)puVar5;
        }
      }
    }
  }
  if (local_54 != 0) {
    if ((DAT_003250e0 & 4) != 0) {
      g_log("Slirp",0x80,"cksum: out of data");
    }
    if ((DAT_003250e0 & 4) != 0) {
      g_log("Slirp",0x80," len = %d",(ulong)local_54);
    }
  }
  if (uVar6 == 0xffffffff) {
    local_36 = local_36 & 0xff;
    uVar4 = uVar4 + local_36;
  }
  uVar6 = (uVar4 & 0xffff) + (uVar4 >> 0x10);
  uVar3 = (ushort)uVar6;
  if (0xffff < uVar6) {
    uVar3 = uVar3 + 1;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (ulong)(ushort)~uVar3;
}



ulong FUN_00104820(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  uint uVar11;
  long in_FS_OFFSET;
  uint16_t uStack52;
  undefined uStack50;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = *(undefined8 **)(param_1 + 0x30);
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  uVar8 = puVar2[4];
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  uStack52 = (uint16_t)((ulong)uVar4 >> 0x20);
  uVar9 = ntohs(uStack52);
  uVar10 = htonl((uint)uVar9);
  *(uint32_t *)(puVar3 + 4) = uVar10;
  *(undefined2 *)((long)puVar3 + 0x24) = 0;
  *(undefined *)((long)puVar3 + 0x26) = 0;
  uStack50 = (undefined)((ulong)uVar4 >> 0x30);
  *(undefined *)((long)puVar3 + 0x27) = uStack50;
  uVar10 = ntohl(*(uint32_t *)(puVar3 + 4));
  uVar11 = FUN_001044c3(param_1,(ulong)(uVar10 + 0x28),(ulong)(uVar10 + 0x28));
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2[4] = uVar8;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return (ulong)uVar11;
}



undefined8 FUN_0010494b(long param_1,undefined *param_2,int param_3,long *param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int local_2c;
  undefined *local_28;
  int local_18;
  
  local_2c = param_3;
  local_28 = param_2;
  while( true ) {
    if (local_2c < 5) {
      return 0;
    }
    uVar1 = CONCAT11(*local_28,local_28[1]);
    uVar2 = CONCAT11(local_28[2],local_28[3]);
    uVar3 = (uint)uVar2;
    if (local_2c < (int)(uVar3 + 4)) break;
    if (uVar1 == 5) {
      return 0xffffffea;
    }
    if (uVar1 == 6) {
      if ((local_28[3] & 1) != 0) {
        return 0xffffffea;
      }
      local_18 = 0;
      while (local_18 < (int)uVar3) {
        uVar1 = CONCAT11(local_28[local_18 + 4],local_28[(long)(local_18 + 4) + 1]);
        if (uVar1 == 0x17) {
          *(undefined *)((long)param_4 + 0xc) = 1;
        }
        else {
          if (uVar1 == 0x3b) {
            *(undefined *)((long)param_4 + 0xd) = 1;
          }
          else {
            if ((DAT_003250e0 & 2) != 0) {
              g_log("Slirp",0x80,"dhcpv6: Unsupported option request %d",(ulong)uVar1);
            }
          }
        }
        local_18 = local_18 + 2;
      }
    }
    else {
      if (uVar1 == 1) {
        if (0x100 < uVar2) {
          return 0xfffffff9;
        }
        *(undefined **)param_4 = local_28 + 4;
        *(uint *)(param_4 + 1) = uVar3;
      }
      else {
        if ((DAT_003250e0 & 2) != 0) {
          g_log("Slirp",0x80,"dhcpv6 info req: Unsupported option %d, len=%d",(ulong)uVar1,
                (ulong)uVar3);
        }
      }
    }
    local_28 = local_28 + (long)(int)uVar3 + 4;
    local_2c = local_2c - (uVar3 + 4);
  }
  (**(code **)(*(long *)(param_1 + 0x1768) + 8))
            ("Guest sent bad DHCPv6 packet!",*(undefined8 *)(param_1 + 6000),
             *(undefined8 *)(param_1 + 6000));
  return 0xfffffff9;
}



// WARNING: Removing unreachable block (ram,0x00104d7e)
// WARNING: Removing unreachable block (ram,0x00104cdb)
// WARNING: Removing unreachable block (ram,0x00104e09)
// WARNING: Removing unreachable block (ram,0x00105035)
// WARNING: Removing unreachable block (ram,0x0010503c)

void FUN_00104b5b(long param_1,long param_2,undefined4 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_b0;
  undefined local_88 [2];
  undefined2 local_86;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_68 [2];
  undefined2 local_66;
  undefined8 local_60;
  undefined8 local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_0010494b(param_1,param_4,(ulong)param_5);
  if ((-1 < iVar2) && (lVar3 = FUN_0010a39a(param_1), lVar3 != 0)) {
    memset(*(void **)(lVar3 + 0x30),0,(long)*(int *)(lVar3 + 0x24));
    *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + 0x10;
    lVar1 = *(long *)(lVar3 + 0x30);
    *(undefined *)(lVar1 + 0x30) = 7;
    *(undefined *)(lVar1 + 0x31) = (char)((uint)param_3 >> 0x10);
    *(undefined *)(lVar1 + 0x32) = (char)((uint)param_3 >> 8);
    local_b0 = (int)lVar1 + 0x34;
    *(undefined *)(lVar1 + 0x33) = (char)param_3;
    local_78 = *(undefined8 *)(param_1 + 0x34);
    local_80 = *(undefined8 *)(param_1 + 0x2c);
    local_86 = 0x223;
    local_58 = *(undefined8 *)(param_2 + 0x10);
    local_60 = *(undefined8 *)(param_2 + 8);
    local_66 = *(undefined2 *)(param_2 + 2);
    *(long *)(lVar3 + 0x30) = *(long *)(lVar3 + 0x30) + 0x30;
    *(int *)(lVar3 + 0x38) = local_b0 - (int)*(undefined8 *)(lVar3 + 0x30);
    FUN_0011bf57(0,lVar3,local_88,local_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void FUN_00105152(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  
  lVar2 = *(long *)(param_2 + 0x30);
  puVar4 = (uint32_t *)(lVar2 + 8);
  iVar1 = *(int *)(param_2 + 0x38);
  if (3 < iVar1 + -8) {
    uVar3 = ntohl(*puVar4);
    if (*(byte *)puVar4 == 0xb) {
      FUN_00104b5b(*(undefined8 *)(param_2 + 0x40),param_1,(ulong)(uVar3 & 0xffffff),lVar2 + 0xc,
                   (ulong)(iVar1 - 0xc));
    }
    else {
      if ((DAT_003250e0 & 2) != 0) {
        g_log("Slirp",0x80,"dhcpv6_input: Unsupported message type 0x%x",(ulong)*(byte *)puVar4);
      }
    }
  }
  return;
}



ulong FUN_00105215(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *local_38;
  char *local_30;
  ulong local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x18);
  uVar1 = *(ulong *)(param_2 + 0x18);
  local_38 = (char *)(uVar2 + *(long *)(param_1 + 0x10));
  local_30 = (char *)(uVar1 + *(long *)(param_2 + 0x10));
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  local_28 = 0;
  while( true ) {
    if (uVar2 <= local_28) {
      return local_28;
    }
    local_38 = local_38 + -1;
    local_30 = local_30 + -1;
    if (*local_38 != *local_30) break;
    local_28 = local_28 + 1;
  }
  return local_28;
}



undefined8 FUN_001052ae(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  uVar4 = *(ulong *)(param_2 + 0x18);
  lVar5 = FUN_00105215(param_1,param_2,param_2);
  bVar1 = *(byte *)((uVar3 - lVar5) + *(long *)(param_1 + 0x10));
  bVar2 = *(byte *)((uVar4 - lVar5) + *(long *)(param_2 + 0x10));
  if (bVar1 < bVar2) {
    uVar6 = 0xffffffff;
  }
  else {
    if (bVar2 < bVar1) {
      uVar6 = 1;
    }
    else {
      if (uVar3 < uVar4) {
        uVar6 = 0xffffffff;
      }
      else {
        if (uVar4 < uVar3) {
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
    }
  }
  return uVar6;
}



ulong FUN_00105378(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  byte *local_28;
  
  lVar1 = FUN_00105215(param_1,param_2,param_2);
  local_28 = *(byte **)(param_1 + 0x10);
  while ((*local_28 != 0 &&
         (local_28 < (byte *)((*(long *)(param_1 + 0x18) - lVar1) + *(long *)(param_1 + 0x10))))) {
    local_28 = local_28 + (ulong)*local_28 + 1;
  }
  uVar2 = *(long *)(param_1 + 0x18) - (long)(local_28 + -*(long *)(param_1 + 0x10));
  if (uVar2 < 3) {
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_0010542e(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_28 = 0;
  while (local_28 < param_2) {
    local_20 = (undefined8 *)(param_1 + local_28 * 0x28);
    local_18 = *(undefined8 **)(param_1 + local_28 * 0x28);
    while (local_20[4] == 0) {
      puVar1 = (undefined8 *)*local_18;
      *(undefined8 **)local_18 = local_20;
      local_20[4] = local_20[4] + 1;
      local_20 = local_18;
      local_18 = puVar1;
    }
    local_28 = local_28 + 1;
  }
  return;
}



void FUN_001054e9(long param_1,char *param_2)

{
  char cVar1;
  undefined *local_28;
  undefined *local_20;
  char *local_18;
  undefined *local_10;
  
  local_28 = *(undefined **)(param_1 + 0x10);
  local_10 = (undefined *)0x0;
  if (*(long *)(param_1 + 0x18) == 0) {
LAB_001055de:
    g_log("Slirp",0x10,"failed to parse domain name \'%s\'\n",param_2);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    local_20 = local_28;
    local_18 = param_2;
    do {
      cVar1 = *local_18;
      if ((cVar1 == '.') || (cVar1 == '\0')) {
        local_10 = local_20 + -(long)local_28;
        if (((local_10 == (undefined *)0x0) && (cVar1 == '.')) || ((undefined *)0x3f < local_10))
        goto LAB_001055de;
        *local_28 = (char)local_10;
        local_28 = local_20 + 1;
      }
      else {
        local_20[1] = cVar1;
      }
      local_20 = local_20 + 1;
      local_18 = local_18 + 1;
    } while (cVar1 != '\0');
    if (local_10 != (undefined *)0x0) {
      *local_28 = 0;
      *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 1;
    }
  }
  return;
}



void FUN_00105613(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  long local_30;
  long local_28;
  long local_20;
  ulong local_18;
  
  lVar1 = param_1;
  local_28 = param_1;
  do {
    local_30 = lVar1;
    if (*(ulong *)(local_30 + 0x10) < *(ulong *)(local_28 + 0x10)) {
      local_28 = local_30;
    }
    lVar1 = local_30 + 0x28;
    bVar3 = param_2 != local_30;
    local_30 = param_1;
  } while (bVar3);
  while (local_30 != param_2) {
    if (param_3 != *(ulong *)(local_30 + 0x20)) {
      local_18 = 0xffffffffffffffff;
      local_20 = local_30;
      while ((local_20 != param_2 && (uVar2 = *(ulong *)(local_20 + 0x20), param_3 < uVar2))) {
        if (uVar2 < local_18) {
          local_18 = uVar2;
        }
        local_20 = local_20 + 0x28;
      }
      FUN_00105613(local_30,local_20,local_18,local_20);
      local_30 = local_20;
      if (local_20 == param_2) break;
    }
    local_30 = local_30 + 0x28;
  }
  local_30 = param_1;
  if (param_3 != 0) {
    do {
      if ((local_30 != local_28) && (*(long *)(local_30 + 8) == 0)) {
        *(long *)(local_30 + 8) = local_28;
        *(ulong *)(local_30 + 0x20) = param_3;
      }
      bVar3 = param_2 != local_30;
      local_30 = local_30 + 0x28;
    } while (bVar3);
  }
  return;
}



void * FUN_00105764(long *param_1,ulong param_2)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *local_38;
  ulong local_30;
  
  pvVar1 = *(void **)(*param_1 + 0x10);
  local_30 = 0;
  local_38 = pvVar1;
  while (local_30 < param_2) {
    lVar2 = param_1[local_30 * 5];
    lVar3 = *(long *)(lVar2 + 8);
    if ((lVar3 != 0) &&
       (uVar4 = (*(long *)(lVar3 + 0x18) - *(long *)(lVar2 + 0x20)) +
                (*(long *)(lVar3 + 0x10) - (long)pvVar1), uVar4 < 0x3fff)) {
      *(long *)(lVar2 + 0x18) = (*(long *)(lVar2 + 0x18) - *(long *)(lVar2 + 0x20)) + 2;
      *(undefined *)(*(long *)(lVar2 + 0x18) + -1 + *(long *)(lVar2 + 0x10)) = (char)uVar4;
      *(byte *)(*(long *)(lVar2 + 0x18) + -2 + *(long *)(lVar2 + 0x10)) = (byte)(uVar4 >> 8) | 0xc0;
    }
    if (local_38 != *(void **)(lVar2 + 0x10)) {
      memmove(local_38,*(void **)(lVar2 + 0x10),*(size_t *)(lVar2 + 0x18));
      *(void **)(lVar2 + 0x10) = local_38;
    }
    local_38 = (void *)((long)local_38 + *(long *)(lVar2 + 0x18));
    local_30 = local_30 + 1;
  }
  return (void *)((long)local_38 - (long)pvVar1);
}



undefined8 FUN_001058e0(long param_1,long *param_2)

{
  void *pvVar1;
  long lVar2;
  ulong __nmemb;
  undefined8 uVar3;
  void *__base;
  size_t sVar4;
  long lVar5;
  ulong local_78;
  long local_70;
  long local_68;
  long local_60;
  ulong local_58;
  long local_50;
  long local_48;
  long *local_40;
  
  local_50 = 0;
  local_40 = param_2;
  while (*local_40 != 0) {
    local_40 = local_40 + 1;
  }
  __nmemb = (long)((long)local_40 - (long)param_2) >> 3;
  if (__nmemb == 0) {
    uVar3 = 0xfffffffe;
  }
  else {
    __base = (void *)g_malloc(__nmemb * 0x28,param_2,__nmemb);
    local_58 = 0;
    while (local_58 < __nmemb) {
      sVar4 = strlen((char *)param_2[local_58]);
      local_50 = local_50 + sVar4 + 2;
      *(void **)((long)__base + local_58 * 0x28) = (void *)((long)__base + local_58 * 0x28);
      *(size_t *)((long)__base + local_58 * 0x28 + 0x18) = sVar4;
      *(undefined8 *)((long)__base + local_58 * 0x28 + 0x20) = 0;
      *(undefined8 *)((long)__base + local_58 * 0x28 + 8) = 0;
      local_58 = local_58 + 1;
    }
    lVar5 = g_malloc(local_50 + ((local_50 + 0xfeU) / 0xff) * 2);
    local_58 = 0;
    local_48 = lVar5;
    while (local_58 < __nmemb) {
      *(long *)((long)__base + local_58 * 0x28 + 0x10) = local_48;
      FUN_001054e9((void *)((long)__base + local_58 * 0x28),param_2[local_58],local_58 * 0x28,
                   param_2[local_58]);
      local_48 = local_48 + *(long *)((long)__base + local_58 * 0x28 + 0x18);
      local_58 = local_58 + 1;
    }
    if (local_48 == lVar5) {
      g_free(__base);
      g_free(lVar5);
      uVar3 = 0xffffffff;
    }
    else {
      qsort(__base,__nmemb,0x28,FUN_001052ae);
      FUN_0010542e(__base,__nmemb,__nmemb);
      local_58 = 1;
      while (local_58 < __nmemb) {
        pvVar1 = (void *)(local_58 * 0x28 + (long)__base);
        lVar2 = local_58 * 0x28 + -0x28;
        uVar3 = FUN_00105378((long)__base + lVar2,pvVar1,lVar2,pvVar1);
        *(undefined8 *)((long)__base + local_58 * 0x28 + -8) = uVar3;
        local_58 = local_58 + 1;
      }
      lVar2 = __nmemb * 0x28 + -0x28 + (long)__base;
      FUN_00105613(__base,lVar2,0,lVar2);
      local_68 = FUN_00105764(__base);
      local_78 = (local_68 + 0xfeU) / 0xff;
      local_70 = (local_78 - 1) * 0xff;
      local_60 = local_70 + local_78 * 2;
      lVar2 = local_68 + local_78 * 2;
      while( true ) {
        if (local_78 == 0) break;
        memmove((void *)(lVar5 + local_60),(void *)(lVar5 + local_70),local_68 - local_70);
        *(undefined *)(lVar5 + local_60 + -2) = 0x77;
        *(undefined *)(lVar5 + local_60 + -1) = (char)(local_68 - local_70);
        local_68 = local_70;
        local_70 = local_70 + -0xff;
        local_60 = local_60 + -0x101;
        local_78 = local_78 - 1;
      }
      g_free(__base);
      *(long *)(param_1 + 0x1b0) = lVar5;
      *(long *)(param_1 + 0x1a8) = lVar2;
      uVar3 = 0;
    }
  }
  return uVar3;
}



void FUN_00105dca(long param_1)

{
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  return;
}



void FUN_00105df1(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_2;
  *(long *)(*(long *)(param_1 + 0x10) + 0x18) = param_1;
  return;
}



void FUN_00105e38(long param_1)

{
  *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18) = *(undefined8 *)(param_1 + 0x18);
  return;
}



void FUN_00105e6b(long param_1)

{
  *(long *)(param_1 + 200) = param_1 + 0xc0;
  *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_1 + 200);
  *(long *)(param_1 + 0xd8) = param_1 + 0xd0;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xd8);
  return;
}



void FUN_00105ece(long param_1,long param_2)

{
  long lVar1;
  long local_18;
  
  lVar1 = *(long *)(param_2 + 0x40);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"if_output...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," ifm = %p",param_2);
  }
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    FUN_0010ab7f(param_2);
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
  }
  if (param_1 != 0) {
    local_18 = *(long *)(lVar1 + 0xd8);
    while (local_18 != lVar1 + 0xd0) {
      if (param_1 == *(long *)(local_18 + 0x28)) {
        *(long *)(param_2 + 0x28) = param_1;
        FUN_00105df1(param_2,*(undefined8 *)(local_18 + 0x18),*(undefined8 *)(local_18 + 0x18));
        goto LAB_001060bc;
      }
      local_18 = *(long *)(local_18 + 8);
    }
  }
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x148) & 0x10) == 0)) {
    local_18 = *(long *)(lVar1 + 0xd8);
  }
  else {
    local_18 = *(long *)(lVar1 + 200);
    if (param_1 == *(long *)(local_18 + 0x28)) {
      *(long *)(param_2 + 0x28) = param_1;
      FUN_00105df1(param_2,*(undefined8 *)(local_18 + 0x18),*(undefined8 *)(local_18 + 0x18));
      goto LAB_001060bc;
    }
  }
  *(long *)(param_2 + 0x28) = param_1;
  FUN_00105dca(param_2);
  FUN_0010ab4c(param_2,local_18,local_18);
LAB_001060bc:
  if (param_1 != 0) {
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + 1;
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
    if ((5 < *(int *)(param_1 + 0x160)) &&
       (2 < *(int *)(param_1 + 0x160) - *(int *)(param_1 + 0x15c))) {
      FUN_0010ab7f(*(undefined8 *)(param_2 + 0x10));
      FUN_0010ab4c(*(undefined8 *)(param_2 + 0x10),lVar1 + 0xd0,lVar1 + 0xd0);
    }
  }
  FUN_00106168(*(undefined8 *)(param_2 + 0x40));
  return;
}



void FUN_00106168(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  long *local_38;
  long *local_30;
  
  uVar6 = (**(code **)(*(long *)(param_1 + 0x1768) + 0x10))
                    (*(undefined8 *)(param_1 + 6000),param_2,*(undefined8 *)(param_1 + 6000));
  bVar3 = false;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"if_start...");
  }
  if (*(char *)(param_1 + 0xe0) == '\0') {
    *(undefined *)(param_1 + 0xe0) = 1;
    local_30 = (long *)0x0;
    if (*(long *)(param_1 + 0xd0) != param_1 + 0xd0) {
      local_30 = *(long **)(param_1 + 0xd0);
    }
    if (*(long *)(param_1 + 0xc0) == param_1 + 0xc0) {
      if (local_30 == (long *)0x0) {
        local_38 = (long *)0x0;
      }
      else {
        local_38 = local_30;
        bVar3 = true;
      }
    }
    else {
      local_38 = *(long **)(param_1 + 0xc0);
    }
    while (plVar4 = local_38, local_38 != (long *)0x0) {
      local_38 = (long *)*local_38;
      if (local_38 == (long *)(param_1 + 0xc0)) {
        local_38 = local_30;
        bVar3 = true;
      }
      if (local_38 == (long *)(param_1 + 0xd0)) {
        local_38 = (long *)0x0;
      }
      if (((ulong)plVar4[10] < uVar6) || (iVar5 = FUN_0010e953(param_1,plVar4,plVar4), iVar5 != 0))
      {
        lVar1 = plVar4[1];
        FUN_0010ab7f(plVar4);
        if (plVar4 != (long *)plVar4[2]) {
          plVar2 = (long *)plVar4[2];
          FUN_0010ab4c(plVar2,lVar1,lVar1);
          FUN_00105e38(plVar4);
          if (!bVar3) {
            local_38 = plVar2;
          }
        }
        if (plVar4[5] != 0) {
          lVar1 = plVar4[5];
          *(int *)(lVar1 + 0x15c) = *(int *)(lVar1 + 0x15c) + -1;
          if (*(int *)(lVar1 + 0x15c) == 0) {
            *(undefined4 *)(plVar4[5] + 0x160) = 0;
          }
        }
        FUN_0010a4f0(plVar4);
      }
    }
    *(undefined *)(param_1 + 0xe0) = 0;
  }
  return;
}



ulong FUN_001063a8(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
}



ulong FUN_001063d7(void *param_1,void *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = param_3;
  if ((int)param_3 < 0) {
    uVar2 = param_3 + 7;
  }
  iVar3 = memcmp(param_1,param_2,(long)((int)uVar2 >> 3));
  if (iVar3 == 0) {
    if ((param_3 & 7) == 0) {
      uVar4 = 1;
    }
    else {
      uVar2 = param_3;
      if ((int)param_3 < 0) {
        uVar2 = param_3 + 7;
      }
      bVar1 = (byte)((int)param_3 >> 0x37);
      uVar5 = param_3;
      if ((int)param_3 < 0) {
        uVar5 = param_3 + 7;
      }
      uVar5 = (int)(uint)*(byte *)((long)param_2 + (long)((int)uVar5 >> 3)) >>
              (8 - (((char)param_3 + (bVar1 >> 5) & 7) - (bVar1 >> 5)) & 0x1f);
      uVar4 = (ulong)(uVar5 & 0xffffff00 |
                     (uint)((int)(uint)*(byte *)((long)param_1 + (long)((int)uVar2 >> 3)) >>
                            (8 - (((char)param_3 + (bVar1 >> 5) & 7) - (bVar1 >> 5)) & 0x1f) ==
                           uVar5));
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



ulong FUN_001064a4(long param_1,long param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  iVar4 = param_3 + 7;
  if ((int)(param_3 + 7) < 0) {
    iVar4 = param_3 + 0xe;
  }
  iVar2 = param_3 + 7;
  if ((int)(param_3 + 7) < 0) {
    iVar2 = param_3 + 0xe;
  }
  iVar3 = param_3 + 7;
  if ((int)(param_3 + 7) < 0) {
    iVar3 = param_3 + 0xe;
  }
  iVar4 = memcmp((void *)(param_1 + (iVar3 >> 3)),(void *)((iVar2 >> 3) + param_2),
                 (long)(0x10 - (iVar4 >> 3)));
  if (iVar4 == 0) {
    if ((param_3 & 7) == 0) {
      uVar7 = 1;
    }
    else {
      uVar5 = param_3;
      if ((int)param_3 < 0) {
        uVar5 = param_3 + 7;
      }
      uVar6 = param_3;
      if ((int)param_3 < 0) {
        uVar6 = param_3 + 7;
      }
      bVar1 = (byte)((int)param_3 >> 0x37);
      uVar7 = (ulong)((~(-1 << (8 - (((char)param_3 + (bVar1 >> 5) & 7) - (bVar1 >> 5)) & 0x1f)) &
                      (uint)(*(byte *)(param_2 + ((int)uVar6 >> 3)) ^
                            *(byte *)(param_1 + ((int)uVar5 >> 3)))) == 0);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



void FUN_0010658f(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined4 uStack28;
  
  *param_3 = 0x52;
  param_3[1] = 0x56;
  uStack28 = (undefined4)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_3 + 2) = uStack28;
  return;
}



void FUN_001065cf(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  pcVar1 = *(code **)(*(long *)(param_1 + 0x1768) + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 6000);
  lVar4 = (**(code **)(*(long *)(param_1 + 0x1768) + 0x10))
                    (*(undefined8 *)(param_1 + 6000),param_2,*(undefined8 *)(param_1 + 6000));
  iVar3 = g_rand_int_range(*(undefined8 *)(param_1 + 0x1750),200000,600000,lVar4);
  lVar4 = lVar4 / 1000000 + (long)iVar3;
  (*pcVar1)(*(undefined8 *)(param_1 + 0x1758),lVar4,uVar2,lVar4);
  FUN_00106c7b(param_1);
  return;
}



void FUN_00106697(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 10) == '\x01') {
    uVar3 = (**(code **)(*(long *)(param_1 + 0x1768) + 0x18))
                      (FUN_001065cf,param_1,*(undefined8 *)(param_1 + 6000),param_1);
    *(undefined8 *)(param_1 + 0x1758) = uVar3;
    pcVar1 = *(code **)(*(long *)(param_1 + 0x1768) + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 6000);
    lVar4 = (**(code **)(*(long *)(param_1 + 0x1768) + 0x10))(*(undefined8 *)(param_1 + 6000));
    iVar2 = g_rand_int_range(*(undefined8 *)(param_1 + 0x1750),200000,600000,lVar4);
    lVar4 = lVar4 / 1000000 + (long)iVar2;
    (*pcVar1)(*(undefined8 *)(param_1 + 0x1758),lVar4,uVar3,lVar4);
  }
  return;
}



void FUN_00106798(long param_1)

{
  if (*(char *)(param_1 + 10) == '\x01') {
    (**(code **)(*(long *)(param_1 + 0x1768) + 0x20))
              (*(undefined8 *)(param_1 + 0x1758),*(undefined8 *)(param_1 + 6000),
               *(undefined8 *)(param_1 + 0x1758),*(undefined8 *)(param_1 + 6000));
  }
  return;
}



void FUN_001067e5(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint16_t uVar4;
  undefined2 uVar5;
  long lVar6;
  
  lVar6 = FUN_0010a39a();
  uVar4 = ntohs(*(uint16_t *)(param_3 + 4));
  *(int *)(lVar6 + 0x38) = (uint)uVar4 + 0x28;
  memcpy(*(void **)(lVar6 + 0x30),*(void **)(param_1 + 0x30),(long)*(int *)(lVar6 + 0x38));
  lVar1 = *(long *)(lVar6 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(long *)(lVar6 + 0x30) = *(long *)(lVar6 + 0x30) + 0x28;
  puVar3 = *(undefined **)(lVar6 + 0x30);
  *puVar3 = 0x81;
  *(undefined2 *)(puVar3 + 2) = 0;
  *(long *)(lVar6 + 0x30) = *(long *)(lVar6 + 0x30) + -0x28;
  uVar5 = FUN_00104820(lVar6);
  *(undefined2 *)(puVar3 + 2) = uVar5;
  FUN_001080bc(0,lVar6,0);
  return;
}



void FUN_00106903(long param_1,byte param_2,byte param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  char cVar7;
  uint16_t uVar8;
  undefined2 uVar9;
  int iVar10;
  uint32_t uVar11;
  long lVar12;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 0x40);
  lVar3 = *(long *)(param_1 + 0x30);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"icmp6_send_error...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," type = %d, code = %d",(ulong)param_2,(ulong)param_3);
  }
  if (*(char *)(lVar3 + 8) == -1) goto LAB_00106c65;
  local_58 = 0;
  local_50 = 0;
  cVar7 = FUN_001063a8(lVar3 + 8,&local_58,lVar3 + 8);
  if (cVar7 != '\0') goto LAB_00106c65;
  lVar12 = FUN_0010a39a(lVar2);
  lVar4 = *(long *)(lVar12 + 0x30);
  *(undefined8 *)(lVar4 + 8) = 0;
  *(undefined8 *)(lVar4 + 0x10) = 0;
  *(undefined *)(lVar4 + 8) = 0xfe;
  *(undefined *)(lVar4 + 9) = 0x80;
  *(undefined *)(lVar4 + 0x17) = 2;
  uVar5 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(lVar3 + 8);
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  inet_ntop(10,(void *)(lVar4 + 0x18),local_48,0x2e);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," target = %s",local_48);
  }
  *(undefined *)(lVar4 + 6) = 0x3a;
  uVar1 = (long)*(int *)(lVar2 + 0x88) - 0x30;
  iVar10 = *(int *)(param_1 + 0x38);
  if (uVar1 <= (ulong)(long)iVar10) {
    iVar10 = (int)uVar1;
  }
  uVar8 = htons((short)iVar10 + 8);
  *(uint16_t *)(lVar4 + 4) = uVar8;
  uVar8 = ntohs(*(uint16_t *)(lVar4 + 4));
  *(int *)(lVar12 + 0x38) = (uint)uVar8 + 0x28;
  *(long *)(lVar12 + 0x30) = *(long *)(lVar12 + 0x30) + 0x28;
  pbVar6 = *(byte **)(lVar12 + 0x30);
  *pbVar6 = param_2;
  pbVar6[1] = param_3;
  *(undefined2 *)(pbVar6 + 2) = 0;
  if (param_2 == 2) {
    uVar11 = htonl(*(uint32_t *)(lVar2 + 0x88));
    *(uint32_t *)(pbVar6 + 4) = uVar11;
  }
  else {
    if (param_2 < 3) {
      if (param_2 == 1) {
LAB_00106b87:
        *(undefined4 *)(pbVar6 + 4) = 0;
      }
      else {
LAB_00106bb0:
        g_assertion_message_expr("Slirp","../src/ip6_icmp.c",0x79,"icmp6_send_error",0);
      }
    }
    else {
      if (param_2 == 3) goto LAB_00106b87;
      if (param_2 != 4) goto LAB_00106bb0;
    }
  }
  *(long *)(lVar12 + 0x30) = *(long *)(lVar12 + 0x30) + 8;
  memcpy(*(void **)(lVar12 + 0x30),*(void **)(param_1 + 0x30),(long)iVar10);
  *(long *)(lVar12 + 0x30) = *(long *)(lVar12 + 0x30) + -8;
  *(long *)(lVar12 + 0x30) = *(long *)(lVar12 + 0x30) + -0x28;
  uVar9 = FUN_00104820(lVar12);
  *(undefined2 *)(pbVar6 + 2) = uVar9;
  FUN_001080bc(0,lVar12,0);
LAB_00106c65:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00106c7b(long param_1)

{
  undefined8 uVar1;
  uint16_t uVar2;
  undefined2 uVar3;
  uint32_t uVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined local_64 [4];
  long local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"ndp_send_ra...");
  }
  local_58 = FUN_0010a39a(param_1);
  local_50 = *(long *)(local_58 + 0x30);
  local_60 = 0;
  *(undefined8 *)(local_50 + 8) = 0;
  *(undefined8 *)(local_50 + 0x10) = 0;
  *(undefined *)(local_50 + 8) = 0xfe;
  *(undefined *)(local_50 + 9) = 0x80;
  *(undefined *)(local_50 + 0x17) = 2;
  *(undefined8 *)(local_50 + 0x18) = 0;
  *(undefined8 *)(local_50 + 0x20) = 0;
  *(undefined *)(local_50 + 0x18) = 0xff;
  *(undefined *)(local_50 + 0x19) = 2;
  *(undefined *)(local_50 + 0x27) = 1;
  *(undefined *)(local_50 + 6) = 0x3a;
  *(long *)(local_58 + 0x30) = *(long *)(local_58 + 0x30) + 0x28;
  local_48 = *(undefined **)(local_58 + 0x30);
  *local_48 = 0x86;
  local_48[1] = 0;
  *(undefined2 *)(local_48 + 2) = 0;
  local_48[4] = 0x40;
  local_48[5] = local_48[5] & 0x7f;
  local_48[5] = local_48[5] & 0xbf;
  local_48[5] = local_48[5] & 0xc0;
  uVar2 = htons(0x708);
  *(uint16_t *)(local_48 + 6) = uVar2;
  uVar4 = htonl(0);
  *(uint32_t *)(local_48 + 8) = uVar4;
  uVar4 = htonl(0);
  *(uint32_t *)(local_48 + 0xc) = uVar4;
  *(long *)(local_58 + 0x30) = *(long *)(local_58 + 0x30) + 0x10;
  local_60 = local_60 + 0x10;
  local_40 = *(undefined **)(local_58 + 0x30);
  *local_40 = 1;
  local_40[1] = 1;
  FUN_0010658f(*(undefined8 *)(local_50 + 8),*(undefined8 *)(local_50 + 0x10),local_40 + 2,
               *(undefined8 *)(local_50 + 8));
  *(long *)(local_58 + 0x30) = *(long *)(local_58 + 0x30) + 8;
  local_60 = local_60 + 8;
  local_38 = *(undefined **)(local_58 + 0x30);
  *local_38 = 3;
  local_38[1] = 4;
  local_38[2] = *(undefined *)(param_1 + 0x28);
  local_38[3] = local_38[3] | 0x80;
  local_38[3] = local_38[3] | 0x40;
  local_38[3] = local_38[3] & 0xc0;
  uVar4 = htonl(0x15180);
  *(uint32_t *)(local_38 + 4) = uVar4;
  uVar4 = htonl(0x3840);
  *(uint32_t *)(local_38 + 8) = uVar4;
  *(undefined4 *)(local_38 + 0xc) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(local_38 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(local_38 + 0x18) = uVar1;
  *(long *)(local_58 + 0x30) = *(long *)(local_58 + 0x30) + 0x20;
  local_60 = local_60 + 0x20;
  iVar5 = FUN_0010d049(local_28,local_64,local_64);
  if (-1 < iVar5) {
    local_30 = *(undefined **)(local_58 + 0x30);
    *local_30 = 0x19;
    local_30[1] = 3;
    *(undefined2 *)(local_30 + 2) = 0;
    uVar4 = htonl(1200000);
    *(uint32_t *)(local_30 + 4) = uVar4;
    uVar1 = *(undefined8 *)(param_1 + 0x4c);
    *(undefined8 *)(local_30 + 8) = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)(local_30 + 0x10) = uVar1;
    *(long *)(local_58 + 0x30) = *(long *)(local_58 + 0x30) + 0x18;
    local_60 = local_60 + 0x18;
  }
  uVar2 = htons((uint16_t)local_60);
  *(uint16_t *)(local_50 + 4) = uVar2;
  *(long *)(local_58 + 0x30) = *(long *)(local_58 + 0x30) + (-0x28 - local_60);
  *(int *)(local_58 + 0x38) = (int)local_60 + 0x28;
  uVar3 = FUN_00104820(local_58);
  *(undefined2 *)(local_48 + 2) = uVar3;
  FUN_001080bc(0,local_58,0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void FUN_00107017(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint16_t uVar2;
  undefined2 uVar3;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80 [2];
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80[0] = param_3;
  local_70 = param_1;
  inet_ntop(10,&local_88,local_48,0x2e);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"ndp_send_ns...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," target = %s",local_48);
  }
  local_68 = FUN_0010a39a(local_70);
  local_60 = *(long *)(local_68 + 0x30);
  uVar1 = *(undefined8 *)(local_70 + 0x34);
  *(undefined8 *)(local_60 + 8) = *(undefined8 *)(local_70 + 0x2c);
  *(undefined8 *)(local_60 + 0x10) = uVar1;
  *(undefined *)(local_60 + 0x18) = 0xff;
  *(undefined *)(local_60 + 0x19) = 2;
  *(undefined *)(local_60 + 0x1a) = 0;
  *(undefined *)(local_60 + 0x1b) = 0;
  *(undefined *)(local_60 + 0x1c) = 0;
  *(undefined *)(local_60 + 0x1d) = 0;
  *(undefined *)(local_60 + 0x1e) = 0;
  *(undefined *)(local_60 + 0x1f) = 0;
  *(undefined *)(local_60 + 0x20) = 0;
  *(undefined *)(local_60 + 0x21) = 0;
  *(undefined *)(local_60 + 0x22) = 0;
  *(undefined *)(local_60 + 0x23) = 1;
  *(undefined *)(local_60 + 0x24) = 0xff;
  *(undefined *)(local_60 + 0x25) = 0;
  *(undefined *)(local_60 + 0x26) = 0;
  *(undefined *)(local_60 + 0x27) = 0;
  memcpy((void *)(local_60 + 0x25),(void *)((long)local_80 + 5),3);
  *(undefined *)(local_60 + 6) = 0x3a;
  uVar2 = htons(0x20);
  *(uint16_t *)(local_60 + 4) = uVar2;
  uVar2 = ntohs(*(uint16_t *)(local_60 + 4));
  *(int *)(local_68 + 0x38) = (uint)uVar2 + 0x28;
  *(long *)(local_68 + 0x30) = *(long *)(local_68 + 0x30) + 0x28;
  local_58 = *(undefined **)(local_68 + 0x30);
  *local_58 = 0x87;
  local_58[1] = 0;
  *(undefined2 *)(local_58 + 2) = 0;
  *(undefined4 *)(local_58 + 4) = 0;
  *(undefined8 *)(local_58 + 8) = local_88;
  *(undefined8 *)(local_58 + 0x10) = local_80[0];
  *(long *)(local_68 + 0x30) = *(long *)(local_68 + 0x30) + 0x18;
  local_50 = *(undefined **)(local_68 + 0x30);
  *local_50 = 1;
  local_50[1] = 1;
  FUN_0010658f(*(undefined8 *)(local_70 + 0x2c),*(undefined8 *)(local_70 + 0x34),local_50 + 2,
               *(undefined8 *)(local_70 + 0x2c));
  *(long *)(local_68 + 0x30) = *(long *)(local_68 + 0x30) + -0x18;
  *(long *)(local_68 + 0x30) = *(long *)(local_68 + 0x30) + -0x28;
  uVar3 = FUN_00104820(local_68);
  *(undefined2 *)(local_58 + 2) = uVar3;
  FUN_001080bc(0,local_68,1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void FUN_001072e0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  uint16_t uVar6;
  undefined2 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar8 = FUN_0010a39a(param_1);
  lVar1 = *(long *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  local_28 = 0;
  local_20 = 0;
  cVar5 = FUN_001063a8(param_2 + 8,&local_28,param_2 + 8);
  if (cVar5 == '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
  }
  else {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined *)(lVar1 + 0x18) = 0xff;
    *(undefined *)(lVar1 + 0x19) = 2;
    *(undefined *)(lVar1 + 0x27) = 1;
  }
  *(undefined *)(lVar1 + 6) = 0x3a;
  uVar6 = htons(0x20);
  *(uint16_t *)(lVar1 + 4) = uVar6;
  uVar6 = ntohs(*(uint16_t *)(lVar1 + 4));
  *(int *)(lVar8 + 0x38) = (uint)uVar6 + 0x28;
  *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + 0x28;
  puVar3 = *(undefined **)(lVar8 + 0x30);
  *puVar3 = 0x88;
  puVar3[1] = 0;
  *(undefined2 *)(puVar3 + 2) = 0;
  puVar3[4] = puVar3[4] | 0x80;
  puVar3[4] = puVar3[4] & 0xbf | (*(char *)(lVar1 + 0x18) != -1) << 6;
  puVar3[4] = puVar3[4] | 0x20;
  puVar3[4] = puVar3[4] & 0xe0;
  *(uint *)(puVar3 + 4) = *(uint *)(puVar3 + 4) & 0xff;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + 0x18;
  puVar4 = *(undefined **)(lVar8 + 0x30);
  *puVar4 = 2;
  puVar4[1] = 1;
  FUN_0010658f(*(undefined8 *)(puVar3 + 8),*(undefined8 *)(puVar3 + 0x10),puVar4 + 2,
               *(undefined8 *)(puVar3 + 8));
  *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + -0x18;
  *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + -0x28;
  uVar7 = FUN_00104820(lVar8);
  *(undefined2 *)(puVar3 + 2) = uVar7;
  FUN_001080bc(0,lVar8,0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void FUN_0010754e(long param_1,long param_2,long param_3,undefined *param_4)

{
  long lVar1;
  char cVar2;
  uint16_t uVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  undefined local_44;
  undefined local_43;
  undefined local_42;
  undefined local_41;
  undefined local_40;
  undefined local_3f;
  undefined local_3e;
  undefined local_3d;
  undefined local_3c;
  undefined local_3b;
  undefined local_3a;
  undefined local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0xe;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0xe;
  lVar1 = *(long *)(param_1 + 0x30);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -0xe;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 0xe;
  switch(*param_4) {
  case 0x85:
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," type = Router Solicitation...");
    }
    if (((*(char *)(param_3 + 7) == -1) && (param_4[1] == '\0')) &&
       (uVar3 = ntohs(*(uint16_t *)(param_3 + 4)), 7 < uVar3)) {
      FUN_0010bd16(param_2,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),lVar1 + 6);
      FUN_00106c7b(param_2);
    }
    break;
  case 0x86:
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," type = Router Advertisement...");
    }
    (**(code **)(*(long *)(param_2 + 0x1768) + 8))
              ("Warning: guest sent NDP RA, but shouldn\'t",*(undefined8 *)(param_2 + 6000),
               *(undefined8 *)(param_2 + 6000));
    break;
  case 0x87:
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," type = Neighbor Solicitation...");
    }
    if (((*(char *)(param_3 + 7) == -1) && (param_4[1] == '\0')) &&
       ((param_4[8] != -1 && (uVar3 = ntohs(*(uint16_t *)(param_3 + 4)), 0x17 < uVar3)))) {
      local_58 = 0;
      local_50 = 0;
      cVar2 = FUN_001063a8(param_3 + 8,&local_58,param_3 + 8);
      if (cVar2 == '\x01') {
        local_48 = 0xff;
        local_47 = 2;
        local_46 = 0;
        local_45 = 0;
        local_44 = 0;
        local_43 = 0;
        local_42 = 0;
        local_41 = 0;
        local_40 = 0;
        local_3f = 0;
        local_3e = 0;
        local_3d = 1;
        local_3c = 0xff;
        local_3b = 0;
        local_3a = 0;
        local_39 = 0;
        cVar2 = FUN_001063d7(param_3 + 0x18,&local_48,0x68,param_3 + 0x18);
        if (cVar2 == '\0') break;
      }
      cVar2 = FUN_001063d7(param_4 + 8,param_2 + 0x18,(ulong)*(byte *)(param_2 + 0x28),param_4 + 8);
      if ((cVar2 == '\0') ||
         (cVar2 = FUN_001064a4(param_4 + 8,param_2 + 0x2c,(ulong)*(byte *)(param_2 + 0x28),
                               param_4 + 8), cVar2 == '\0')) {
        local_38 = 0x80fe;
        local_30 = 0x200000000000000;
        cVar2 = FUN_001063d7(param_4 + 8,&local_38,0x40,param_4 + 8);
        if (((cVar2 == '\0') ||
            (cVar2 = FUN_001064a4(param_4 + 8,param_2 + 0x2c,0x40,param_2 + 0x2c), cVar2 == '\0'))
           && ((cVar2 = FUN_001063d7(param_4 + 8,param_2 + 0x18,(ulong)*(byte *)(param_2 + 0x28),
                                     param_4 + 8), cVar2 == '\0' ||
               (cVar2 = FUN_001064a4(param_4 + 8,param_2 + 0x44,(ulong)*(byte *)(param_2 + 0x28),
                                     param_4 + 8), cVar2 == '\0')))) {
          local_28 = 0x80fe;
          local_20 = 0x200000000000000;
          cVar2 = FUN_001063d7(param_4 + 8,&local_28,0x40,param_4 + 8);
          if ((cVar2 == '\0') ||
             (cVar2 = FUN_001064a4(param_4 + 8,param_2 + 0x44,0x40,param_2 + 0x44), cVar2 == '\0'))
          break;
        }
      }
      FUN_0010bd16(param_2,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),lVar1 + 6);
      FUN_001072e0(param_2,param_3,param_4,param_3);
    }
    break;
  case 0x88:
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," type = Neighbor Advertisement...");
    }
    if ((((*(char *)(param_3 + 7) == -1) && (param_4[1] == '\0')) &&
        (uVar3 = ntohs(*(uint16_t *)(param_3 + 4)), 0x17 < uVar3)) &&
       ((param_4[8] != -1 && ((*(char *)(param_3 + 0x18) != -1 || ((param_4[4] & 0x40) == 0)))))) {
      FUN_0010bd16(param_2,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),lVar1 + 6);
    }
    break;
  case 0x89:
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," type = Redirect...");
    }
    (**(code **)(*(long *)(param_2 + 0x1768) + 8))
              ("Warning: guest sent NDP REDIRECT, but shouldn\'t",*(undefined8 *)(param_2 + 6000),
               *(undefined8 *)(param_2 + 6000));
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void FUN_00107ae5(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  char cVar5;
  uint16_t uVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  lVar3 = *(long *)(param_1 + 0x40);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"icmp6_input...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m_len = %d",(ulong)*(uint *)(param_1 + 0x38));
  }
  uVar6 = ntohs(*(uint16_t *)(lVar2 + 4));
  if ((3 < uVar6) && (iVar7 = FUN_00104820(param_1), iVar7 == 0)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -0x28;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 0x28;
    pbVar4 = *(byte **)(param_1 + 0x30);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x28;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x28;
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," icmp6_type = %d",(ulong)*pbVar4);
    }
    bVar1 = *pbVar4;
    if (bVar1 == 0x80) {
      cVar5 = FUN_001063d7(lVar2 + 0x18,lVar3 + 0x18,(ulong)*(byte *)(lVar3 + 0x28),lVar2 + 0x18);
      if ((cVar5 == '\0') ||
         (cVar5 = FUN_001064a4(lVar2 + 0x18,lVar3 + 0x2c,(ulong)*(byte *)(lVar3 + 0x28),lVar2 + 0x18
                              ), cVar5 == '\0')) {
        local_38 = 0x80fe;
        local_30 = 0x200000000000000;
        cVar5 = FUN_001063d7(lVar2 + 0x18,&local_38,0x40,lVar2 + 0x18);
        if (((cVar5 == '\0') ||
            (cVar5 = FUN_001064a4(lVar2 + 0x18,lVar3 + 0x2c,0x40,lVar3 + 0x2c), cVar5 == '\0')) &&
           ((cVar5 = FUN_001063d7(lVar2 + 0x18,lVar3 + 0x18,(ulong)*(byte *)(lVar3 + 0x28),
                                  lVar2 + 0x18), cVar5 == '\0' ||
            (cVar5 = FUN_001064a4(lVar2 + 0x18,lVar3 + 0x44,(ulong)*(byte *)(lVar3 + 0x28),
                                  lVar2 + 0x18), cVar5 == '\0')))) {
          local_28 = 0x80fe;
          local_20 = 0x200000000000000;
          cVar5 = FUN_001063d7(lVar2 + 0x18,&local_28,0x40,lVar2 + 0x18);
          if ((cVar5 == '\0') ||
             (cVar5 = FUN_001064a4(lVar2 + 0x18,lVar3 + 0x44,0x40,lVar3 + 0x44), cVar5 == '\0')) {
            g_log("Slirp",8,"external icmpv6 not supported yet");
            goto LAB_00107e7a;
          }
        }
      }
      FUN_001067e5(param_1,lVar3,lVar2,pbVar4);
    }
    else {
      if ((0x7f < bVar1) && ((uint)bVar1 - 0x85 < 5)) {
        FUN_0010754e(param_1,lVar3,lVar2,pbVar4);
      }
    }
  }
LAB_00107e7a:
  FUN_0010a4f0(param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00107e9d(undefined8 param_1)

{
  FUN_00106697(param_1);
  return;
}



void FUN_00107eb8(undefined8 param_1)

{
  FUN_00106798(param_1);
  return;
}



void FUN_00107ed3(long param_1)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  uint16_t uVar4;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (*(char *)(lVar2 + 10) == '\x01') {
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80,"ip6_input...");
    }
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," m = %p",param_1);
    }
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," m_len = %d",(ulong)*(uint *)(param_1 + 0x38));
    }
    if ((0x27 < *(uint *)(param_1 + 0x38)) &&
       (pbVar3 = *(byte **)(param_1 + 0x30), (*pbVar3 & 0xf0) == 0x60)) {
      uVar4 = ntohs(*(uint16_t *)(pbVar3 + 4));
      if (*(int *)(lVar2 + 0x88) < (int)(uint)uVar4) {
        FUN_00106903(param_1,2,0);
      }
      else {
        if (pbVar3[7] != 0) {
          bVar1 = pbVar3[6];
          if (bVar1 == 0x11) {
            FUN_0011b790(param_1);
            return;
          }
          if (bVar1 != 0x3a) {
            if (bVar1 == 6) {
              uVar4 = ntohs(*(uint16_t *)(pbVar3 + 4));
              *(uint16_t *)(pbVar3 + 4) = uVar4;
              FUN_00112cfb(param_1,0x28,0,10);
              return;
            }
            FUN_0010a4f0(param_1);
            return;
          }
          FUN_00107ae5(param_1);
          return;
        }
        FUN_00106903(param_1,3,0);
      }
    }
  }
  FUN_0010a4f0(param_1);
  return;
}



undefined8 FUN_001080bc(undefined8 param_1,long param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(param_2 + 0x30);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"ip6_output...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_2);
  }
  *pbVar1 = *pbVar1 & 0xf | 0x60;
  pbVar1[7] = 0xff;
  *pbVar1 = *pbVar1 & 0xf0;
  pbVar1[1] = pbVar1[1] & 0xf;
  pbVar1[1] = pbVar1[1] & 0xf0;
  *(undefined2 *)(pbVar1 + 2) = 0;
  if (param_3 == 0) {
    FUN_00105ece(param_1,param_2,param_2);
  }
  else {
    FUN_0010e953(*(undefined8 *)(param_2 + 0x40),param_2,param_2);
  }
  return 0;
}



undefined8 FUN_001081f2(short *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 2) {
    uVar1 = 0x10;
  }
  else {
    if (*param_1 == 10) {
      uVar1 = 0x1c;
    }
    else {
      uVar1 = g_assertion_message_expr("Slirp","../src/socket.h",0x88,"sockaddr_size",0);
    }
  }
  return uVar1;
}



void FUN_00108249(long param_1)

{
  *(long *)(param_1 + 0x530) = param_1 + 0x528;
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_1 + 0x530);
  *(long *)(param_1 + 0x6d0) = param_1 + 0x528;
  return;
}



void FUN_00108296(long param_1)

{
  while (*(long *)(param_1 + 0x528) != param_1 + 0x528) {
    FUN_001084c1(*(undefined8 *)(param_1 + 0x528));
  }
  return;
}



undefined8 FUN_001082d5(long param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ssize_t sVar4;
  int *piVar5;
  char *pcVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  sa_family_t local_38;
  undefined4 local_34;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_2 + 0x30);
  uVar2 = FUN_0011c25e(2,2,1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (*(int *)(param_1 + 0x10) == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    *(long *)(param_1 + 0x30) = param_2;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(lVar1 + 0xc);
    *(undefined *)(param_1 + 0x148) = *(undefined *)(lVar1 + 1);
    *(undefined *)(param_1 + 0x14a) = 1;
    *(undefined4 *)(param_1 + 0x14c) = 4;
    *(int *)(param_1 + 0x158) = DAT_003250e8 + 240000;
    local_38 = 2;
    local_34 = *(undefined4 *)(param_1 + 0x4c);
    lVar1 = *(long *)(param_1 + 0x28) + 0x528;
    FUN_0010ab4c(param_1,lVar1,lVar1);
    sVar4 = sendto(*(int *)(param_1 + 0x10),(void *)(*(long *)(param_2 + 0x30) + (long)param_3),
                   (long)(*(int *)(param_2 + 0x38) - param_3),0,(sockaddr *)&local_38,0x10);
    if (sVar4 == -1) {
      if ((DAT_003250e0 & 2) != 0) {
        piVar5 = __errno_location();
        pcVar6 = strerror(*piVar5);
        puVar7 = (uint *)__errno_location();
        g_log("Slirp",0x80,"icmp_input icmp sendto tx errno = %d-%s",(ulong)*puVar7,pcVar6);
      }
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      FUN_00108b39(param_2,3,0,0,pcVar6);
      FUN_001084c1(param_1);
    }
    uVar3 = 0;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



void FUN_001084c1(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 6000);
  (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x1768) + 0x38))
            ((ulong)*(uint *)(param_1 + 0x10),uVar1,(ulong)*(uint *)(param_1 + 0x10),uVar1);
  close(*(int *)(param_1 + 0x10));
  FUN_0010f77a(param_1);
  return;
}



void FUN_0010851a(long param_1,uint param_2)

{
  ushort uVar1;
  long lVar2;
  byte *pbVar3;
  uint16_t uVar4;
  int iVar5;
  socklen_t __addr_len;
  long lVar6;
  int *piVar7;
  char *pcVar8;
  uint *puVar9;
  ssize_t sVar10;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar1 = *(ushort *)(lVar2 + 2);
  lVar6 = *(long *)(param_1 + 0x40);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"icmp_input...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m_len = %d",(ulong)*(uint *)(param_1 + 0x38));
  }
  if (7 < uVar1) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - param_2;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + (long)(int)param_2;
    pbVar3 = *(byte **)(param_1 + 0x30);
    iVar5 = FUN_001044c3(param_1,(ulong)(uint)uVar1,(ulong)(uint)uVar1);
    if (iVar5 == 0) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_2;
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - (long)(int)param_2;
      if ((DAT_003250e0 & 1) != 0) {
        g_log("Slirp",0x80," icmp_type = %d",(ulong)*pbVar3);
      }
      switch(*pbVar3) {
      case 3:
      case 4:
      case 5:
      case 0xb:
      case 0xc:
      case 0xd:
      case 0x11:
        FUN_0010a4f0(param_1);
        break;
      default:
        FUN_0010a4f0(param_1);
        break;
      case 8:
        *(short *)(lVar2 + 2) = *(short *)(lVar2 + 2) + (short)param_2;
        if ((*(int *)(lVar2 + 0x10) == *(int *)(lVar6 + 0x14)) ||
           (*(int *)(lVar2 + 0x10) == *(int *)(lVar6 + 0x40))) {
          FUN_00108f3f(param_1);
          break;
        }
        if (*(int *)(lVar6 + 0x7c) == 0) {
          lVar6 = FUN_0010f694(lVar6);
          iVar5 = FUN_001082d5(lVar6,param_1,(ulong)param_2,param_1);
          if (iVar5 != 0) {
            iVar5 = FUN_0011b34d(lVar6,2);
            if (iVar5 == -1) {
              if ((DAT_003250e0 & 2) != 0) {
                piVar7 = __errno_location();
                pcVar8 = strerror(*piVar7);
                puVar9 = (uint *)__errno_location();
                g_log("Slirp",0x80,"icmp_input udp_attach errno = %d-%s",(ulong)*puVar9,pcVar8);
              }
              FUN_0010f77a(lVar6);
              FUN_0010a4f0(param_1);
            }
            else {
              *(long *)(lVar6 + 0x30) = param_1;
              *(undefined2 *)(lVar6 + 0x48) = 2;
              *(undefined4 *)(lVar6 + 0x4c) = *(undefined4 *)(lVar2 + 0x10);
              uVar4 = htons(7);
              *(uint16_t *)(lVar6 + 0x4a) = uVar4;
              *(undefined2 *)(lVar6 + 200) = 2;
              *(undefined4 *)(lVar6 + 0xcc) = *(undefined4 *)(lVar2 + 0xc);
              uVar4 = htons(9);
              *(uint16_t *)(lVar6 + 0xca) = uVar4;
              *(undefined *)(lVar6 + 0x148) = *(undefined *)(lVar2 + 1);
              *(undefined *)(lVar6 + 0x14a) = 1;
              *(undefined4 *)(lVar6 + 0x14c) = 4;
              local_a8 = *(undefined8 *)(lVar6 + 0x48);
              local_a0 = *(undefined8 *)(lVar6 + 0x50);
              local_98 = *(undefined8 *)(lVar6 + 0x58);
              local_90 = *(undefined8 *)(lVar6 + 0x60);
              local_88 = *(undefined8 *)(lVar6 + 0x68);
              local_80 = *(undefined8 *)(lVar6 + 0x70);
              local_78 = *(undefined8 *)(lVar6 + 0x78);
              local_70 = *(undefined8 *)(lVar6 + 0x80);
              local_68 = *(undefined8 *)(lVar6 + 0x88);
              local_60 = *(undefined8 *)(lVar6 + 0x90);
              local_58 = *(undefined8 *)(lVar6 + 0x98);
              local_50 = *(undefined8 *)(lVar6 + 0xa0);
              local_48 = *(undefined8 *)(lVar6 + 0xa8);
              local_40 = *(undefined8 *)(lVar6 + 0xb0);
              local_30 = *(undefined8 *)(lVar6 + 0xc0);
              local_38 = *(undefined8 *)(lVar6 + 0xb8);
              iVar5 = FUN_00111cd0(lVar6,&local_a8,&local_a8);
              if (iVar5 < 0) {
                piVar7 = __errno_location();
                pcVar8 = strerror(*piVar7);
                FUN_00108b39(param_1,3,0,0,pcVar8);
                FUN_0011b3c9(lVar6);
              }
              else {
                __addr_len = FUN_001081f2();
                sVar10 = sendto(*(int *)(lVar6 + 0x10),
                                                                
                                "This is a pseudo-PING packet used by Slirp to emulate ICMP ECHO-REQUEST packets.\n"
                                ,0x51,0,(sockaddr *)&local_a8,__addr_len);
                if (sVar10 == -1) {
                  if ((DAT_003250e0 & 2) != 0) {
                    piVar7 = __errno_location();
                    pcVar8 = strerror(*piVar7);
                    puVar9 = (uint *)__errno_location();
                    g_log("Slirp",0x80,"icmp_input udp sendto tx errno = %d-%s",(ulong)*puVar9,
                          pcVar8);
                  }
                  piVar7 = __errno_location();
                  pcVar8 = strerror(*piVar7);
                  FUN_00108b39(param_1,3,0,0,pcVar8);
                  FUN_0011b3c9(lVar6);
                }
              }
            }
          }
          break;
        }
        goto LAB_0010861b;
      }
      goto LAB_00108b19;
    }
  }
LAB_0010861b:
  FUN_0010a4f0(param_1);
LAB_00108b19:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Type propagation algorithm not settling

void FUN_00108b39(long param_1,char param_2,char param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  uint16_t uVar4;
  undefined2 uVar5;
  uint32_t uVar6;
  uint uVar7;
  char *__src;
  long lVar8;
  long in_FS_OFFSET;
  uint local_78;
  char local_68 [32];
  char local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"icmp_send_error...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," msrc = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," msrc_len = %d",(ulong)*(uint *)(param_1 + 0x38));
  }
  if (((param_2 == '\x03') || (param_2 == '\v')) && (param_1 != 0)) {
    pbVar3 = *(byte **)(param_1 + 0x30);
    if ((DAT_003250e0 & 2) != 0) {
      __src = inet_ntoa((in_addr)((in_addr *)(pbVar3 + 0xc))->s_addr);
      strcpy(local_68,__src);
      __src = inet_ntoa((in_addr)((in_addr *)(pbVar3 + 0x10))->s_addr);
      strcpy(local_48,__src);
      if ((DAT_003250e0 & 2) != 0) {
        g_log("Slirp",0x80," %.16s to %.16s",local_68,local_48);
      }
    }
    if (((*(ushort *)(pbVar3 + 6) & 0x1fff) == 0) &&
       (uVar7 = *(uint *)(pbVar3 + 0xc), uVar6 = htonl(0xfffffff), (uVar6 & uVar7) != 0)) {
      bVar1 = *pbVar3;
      uVar2 = *(ushort *)(pbVar3 + 2);
      local_78 = (uint)uVar2;
      if (((pbVar3[9] != 1) ||
          ((pbVar3[(ulong)(bVar1 & 0xf) * 4] < 0x13 &&
           (*(int *)(&DAT_0011d7e0 + (long)(int)(uint)pbVar3[(ulong)(bVar1 & 0xf) * 4] * 4) == 0))))
         && (lVar8 = FUN_0010a39a(*(undefined8 *)(param_1 + 0x40)), lVar8 != 0)) {
        uVar7 = *(int *)(param_1 + 0x38) + 0x240;
        if (*(int *)(lVar8 + 0x24) < (int)uVar7) {
          FUN_0010a70b(lVar8,(ulong)uVar7);
        }
        memcpy(*(void **)(lVar8 + 0x30),*(void **)(param_1 + 0x30),(long)*(int *)(param_1 + 0x38));
        *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(param_1 + 0x38);
        pbVar3 = *(byte **)(lVar8 + 0x30);
        *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + 0x14;
        *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + -0x14;
        __src = *(char **)(lVar8 + 0x30);
        if (param_4 == 0) {
          if (0x224 < uVar2) {
            local_78 = 0x224;
          }
        }
        else {
          local_78 = (uint)(bVar1 & 0xf) * 4 + 8;
        }
        *(int *)(lVar8 + 0x38) = local_78 + 8;
        *__src = param_2;
        __src[1] = param_3;
        *(undefined2 *)(__src + 4) = 0;
        *(undefined2 *)(__src + 6) = 0;
        memcpy(__src + 8,*(void **)(param_1 + 0x30),(ulong)local_78);
        uVar4 = htons(*(uint16_t *)(__src + 10));
        *(uint16_t *)(__src + 10) = uVar4;
        uVar4 = htons(*(uint16_t *)(__src + 0xc));
        *(uint16_t *)(__src + 0xc) = uVar4;
        uVar4 = htons(*(uint16_t *)(__src + 0xe));
        *(uint16_t *)(__src + 0xe) = uVar4;
        *(undefined2 *)(__src + 2) = 0;
        uVar5 = FUN_001044c3(lVar8,(ulong)*(uint *)(lVar8 + 0x38));
        *(undefined2 *)(__src + 2) = uVar5;
        *(long *)(lVar8 + 0x30) = *(long *)(lVar8 + 0x30) + -0x14;
        *(int *)(lVar8 + 0x38) = *(int *)(lVar8 + 0x38) + 0x14;
        *pbVar3 = *pbVar3 & 0xf0 | 5;
        *(short *)(pbVar3 + 2) = (short)*(undefined4 *)(lVar8 + 0x38);
        pbVar3[1] = pbVar3[1] & 0x1e | 0xc0;
        pbVar3[8] = 0xff;
        pbVar3[9] = 1;
        *(undefined4 *)(pbVar3 + 0x10) = *(undefined4 *)(pbVar3 + 0xc);
        *(undefined4 *)(pbVar3 + 0xc) = *(undefined4 *)(*(long *)(lVar8 + 0x40) + 0x14);
        FUN_00109e96(0,lVar8);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00108f3f(long param_1)

{
  undefined4 uVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  pbVar2 = *(byte **)(param_1 + 0x30);
  uVar4 = (uint)(*pbVar2 & 0xf);
  iVar6 = uVar4 * 4;
  iVar7 = iVar6 + -0x14;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + (long)iVar6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar4 * -4;
  puVar3 = *(undefined **)(param_1 + 0x30);
  *puVar3 = 0;
  *(undefined2 *)(puVar3 + 2) = 0;
  uVar8 = (uint)*(ushort *)(pbVar2 + 2) + uVar4 * -4;
  uVar5 = FUN_001044c3(param_1,(ulong)uVar8,(ulong)uVar8);
  *(undefined2 *)(puVar3 + 2) = uVar5;
  *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - (long)iVar6;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + iVar6;
  if (0 < iVar7) {
    memmove(pbVar2 + 0x14,pbVar2 + iVar6,(ulong)(*(int *)(param_1 + 0x38) + uVar4 * -4));
    *pbVar2 = *pbVar2 & 0xf0 | (byte)(iVar6 - iVar7 >> 2) & 0xf;
    *(short *)(pbVar2 + 2) = *(short *)(pbVar2 + 2) - (short)iVar7;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - iVar7;
  }
  pbVar2[8] = 0xff;
  uVar1 = *(undefined4 *)(pbVar2 + 0x10);
  *(undefined4 *)(pbVar2 + 0x10) = *(undefined4 *)(pbVar2 + 0xc);
  *(undefined4 *)(pbVar2 + 0xc) = uVar1;
  FUN_00109e96(0,param_1);
  return;
}



void FUN_00109096(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  void *__buf;
  uint uVar3;
  int iVar4;
  ssize_t sVar5;
  int *piVar6;
  char *pcVar7;
  uint *puVar8;
  size_t __n;
  
  lVar2 = *(long *)(param_1 + 0x30);
  uVar3 = (uint)(**(byte **)(lVar2 + 0x30) & 0xf);
  iVar4 = uVar3 * 4;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + (long)iVar4;
  *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + uVar3 * -4;
  __buf = *(void **)(lVar2 + 0x30);
  uVar1 = *(undefined2 *)((long)__buf + 4);
  if ((*(uint *)(lVar2 + 0x20) & 1) == 0) {
    __n = ((long)*(int *)(lVar2 + 0x24) + lVar2 + 0x60) - *(long *)(lVar2 + 0x30);
  }
  else {
    __n = ((long)*(int *)(lVar2 + 0x24) + *(long *)(lVar2 + 0x58)) - *(long *)(lVar2 + 0x30);
  }
  sVar5 = recv(*(int *)(param_1 + 0x10),__buf,__n,0);
  *(undefined2 *)((long)__buf + 4) = uVar1;
  *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) - (long)iVar4;
  *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + iVar4;
  if (((int)sVar5 == -1) || ((int)sVar5 == 0)) {
    piVar6 = __errno_location();
    iVar4 = *piVar6;
    if ((DAT_003250e0 & 2) != 0) {
      piVar6 = __errno_location();
      pcVar7 = strerror(*piVar6);
      puVar8 = (uint *)__errno_location();
      g_log("Slirp",0x80," udp icmp rx errno = %d-%s",(ulong)*puVar8,pcVar7);
    }
    piVar6 = __errno_location();
    pcVar7 = strerror(*piVar6);
    FUN_00108b39(*(undefined8 *)(param_1 + 0x30),3,(ulong)(iVar4 != 0x65),0,pcVar7);
  }
  else {
    FUN_00108f3f(*(undefined8 *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_001084c1(param_1);
  return;
}



void FUN_0010929d(long param_1)

{
  *(long *)(param_1 + 0x100) = param_1 + 0xf8;
  *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_1 + 0x100);
  FUN_0011aa94(param_1);
  FUN_001164fc(param_1);
  FUN_00108249(param_1);
  return;
}



void FUN_001092fc(undefined8 param_1)

{
  FUN_0011aae1(param_1);
  FUN_00116557(param_1);
  FUN_00108296(param_1);
  return;
}



void FUN_0010932f(long param_1)

{
  byte bVar1;
  long lVar2;
  byte bVar3;
  uint16_t uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  long local_40;
  undefined8 *local_30;
  
  lVar2 = *(long *)(param_1 + 0x40);
  if (*(char *)(lVar2 + 9) == '\x01') {
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80,"ip_input...");
    }
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," m = %p",param_1);
    }
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," m_len = %d",(ulong)*(uint *)(param_1 + 0x38));
    }
    if ((0x13 < *(uint *)(param_1 + 0x38)) &&
       (pbVar8 = *(byte **)(param_1 + 0x30), (*pbVar8 & 0xf0) == 0x40)) {
      bVar3 = *pbVar8 & 0xf;
      uVar5 = (uint)bVar3 << 2;
      if ((0x13 < uVar5) &&
         (((int)uVar5 <= *(int *)(param_1 + 0x38) &&
          (iVar6 = FUN_001044c3(param_1,(ulong)bVar3 << 2,(ulong)bVar3 << 2), iVar6 == 0)))) {
        uVar4 = ntohs(*(uint16_t *)(pbVar8 + 2));
        *(uint16_t *)(pbVar8 + 2) = uVar4;
        if (uVar5 <= *(ushort *)(pbVar8 + 2)) {
          uVar4 = ntohs(*(uint16_t *)(pbVar8 + 4));
          *(uint16_t *)(pbVar8 + 4) = uVar4;
          uVar4 = ntohs(*(uint16_t *)(pbVar8 + 6));
          *(uint16_t *)(pbVar8 + 6) = uVar4;
          if ((int)(uint)*(ushort *)(pbVar8 + 2) <= *(int *)(param_1 + 0x38)) {
            if ((int)(uint)*(ushort *)(pbVar8 + 2) < *(int *)(param_1 + 0x38)) {
              uVar7 = (uint)*(ushort *)(pbVar8 + 2) - *(int *)(param_1 + 0x38);
              FUN_0010a875(param_1,(ulong)uVar7,(ulong)uVar7);
            }
            if (pbVar8[8] != 0) {
              local_40 = param_1;
              if ((ushort)(*(ushort *)(pbVar8 + 6) & 0xff |
                          ((ushort)(byte)((ulong)*(ushort *)(pbVar8 + 6) >> 8) & 0xbf) << 8) == 0) {
                *(short *)(pbVar8 + 2) = *(short *)(pbVar8 + 2) - (short)uVar5;
              }
              else {
                local_30 = *(undefined8 **)(lVar2 + 0xf8);
                while (local_30 != (undefined8 *)(lVar2 + 0xf8)) {
                  puVar9 = local_30 + -2;
                  if ((((*(short *)(pbVar8 + 4) == *(short *)((long)local_30 + 0x12)) &&
                       (*(int *)(pbVar8 + 0xc) == *(int *)((long)local_30 + 0x14))) &&
                      (*(int *)(pbVar8 + 0x10) == *(int *)(local_30 + 3))) &&
                     (pbVar8[9] == *(byte *)((long)local_30 + 0x11))) goto LAB_001095a8;
                  local_30 = (undefined8 *)*local_30;
                }
                puVar9 = (undefined8 *)0x0;
LAB_001095a8:
                *(short *)(pbVar8 + 2) = *(short *)(pbVar8 + 2) - (short)uVar5;
                if ((*(ushort *)(pbVar8 + 6) & 0x2000) == 0) {
                  pbVar8[1] = pbVar8[1] & 0xfe;
                }
                else {
                  pbVar8[1] = pbVar8[1] | 1;
                }
                *(short *)(pbVar8 + 6) = *(short *)(pbVar8 + 6) << 3;
                if (((pbVar8[1] & 1) == 0) && (*(short *)(pbVar8 + 6) == 0)) {
                  if (puVar9 != (undefined8 *)0x0) {
                    FUN_00109c34(lVar2,puVar9);
                  }
                }
                else {
                  pbVar8 = (byte *)FUN_001096e7(lVar2,pbVar8,puVar9);
                  if (pbVar8 == (byte *)0x0) {
                    return;
                  }
                  local_40 = FUN_0010a9b5(lVar2,pbVar8);
                }
              }
              bVar1 = pbVar8[9];
              if (bVar1 == 6) {
                FUN_00112cfb(local_40,(ulong)bVar3 << 2,0,2);
                return;
              }
              if (bVar1 != 0x11) {
                if (bVar1 == 1) {
                  FUN_0010851a(local_40,(ulong)bVar3 << 2,(ulong)bVar3 << 2);
                  return;
                }
                FUN_0010a4f0(local_40);
                return;
              }
              FUN_0011ab20(local_40,(ulong)bVar3 << 2,(ulong)bVar3 << 2);
              return;
            }
            FUN_00108b39(param_1,0xb,0,0,&DAT_0011d9ac);
          }
        }
      }
    }
  }
  FUN_0010a4f0(param_1);
  return;
}



byte * FUN_001096e7(long param_1,byte *param_2,long **param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  long **pplVar7;
  long *plVar8;
  long **local_60;
  uint local_44;
  
  lVar2 = FUN_0010a9b5(param_1,param_2,param_2);
  bVar1 = *param_2;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"ip_reass...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," ip = %p",param_2);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," fp = %p",param_3);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",lVar2);
  }
  *(long *)(lVar2 + 0x30) = (long)(int)((uint)(bVar1 & 0xf) * 4) + *(long *)(lVar2 + 0x30);
  *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + (uint)(bVar1 & 0xf) * -4;
  if (param_3 == (long **)0x0) {
    lVar3 = FUN_0010a39a(param_1);
    if (lVar3 == 0) {
LAB_00109c1e:
      FUN_0010a4f0(lVar2);
      return (byte *)0;
    }
    pplVar7 = *(long ***)(lVar3 + 0x30);
    FUN_0010ab4c(pplVar7 + 2,param_1 + 0xf8,param_1 + 0xf8);
    *(undefined *)(pplVar7 + 4) = 0x3c;
    *(byte *)((long)pplVar7 + 0x21) = param_2[9];
    *(undefined2 *)((long)pplVar7 + 0x22) = *(undefined2 *)(param_2 + 4);
    *(long ***)(pplVar7 + 1) = pplVar7;
    *pplVar7 = pplVar7[1];
    *(undefined4 *)((long)pplVar7 + 0x24) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(pplVar7 + 5) = *(undefined4 *)(param_2 + 0x10);
    local_60 = pplVar7;
  }
  else {
    pplVar7 = (long **)*param_3;
    while ((pplVar7 != param_3 && (*(ushort *)((long)pplVar7 + 0x16) <= *(ushort *)(param_2 + 6))))
    {
      pplVar7 = (long **)*pplVar7;
    }
    if (((long **)pplVar7[1] != param_3) &&
       (uVar6 = ((uint)*(ushort *)((long)pplVar7[1] + 0x16) +
                (uint)*(ushort *)((long)pplVar7[1] + 0x12)) - (uint)*(ushort *)(param_2 + 6),
       0 < (int)uVar6)) {
      if ((int)(uint)*(ushort *)(param_2 + 2) <= (int)uVar6) goto LAB_00109c1e;
      uVar5 = FUN_0010a9b5(param_1,param_2,param_2);
      FUN_0010a875(uVar5,(ulong)uVar6,uVar5);
      *(short *)(param_2 + 6) = (short)uVar6 + *(short *)(param_2 + 6);
      *(short *)(param_2 + 2) = *(short *)(param_2 + 2) - (short)uVar6;
    }
    while( true ) {
      local_60 = param_3;
      if ((pplVar7 == param_3) ||
         ((uint)*(ushort *)(param_2 + 6) + (uint)*(ushort *)(param_2 + 2) <=
          (uint)*(ushort *)((long)pplVar7 + 0x16))) goto LAB_00109a68;
      uVar6 = ((uint)*(ushort *)(param_2 + 6) + (uint)*(ushort *)(param_2 + 2)) -
              (uint)*(ushort *)((long)pplVar7 + 0x16);
      if ((int)uVar6 < (int)(uint)*(ushort *)((long)pplVar7 + 0x12)) break;
      pplVar7 = (long **)*pplVar7;
      uVar5 = FUN_0010a9b5(param_1,pplVar7[1],pplVar7[1]);
      FUN_0010a4f0(uVar5);
      FUN_00109d39(pplVar7[1]);
    }
    *(short *)((long)pplVar7 + 0x12) = *(short *)((long)pplVar7 + 0x12) - (short)uVar6;
    *(short *)((long)pplVar7 + 0x16) = *(short *)((long)pplVar7 + 0x16) + (short)uVar6;
    uVar5 = FUN_0010a9b5(param_1,pplVar7);
    FUN_0010a875(uVar5,(ulong)uVar6,uVar5);
  }
LAB_00109a68:
  FUN_00109cb3(param_2 + -0x10,pplVar7[1],param_2 + -0x10);
  local_44 = 0;
  pplVar7 = (long **)*local_60;
  while( true ) {
    if (pplVar7 == local_60) {
      if ((*(byte *)((long)pplVar7[1] + 0x11) & 1) == 0) {
        pplVar7 = (long **)*local_60;
        lVar2 = FUN_0010a9b5(param_1,pplVar7);
        uVar6 = *(uint *)(lVar2 + 0x20);
        pplVar7 = (long **)*pplVar7;
        while (pplVar7 != local_60) {
          uVar5 = FUN_0010a9b5(param_1,pplVar7);
          pplVar7 = (long **)*pplVar7;
          FUN_0010a60d(lVar2,uVar5);
        }
        plVar8 = *local_60;
        if (((uVar6 & 1) == 0) && ((*(uint *)(lVar2 + 0x20) & 1) != 0)) {
          plVar8 = (long *)(*(long *)(lVar2 + 0x58) + (long)((int)plVar8 - ((int)lVar2 + 0x60)));
        }
        pbVar4 = (byte *)((long)plVar8 + 0x10);
        *(undefined2 *)((long)plVar8 + 0x12) = (short)local_44;
        *(byte *)((long)plVar8 + 0x11) = *(byte *)((long)plVar8 + 0x11) & 0xfe;
        *(undefined4 *)((long)plVar8 + 0x1c) = *(undefined4 *)((long)local_60 + 0x24);
        *(undefined4 *)((long)plVar8 + 0x20) = *(undefined4 *)(local_60 + 5);
        FUN_0010ab7f(local_60 + 2);
        uVar5 = FUN_0010a9b5(param_1,local_60,local_60);
        FUN_0010a4f0(uVar5);
        *(int *)(lVar2 + 0x38) = (uint)(*pbVar4 & 0xf) * 4 + *(int *)(lVar2 + 0x38);
        *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) - (long)(int)((uint)(*pbVar4 & 0xf) << 2);
      }
      else {
        pbVar4 = (byte *)0x0;
      }
      return pbVar4;
    }
    if (local_44 != (uint)*(ushort *)((long)pplVar7 + 0x16)) break;
    local_44 = local_44 + *(ushort *)((long)pplVar7 + 0x12);
    pplVar7 = (long **)*pplVar7;
  }
  return (byte *)0;
}



void FUN_00109c34(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)*param_2;
  while (puVar3 != param_2) {
    puVar1 = (undefined8 *)*puVar3;
    FUN_00109d39(puVar3);
    uVar2 = FUN_0010a9b5(param_1,puVar3);
    FUN_0010a4f0(uVar2);
    puVar3 = puVar1;
  }
  FUN_0010ab7f(param_2 + 2);
  uVar2 = FUN_0010a9b5(param_1,param_2,param_2);
  FUN_0010a4f0(uVar2);
  return;
}



void FUN_00109cb3(long **param_1,long **param_2)

{
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"ip_enq...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," prev = %p",param_2);
  }
  *(long ***)(param_1 + 1) = param_2;
  *param_1 = *param_2;
  *(long ***)(*param_2 + 1) = param_1;
  *(long ***)param_2 = param_1;
  return;
}



void FUN_00109d39(long *param_1)

{
  *(long *)param_1[1] = *param_1;
  *(long *)(*param_1 + 8) = param_1[1];
  return;
}



void FUN_00109d58(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *local_20;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"ip_slowtimo...");
  }
  local_20 = *(undefined8 **)(param_1 + 0xf8);
  if (local_20 != (undefined8 *)0x0) {
    while (local_20 != (undefined8 *)(param_1 + 0xf8)) {
      puVar3 = local_20 + -2;
      puVar2 = (undefined8 *)*local_20;
      *(char *)(local_20 + 2) = *(char *)(local_20 + 2) + -1;
      puVar1 = local_20 + 2;
      local_20 = puVar2;
      if (*(char *)puVar1 == '\0') {
        FUN_00109c34(param_1,puVar3,puVar3);
      }
    }
  }
  return;
}



void FUN_00109e0e(long param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = *(byte **)(param_1 + 0x30);
  iVar2 = (uint)(*pbVar1 & 0xf) * 4 + -0x14;
  memcpy(pbVar1 + 0x14,pbVar1 + 0x14 + iVar2,(ulong)((*(int *)(param_1 + 0x38) - iVar2) - 0x14));
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - iVar2;
  *pbVar1 = *pbVar1 & 0xf0 | 5;
  return;
}



ulong FUN_00109e96(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint16_t __hostshort;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint local_4c;
  uint local_48;
  uint local_44;
  long *local_38;
  
  lVar7 = *(long *)(param_2 + 0x40);
  local_44 = 0;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"ip_output...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m0 = %p");
  }
  puVar1 = *(undefined8 **)(param_2 + 0x30);
  *(byte *)puVar1 = *(byte *)puVar1 & 0xf | 0x40;
  *(ushort *)((long)puVar1 + 6) = *(ushort *)((long)puVar1 + 6) & 0x4000;
  __hostshort = *(uint16_t *)(lVar7 + 0x118);
  *(short *)(lVar7 + 0x118) = __hostshort + 1;
  __hostshort = htons(__hostshort);
  *(uint16_t *)((long)puVar1 + 4) = __hostshort;
  *(byte *)puVar1 = *(byte *)puVar1 & 0xf0 | 5;
  if (*(int *)(lVar7 + 0x88) < (int)(uint)*(ushort *)((long)puVar1 + 2)) {
    if (((*(ushort *)((long)puVar1 + 6) & 0x4000) == 0) &&
       (uVar5 = *(int *)(lVar7 + 0x88) - 0x14U & 0xfffffff8, 7 < (int)uVar5)) {
      local_38 = (long *)(param_2 + 0x10);
      local_48 = uVar5 + 0x14;
      local_4c = uVar5;
      while ((int)local_48 < (int)(uint)*(ushort *)((long)puVar1 + 2)) {
        lVar7 = FUN_0010a39a();
        if (lVar7 == 0) {
          local_44 = 0xffffffff;
          goto LAB_0010a264;
        }
        *(long *)(lVar7 + 0x30) = *(long *)(lVar7 + 0x30) + 0x10;
        puVar2 = *(undefined8 **)(lVar7 + 0x30);
        uVar3 = puVar1[1];
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
        *(undefined4 *)(lVar7 + 0x38) = 0x14;
        *(short *)((long)puVar2 + 6) =
             (*(ushort *)((long)puVar1 + 6) & 0xff |
             ((ushort)(byte)((ulong)*(ushort *)((long)puVar1 + 6) >> 8) & 0xdf) << 8) +
             (short)((int)(local_48 - 0x14) >> 3);
        if ((*(ushort *)((long)puVar1 + 6) & 0x2000) != 0) {
          *(ushort *)((long)puVar2 + 6) =
               *(ushort *)((long)puVar2 + 6) & 0xff |
               (ushort)(byte)((ulong)*(ushort *)((long)puVar2 + 6) >> 8) << 8 | 0x2000;
        }
        if ((int)(local_48 + local_4c) < (int)(uint)*(ushort *)((long)puVar1 + 2)) {
          *(ushort *)((long)puVar2 + 6) =
               *(ushort *)((long)puVar2 + 6) & 0xff |
               (ushort)(byte)((ulong)*(ushort *)((long)puVar2 + 6) >> 8) << 8 | 0x2000;
        }
        else {
          local_4c = *(ushort *)((long)puVar1 + 2) - local_48;
        }
        __hostshort = htons((short)local_4c + 0x14);
        *(uint16_t *)((long)puVar2 + 2) = __hostshort;
        iVar6 = FUN_0010a8d5(lVar7,param_2,(ulong)local_48,(ulong)local_4c);
        if (iVar6 < 0) {
          local_44 = 0xffffffff;
          goto LAB_0010a264;
        }
        __hostshort = htons(*(uint16_t *)((long)puVar2 + 6));
        *(uint16_t *)((long)puVar2 + 6) = __hostshort;
        *(undefined2 *)((long)puVar2 + 10) = 0;
        uVar4 = FUN_001044c3(lVar7,0x14);
        *(undefined2 *)((long)puVar2 + 10) = uVar4;
        *local_38 = lVar7;
        local_38 = (long *)(lVar7 + 0x10);
        local_48 = local_48 + local_4c;
      }
      uVar8 = (ulong)((uVar5 + 0x14) - (uint)*(ushort *)((long)puVar1 + 2));
      FUN_0010a875(param_2,uVar8,uVar8);
      __hostshort = htons((uint16_t)*(undefined4 *)(param_2 + 0x38));
      *(uint16_t *)((long)puVar1 + 2) = __hostshort;
      __hostshort = htons(*(ushort *)((long)puVar1 + 6) & 0xff |
                          (ushort)(byte)((ulong)*(ushort *)((long)puVar1 + 6) >> 8) << 8 | 0x2000);
      *(uint16_t *)((long)puVar1 + 6) = __hostshort;
      *(undefined2 *)((long)puVar1 + 10) = 0;
      uVar4 = FUN_001044c3(param_2,0x14);
      *(undefined2 *)((long)puVar1 + 10) = uVar4;
LAB_0010a264:
      while (param_2 != 0) {
        lVar7 = *(long *)(param_2 + 0x10);
        *(undefined8 *)(param_2 + 0x10) = 0;
        if (local_44 == 0) {
          FUN_00105ece(param_1,param_2);
          param_2 = lVar7;
        }
        else {
          FUN_0010a4f0(param_2);
          param_2 = lVar7;
        }
      }
    }
    else {
      local_44 = 0xffffffff;
      FUN_0010a4f0(param_2);
    }
  }
  else {
    __hostshort = htons(*(uint16_t *)((long)puVar1 + 2));
    *(uint16_t *)((long)puVar1 + 2) = __hostshort;
    __hostshort = htons(*(uint16_t *)((long)puVar1 + 6));
    *(uint16_t *)((long)puVar1 + 6) = __hostshort;
    *(undefined2 *)((long)puVar1 + 10) = 0;
    uVar4 = FUN_001044c3(param_2,0x14);
    *(undefined2 *)((long)puVar1 + 10) = uVar4;
    FUN_00105ece(param_1,param_2);
  }
  return (ulong)local_44;
}



void FUN_0010a28a(long param_1)

{
  *(long *)(param_1 + 0xa0) = param_1 + 0x98;
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xb0) = param_1 + 0xa8;
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xb0);
  return;
}



void FUN_0010a2ed(long param_1)

{
  undefined8 *puVar1;
  undefined8 *local_18;
  
  local_18 = *(undefined8 **)(param_1 + 0xa8);
  while (local_18 != (undefined8 *)(param_1 + 0xa8)) {
    puVar1 = (undefined8 *)*local_18;
    if ((*(uint *)(local_18 + 4) & 1) != 0) {
      g_free(local_18[0xb]);
    }
    g_free(local_18);
    local_18 = puVar1;
  }
  local_18 = *(undefined8 **)(param_1 + 0x98);
  while (local_18 != (undefined8 *)(param_1 + 0x98)) {
    puVar1 = (undefined8 *)*local_18;
    g_free(local_18);
    local_18 = puVar1;
  }
  return;
}



long FUN_0010a39a(long param_1)

{
  long lVar1;
  uint local_1c;
  
  local_1c = 0;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"m_get...");
  }
  if (*(long *)(param_1 + 0x98) == param_1 + 0x98) {
    lVar1 = g_malloc((long)*(int *)(param_1 + 0x88) + 0x8c);
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
    if (0x1e < *(int *)(param_1 + 0xb8)) {
      local_1c = 8;
    }
    *(long *)(lVar1 + 0x40) = param_1;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x98);
    FUN_0010ab7f(lVar1);
  }
  FUN_0010ab4c(lVar1,param_1 + 0xa8);
  *(uint *)(lVar1 + 0x20) = local_1c | 4;
  *(int *)(lVar1 + 0x24) = *(int *)(param_1 + 0x88) + 0x2c;
  *(long *)(lVar1 + 0x30) = lVar1 + 0x60;
  *(undefined4 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0xffffffffffffffff;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",lVar1);
  }
  return lVar1;
}



void FUN_0010a4f0(long param_1)

{
  long lVar1;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"m_free...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_1);
  }
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x20) & 4) != 0) {
      FUN_0010ab7f(param_1);
    }
    if ((*(uint *)(param_1 + 0x20) & 1) != 0) {
      g_free(*(undefined8 *)(param_1 + 0x58));
    }
    if ((*(uint *)(param_1 + 0x20) & 8) == 0) {
      if ((*(uint *)(param_1 + 0x20) & 2) == 0) {
        lVar1 = *(long *)(param_1 + 0x40) + 0x98;
        FUN_0010ab4c(param_1,lVar1,lVar1);
        *(undefined4 *)(param_1 + 0x20) = 2;
      }
    }
    else {
      g_free(param_1);
      *(int *)(*(long *)(param_1 + 0x40) + 0xb8) = *(int *)(*(long *)(param_1 + 0x40) + 0xb8) + -1;
    }
  }
  return;
}



void FUN_0010a60d(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    lVar2 = ((long)*(int *)(param_1 + 0x24) + param_1 + 0x60) - *(long *)(param_1 + 0x30);
  }
  else {
    lVar2 = ((long)*(int *)(param_1 + 0x24) + *(long *)(param_1 + 0x58)) - *(long *)(param_1 + 0x30)
    ;
  }
  if (lVar2 - *(int *)(param_1 + 0x38) < (long)*(int *)(param_2 + 0x38)) {
    uVar1 = *(int *)(param_1 + 0x38) + *(int *)(param_2 + 0x38);
    FUN_0010a70b(param_1,(ulong)uVar1,(ulong)uVar1);
  }
  memcpy((void *)((long)*(int *)(param_1 + 0x38) + *(long *)(param_1 + 0x30)),
         *(void **)(param_2 + 0x30),(long)*(int *)(param_2 + 0x38));
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_2 + 0x38);
  FUN_0010a4f0(param_2);
  return;
}



void FUN_0010a70b(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  int local_c;
  
  iVar3 = (int)param_2;
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    lVar2 = ((long)*(int *)(param_1 + 0x24) + param_1 + 0x60) - *(long *)(param_1 + 0x30);
  }
  else {
    lVar2 = ((long)*(int *)(param_1 + 0x24) + *(long *)(param_1 + 0x58)) - *(long *)(param_1 + 0x30)
    ;
  }
  if (lVar2 <= iVar3) {
    if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
      local_c = (int)*(undefined8 *)(param_1 + 0x30) - ((int)param_1 + 0x60);
      uVar1 = g_malloc((long)(local_c + iVar3),param_2,param_2 & 0xffffffff);
      *(undefined8 *)(param_1 + 0x58) = uVar1;
      memcpy(*(void **)(param_1 + 0x58),(void *)(param_1 + 0x60),(long)*(int *)(param_1 + 0x24));
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
    }
    else {
      local_c = (int)*(undefined8 *)(param_1 + 0x30) - (int)*(undefined8 *)(param_1 + 0x58);
      uVar1 = g_realloc(*(undefined8 *)(param_1 + 0x58),(long)(local_c + iVar3),
                        (long)(local_c + iVar3));
      *(undefined8 *)(param_1 + 0x58) = uVar1;
    }
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x58) + (long)local_c;
    *(int *)(param_1 + 0x24) = iVar3 + local_c;
  }
  return;
}



void FUN_0010a875(long param_1,int param_2)

{
  if (param_1 != 0) {
    if (param_2 < 0) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_2;
    }
    else {
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + (long)param_2;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - param_2;
    }
  }
  return;
}



undefined8 FUN_0010a8d5(long param_1,long param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    lVar2 = ((long)*(int *)(param_1 + 0x24) + param_1 + 0x60) - *(long *)(param_1 + 0x30);
  }
  else {
    lVar2 = ((long)*(int *)(param_1 + 0x24) + *(long *)(param_1 + 0x58)) - *(long *)(param_1 + 0x30)
    ;
  }
  if (lVar2 - *(int *)(param_1 + 0x38) < (long)param_4) {
    uVar1 = 0xffffffff;
  }
  else {
    memcpy((void *)(*(long *)(param_1 + 0x30) + (long)*(int *)(param_1 + 0x38)),
           (void *)(*(long *)(param_2 + 0x30) + (long)param_3),(long)param_4);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_4;
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 * FUN_0010a9b5(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *local_10;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"dtom...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," dat = %p",param_2);
  }
  local_10 = *(undefined8 **)(param_1 + 0xa8);
  do {
    if (local_10 == (undefined8 *)(param_1 + 0xa8)) {
      if ((DAT_003250e0 & 4) != 0) {
        g_log("Slirp",0x80,"dtom failed");
      }
      return (undefined8 *)0;
    }
    if ((*(uint *)(local_10 + 4) & 1) == 0) {
      if (local_10 + 0xc <= param_2) {
        puVar1 = (undefined8 *)((long)local_10 + (long)*(int *)((long)local_10 + 0x24) + 0x60);
        goto joined_r0x0010aa99;
      }
    }
    else {
      if ((undefined8 *)local_10[0xb] <= param_2) {
        puVar1 = (undefined8 *)((long)*(int *)((long)local_10 + 0x24) + local_10[0xb]);
joined_r0x0010aa99:
        if (param_2 < puVar1) {
          return local_10;
        }
      }
    }
    local_10 = (undefined8 *)*local_10;
  } while( true );
}



void FUN_0010aaf4(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  setsockopt(param_1,1,2,&local_14,4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void FUN_0010ab4c(long **param_1,long **param_2)

{
  *param_1 = *param_2;
  *(long ***)param_2 = param_1;
  *(long ***)(param_1 + 1) = param_2;
  *(long ***)(*param_1 + 1) = param_1;
  return;
}



void FUN_0010ab7f(long *param_1)

{
  *(long *)(*param_1 + 8) = param_1[1];
  *(long *)param_1[1] = *param_1;
  param_1[1] = 0;
  return;
}



undefined8 *
FUN_0010abad(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)g_malloc0_n(1,0x28);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined4 *)((long)puVar1 + 0x14) = param_5;
  *(undefined4 *)(puVar1 + 2) = param_4;
  puVar1[4] = *param_1;
  *(undefined8 **)param_1 = puVar1;
  return puVar1;
}



long FUN_0010ac26(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0010abad(param_1,0,0,(ulong)param_3,(ulong)param_4);
  uVar2 = g_strdup(param_2);
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  return lVar1;
}



undefined8 FUN_0010ac7e(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  socklen_t local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  local_38 = 2;
  local_44 = 0x10;
  param_1[1] = -1;
  local_40 = FUN_0011c25e(2,1,0);
  if ((((-1 < local_40) && (iVar1 = bind(local_40,(sockaddr *)&local_38,local_44), -1 < iVar1)) &&
      (iVar1 = listen(local_40,1), -1 < iVar1)) &&
     (iVar1 = getsockname(local_40,(sockaddr *)&local_38,&local_44), -1 < iVar1)) {
    iVar1 = FUN_0011c25e(2,1,0);
    param_1[1] = iVar1;
    if (-1 < param_1[1]) {
      do {
        local_3c = connect(param_1[1],(sockaddr *)&local_38,local_44);
        if (-1 < local_3c) break;
        piVar2 = __errno_location();
      } while (*piVar2 == 4);
      if (-1 < local_3c) {
        do {
          iVar1 = accept(local_40,(sockaddr *)&local_38,&local_44);
          *param_1 = iVar1;
          if (-1 < *param_1) break;
          piVar2 = __errno_location();
        } while (*piVar2 == 4);
        if (-1 < *param_1) {
          close(local_40);
          uVar3 = 0;
          goto LAB_0010ae56;
        }
      }
    }
  }
  piVar2 = __errno_location();
  pcVar4 = strerror(*piVar2);
  g_log("Slirp",8,"slirp_socketpair(): %s",pcVar4);
  if (-1 < local_40) {
    close(local_40);
  }
  if (-1 < param_1[1]) {
    close(param_1[1]);
  }
  uVar3 = 0xffffffff;
LAB_0010ae56:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0010ae71(void)

{
  setsid();
  return;
}



void FUN_0010ae85(code **param_1)

{
  dup2(*(int *)(param_1 + 2),0);
  dup2(*(int *)((long)param_1 + 0x14),1);
  dup2(*(int *)(param_1 + 3),2);
  (**param_1)(param_1[1]);
  return;
}



void FUN_0010aee9(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined8 param_11)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_8;
  local_24 = param_9;
  local_20 = param_10;
  local_38 = param_5;
  local_30 = param_6;
  g_spawn_async(param_1,param_2,param_3,(ulong)param_4,FUN_0010ae85,&local_38,param_7,param_11,
                param_11,param_7,param_6,param_5);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8 FUN_0010af8e(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_2c;
  long local_28;
  undefined8 local_20;
  int local_18;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"fork_exec...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," ex = %p");
  }
  iVar1 = FUN_0010ac7e(&local_18);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10b07c;
    local_20 = g_strsplit(param_2,&DAT_0011da94,0xffffffff);
    FUN_0010aee9(0,local_20,0,4,FUN_0010ae71,0,0,(ulong)local_14,(ulong)local_14,(ulong)local_14,
                 &local_28,uVar2);
    g_strfreev();
    if (local_28 == 0) {
      *(int *)(param_1 + 0x10) = local_18;
      close(local_14);
      FUN_0010aaf4();
      local_2c = 1;
      setsockopt(*(int *)(param_1 + 0x10),1,10,&local_2c,4);
      FUN_0011c142((ulong)*(uint *)(param_1 + 0x10));
      uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 6000);
      (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x1768) + 0x30))
                ((ulong)*(uint *)(param_1 + 0x10),uVar2,(ulong)*(uint *)(param_1 + 0x10),uVar2);
      uVar2 = 1;
    }
    else {
      g_log("Slirp",8,"fork_exec: %s",*(undefined8 *)(local_28 + 8));
      g_error_free();
      close(local_18);
      close(local_14);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



// WARNING: Type propagation algorithm not settling

void slirp_connection_info(long param_1)

{
  in_addr __in;
  uint uVar1;
  uint uVar2;
  uint16_t uVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  uint16_t local_da;
  in_addr local_d8;
  socklen_t local_d4;
  undefined8 *local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined local_b8 [2];
  uint16_t local_b6;
  in_addr local_b4;
  char *local_a8 [4];
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = g_string_new(0);
  local_a8[0] = "CLOSED";
  local_a8[1] = "LISTEN";
  local_a8[2] = "SYN_SENT";
  local_a8[3] = "SYN_RCVD";
  local_88 = "ESTABLISHED";
  local_80 = "CLOSE_WAIT";
  local_78 = "FIN_WAIT_1";
  local_70 = "CLOSING";
  local_68 = "LAST_ACK";
  local_60 = "FIN_WAIT_2";
  local_58 = "TIME_WAIT";
  g_string_append_printf
            (local_c0,
             "  Protocol[State]    FD  Source Address  Port   Dest. Address  Port RecvQ SendQ\n");
  local_d0 = *(undefined8 **)(param_1 + 0x1c0);
  while (local_d0 != (undefined8 *)(param_1 + 0x1c0)) {
    if ((*(uint *)((long)local_d0 + 0x14c) & 0x1000) == 0) {
      if (local_d0[0x2a] == 0) {
        local_c8 = "NONE";
      }
      else {
        local_c8 = local_a8[(int)*(short *)(local_d0[0x2a] + 0x10)];
      }
    }
    else {
      local_c8 = "HOST_FORWARD";
    }
    if ((*(uint *)((long)local_d0 + 0x14c) & 0x3000) == 0) {
      local_b4 = (in_addr)((in_addr *)((long)local_d0 + 0xcc))->s_addr;
      local_b6 = *(uint16_t *)((long)local_d0 + 0xca);
      local_d8 = (in_addr)((in_addr *)((long)local_d0 + 0x4c))->s_addr;
      local_da = *(uint16_t *)((long)local_d0 + 0x4a);
    }
    else {
      local_d4 = 0x10;
      getsockname(*(int *)(local_d0 + 2),(sockaddr *)local_b8,&local_d4);
      local_d8 = (in_addr)((in_addr *)((long)local_d0 + 0xcc))->s_addr;
      local_da = *(uint16_t *)((long)local_d0 + 0xca);
    }
    snprintf((char *)&local_48,0x14,"  TCP[%s]",local_c8);
    uVar3 = ntohs(local_b6);
    if (local_b4 == (in_addr)0x0) {
      pcVar4 = "*";
    }
    else {
      pcVar4 = inet_ntoa(local_b4);
    }
    g_string_append_printf
              (local_c0,"%-19s %3d %15s %5d ",&local_48,(ulong)*(uint *)(local_d0 + 2),pcVar4,
               (ulong)uVar3);
    uVar1 = *(uint *)(local_d0 + 0x2d);
    uVar3 = ntohs(local_da);
    pcVar4 = inet_ntoa(local_d8);
    g_string_append_printf(local_c0,"%15s %5d %5d %5d\n",pcVar4,(ulong)uVar3,(ulong)uVar1);
    local_d0 = (undefined8 *)*local_d0;
  }
  local_d0 = *(undefined8 **)(param_1 + 0x378);
  while (local_d0 != (undefined8 *)(param_1 + 0x378)) {
    if ((*(uint *)((long)local_d0 + 0x14c) & 0x1000) == 0) {
      snprintf((char *)&local_48,0x14,"  UDP[%d sec]",
               (ulong)((uint)(*(int *)(local_d0 + 0x2b) - DAT_003250e8) / 1000));
      local_b4 = (in_addr)((in_addr *)((long)local_d0 + 0xcc))->s_addr;
      local_b6 = *(uint16_t *)((long)local_d0 + 0xca);
      local_d8 = (in_addr)((in_addr *)((long)local_d0 + 0x4c))->s_addr;
      local_da = *(uint16_t *)((long)local_d0 + 0x4a);
    }
    else {
      local_48 = 0x4f485b5044552020;
      local_40 = 0x4157524f465f5453;
      local_38 = 0x5d4452;
      local_d4 = 0x10;
      getsockname(*(int *)(local_d0 + 2),(sockaddr *)local_b8,&local_d4);
      local_d8 = (in_addr)((in_addr *)((long)local_d0 + 0xcc))->s_addr;
      local_da = *(uint16_t *)((long)local_d0 + 0xca);
    }
    uVar3 = ntohs(local_b6);
    if (local_b4 == (in_addr)0x0) {
      pcVar4 = "*";
    }
    else {
      pcVar4 = inet_ntoa(local_b4);
    }
    g_string_append_printf
              (local_c0,"%-19s %3d %15s %5d ",&local_48,(ulong)*(uint *)(local_d0 + 2),pcVar4,
               (ulong)uVar3);
    uVar1 = *(uint *)(local_d0 + 0x2d);
    uVar3 = ntohs(local_da);
    pcVar4 = inet_ntoa(local_d8);
    g_string_append_printf(local_c0,"%15s %5d %5d %5d\n",pcVar4,(ulong)uVar3,(ulong)uVar1);
    local_d0 = (undefined8 *)*local_d0;
  }
  local_d0 = *(undefined8 **)(param_1 + 0x528);
  while (local_d0 != (undefined8 *)(param_1 + 0x528)) {
    snprintf((char *)&local_48,0x14,"  ICMP[%d sec]",
             (ulong)((uint)(*(int *)(local_d0 + 0x2b) - DAT_003250e8) / 1000));
    local_b4 = (in_addr)((in_addr *)((long)local_d0 + 0xcc))->s_addr;
    __in = (in_addr)((in_addr *)((long)local_d0 + 0x4c))->s_addr;
    if (local_b4 == (in_addr)0x0) {
      pcVar4 = "*";
    }
    else {
      pcVar4 = inet_ntoa(local_b4);
    }
    g_string_append_printf
              (local_c0,"%-19s %3d %15s  -    ",&local_48,(ulong)*(uint *)(local_d0 + 2),pcVar4);
    uVar1 = *(uint *)(local_d0 + 0x31);
    uVar2 = *(uint *)(local_d0 + 0x2d);
    pcVar4 = inet_ntoa(__in);
    g_string_append_printf(local_c0,"%15s  -    %5d %5d\n",pcVar4,(ulong)uVar2,(ulong)uVar1);
    local_d0 = (undefined8 *)*local_d0;
  }
  g_string_free(local_c0,0);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



ulong FUN_0010b890(long param_1,int param_2)

{
  uint16_t uVar1;
  int local_10;
  int local_c;
  
  local_10 = 0;
  local_c = 0;
  while (local_c < param_2) {
    uVar1 = htons(*(uint16_t *)(param_1 + (long)local_c * 2));
    local_10 = local_10 + (uint)uVar1;
    local_c = local_c + 1;
  }
  return (ulong)(uint)-local_10;
}



undefined8 FUN_0010b8e6(long param_1)

{
  uint32_t uVar1;
  
  uVar1 = htonl(0xffffffff);
  *(uint32_t *)(param_1 + 0x14) = uVar1;
  uVar1 = htonl(0xffffffff);
  *(uint32_t *)(param_1 + 0x18) = uVar1;
  uVar1 = htonl(0xffffffff);
  *(uint32_t *)(param_1 + 0x1c) = uVar1;
  uVar1 = htonl(0xffffffff);
  *(uint32_t *)(param_1 + 0x20) = uVar1;
  uVar1 = htonl(0xffffffff);
  *(uint32_t *)(param_1 + 0x24) = uVar1;
  *(undefined *)(param_1 + 0x2e) = 0xff;
  *(undefined *)(param_1 + 0x2b) = 2;
  return 0;
}



undefined8 FUN_0010b970(long param_1)

{
  uint32_t uVar1;
  
  uVar1 = htonl(1);
  *(uint32_t *)(param_1 + 0x14) = uVar1;
  return 0;
}



undefined8 FUN_0010b99e(long param_1)

{
  *(undefined *)(param_1 + 0x14) = 0;
  *(undefined *)(param_1 + 0x17) = 0;
  *(undefined *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  return 0;
}



// WARNING: Type propagation algorithm not settling

void FUN_0010b9d7(undefined8 param_1,long param_2)

{
  uint32_t __hostlong;
  long in_FS_OFFSET;
  uint local_11c;
  uint local_118;
  undefined *local_110;
  undefined local_e8 [6];
  undefined auStack226 [6];
  uint16_t uStack220;
  undefined uStack218;
  undefined uStack217;
  undefined uStack215;
  char cStack214;
  undefined uStack213;
  uint16_t uStack212;
  uint16_t uStack202;
  uint16_t uStack200;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_110 = (undefined *)0x0;
  local_118 = 0x10;
  memset(local_e8,0,0xce);
  memset(local_e8,0xff,6);
  memset(auStack226,0xff,6);
  uStack220 = htons(0x88f8);
  local_11c = 0;
  do {
    if (0x1d < local_11c) {
LAB_0010bb24:
      uStack218 = *(undefined *)(param_2 + 0xe);
      uStack217 = 1;
      uStack215 = *(undefined *)(param_2 + 0x11);
      cStack214 = *(char *)(param_2 + 0x12) + -0x80;
      uStack213 = *(undefined *)(param_2 + 0x13);
      if (local_110 == (undefined *)0x0) {
        uStack212 = 0;
        uStack202 = htons(2);
        uStack200 = htons(0x7fff);
      }
      else {
        uStack212 = htons((uint16_t)*(undefined4 *)(local_110 + 4));
        uStack202 = htons(0);
        uStack200 = htons(0);
        if (*(long *)(local_110 + 8) != 0) {
          (**(code **)(local_110 + 8))(&uStack218);
        }
        local_118 = *(int *)(local_110 + 4) + 0x10;
      }
      __hostlong = FUN_0010b890(&uStack218,(ulong)local_118,(ulong)local_118);
      __hostlong = htonl(__hostlong);
      (&uStack218)[(int)local_118] = __hostlong;
      FUN_0010f245(param_1,local_e8,(long)(int)(local_118 + 0x12),local_e8);
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return;
    }
    if ((uint)(byte)(&DAT_00322900)[(long)(int)local_11c * 0x10] ==
        (uint)*(byte *)(param_2 + 0x12) + 0x80) {
      local_110 = &DAT_00322900 + (long)(int)local_11c * 0x10;
      goto LAB_0010bb24;
    }
    local_11c = local_11c + 1;
  } while( true );
}



ulong FUN_0010bce7(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
}



// WARNING: Could not reconcile some variable overlaps

void FUN_0010bd16(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  long local_70;
  int local_64;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_1 + 0x15cc;
  uVar5 = 0x10bd6e;
  local_88 = param_2;
  local_80 = param_3;
  local_78 = param_4;
  local_70 = param_1;
  inet_ntop(10,&local_88,local_48,0x2e);
  if ((DAT_003250e0 & 1) != 0) {
    uVar5 = 0x10bd9b;
    g_log("Slirp",0x80,"ndp_table_add...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    uVar5 = 0x10bdcf;
    g_log("Slirp",0x80," ip = %s");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," hw addr = %02x:%02x:%02x:%02x:%02x:%02x",(ulong)*local_78,
          (ulong)local_78[1],(ulong)local_78[2],(ulong)local_78[3],(ulong)local_78[4],
          (ulong)local_78[5],uVar5);
  }
  if ((char)local_88 != -1) {
    local_58 = 0;
    local_50 = 0;
    cVar2 = FUN_0010bce7(&local_88,&local_58,&local_58);
    if (cVar2 == '\0') {
      local_64 = 0;
      while (local_64 < 0x10) {
        lVar4 = (long)local_64 * 0x18 + local_60 + 8;
        cVar2 = FUN_0010bce7(lVar4,&local_88,lVar4);
        if (cVar2 != '\0') {
          if ((DAT_003250e0 & 1) != 0) {
            g_log("Slirp",0x80," already in table: update the entry...");
          }
          memcpy((void *)((long)local_64 * 0x18 + local_60),local_78,6);
          goto LAB_0010c039;
        }
        local_64 = local_64 + 1;
      }
      if ((DAT_003250e0 & 1) != 0) {
        g_log("Slirp",0x80," create new entry...");
      }
      lVar4 = local_60 + (long)*(int *)(local_60 + 0x180) * 0x18;
      *(undefined8 *)(lVar4 + 8) = local_88;
      *(undefined8 *)(lVar4 + 0x10) = local_80;
      memcpy((void *)((long)*(int *)(local_60 + 0x180) * 0x18 + local_60),local_78,6);
      iVar1 = *(int *)(local_60 + 0x180) + 1;
      uVar3 = (uint)(iVar1 >> 0x1f) >> 0x1c;
      *(int *)(local_60 + 0x180) = (iVar1 + uVar3 & 0xf) - uVar3;
      goto LAB_0010c039;
    }
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," abort: do not register multicast or unspecified address...");
  }
LAB_0010c039:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_0010c04f(long param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined8 uVar3;
  undefined8 local_88;
  undefined8 local_80;
  byte *local_78;
  long local_70;
  int local_64;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_48 [56];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_1 + 0x15cc;
  local_88 = param_2;
  local_80 = param_3;
  local_78 = param_4;
  local_70 = param_1;
  inet_ntop(10,&local_88,local_48,0x2e);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"ndp_table_search...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," ip = %s");
  }
  local_58 = 0;
  local_50 = 0;
  uVar3 = 0x10c12b;
  cVar2 = FUN_0010bce7(&local_88);
  if (cVar2 == '\x01') {
                    // WARNING: Subroutine does not return
    __assert_fail("!in6_zero(&ip_addr)","../src/ndp_table.c",0x3b,"ndp_table_search");
  }
  if ((char)local_88 == -1) {
    *local_78 = 0x33;
    local_78[1] = 0x33;
    local_78[2] = local_80._4_1_;
    local_78[3] = local_80._5_1_;
    local_78[4] = local_80._6_1_;
    local_78[5] = local_80._7_1_;
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," multicast addr = %02x:%02x:%02x:%02x:%02x:%02x",(ulong)*local_78,
            (ulong)local_78[1],(ulong)local_78[2],(ulong)local_78[3],(ulong)local_78[4],
            (ulong)local_78[5],uVar3);
    }
    uVar3 = 1;
  }
  else {
    local_64 = 0;
    while (local_64 < 0x10) {
      lVar1 = (long)local_64 * 0x18 + local_60 + 8;
      cVar2 = FUN_0010bce7(lVar1,&local_88,lVar1);
      if (cVar2 != '\0') {
        uVar3 = 0x10c2b9;
        memcpy(local_78,(void *)((long)local_64 * 0x18 + local_60),6);
        if ((DAT_003250e0 & 1) != 0) {
          g_log("Slirp",0x80," found hw addr = %02x:%02x:%02x:%02x:%02x:%02x",(ulong)*local_78,
                (ulong)local_78[1],(ulong)local_78[2],(ulong)local_78[3],(ulong)local_78[4],
                (ulong)local_78[5],uVar3);
        }
        uVar3 = 1;
        goto LAB_0010c395;
      }
      local_64 = local_64 + 1;
    }
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," ip not found in table...");
    }
    uVar3 = 0;
  }
LAB_0010c395:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



void FUN_0010c3ab(long param_1)

{
  free(*(void **)(param_1 + 0x18));
  return;
}



undefined8 FUN_0010c3ca(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_24;
  
  local_24 = param_2;
  if (*param_1 < param_2) {
    local_24 = *param_1;
  }
  *param_1 = *param_1 - local_24;
  *(long *)(param_1 + 4) = *(long *)(param_1 + 4) + (long)(int)local_24;
  if ((ulong)param_1[1] + *(long *)(param_1 + 6) <= *(ulong *)(param_1 + 4)) {
    *(ulong *)(param_1 + 4) = *(long *)(param_1 + 4) - (ulong)param_1[1];
  }
  if ((*param_1 < param_1[1] >> 1) && (param_1[1] >> 1 <= *param_1 + local_24)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_0010c48d(undefined4 *param_1,int param_2)

{
  void *pvVar1;
  
  if (*(long *)(param_1 + 6) == 0) {
    pvVar1 = malloc((long)param_2);
    *(void **)(param_1 + 6) = pvVar1;
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 6);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
    *param_1 = 0;
    if (*(long *)(param_1 + 2) == 0) {
      param_1[1] = 0;
    }
    else {
      param_1[1] = param_2;
    }
  }
  else {
    if (param_1[1] != param_2) {
      pvVar1 = realloc(*(void **)(param_1 + 6),(long)param_2);
      *(void **)(param_1 + 6) = pvVar1;
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 6);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 4);
      *param_1 = 0;
      if (*(long *)(param_1 + 2) == 0) {
        param_1[1] = 0;
      }
      else {
        param_1[1] = param_2;
      }
    }
  }
  return;
}



void FUN_0010c59c(long param_1,long param_2)

{
  int local_c;
  
  local_c = 0;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"sbappend...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_2);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m->m_len = %d",(ulong)*(uint *)(param_2 + 0x38));
  }
  if (*(int *)(param_2 + 0x38) < 1) {
    FUN_0010a4f0(param_2);
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
      if (*(int *)(param_1 + 0x168) == 0) {
        local_c = FUN_0010f014(param_1,*(undefined8 *)(param_2 + 0x30),
                               (long)*(int *)(param_2 + 0x38),0);
      }
      if (local_c < 1) {
        FUN_0010c791(param_1 + 0x168,param_2,param_1 + 0x168);
      }
      else {
        if (local_c != *(int *)(param_2 + 0x38)) {
          *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) - local_c;
          *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + (long)local_c;
          FUN_0010c791(param_1 + 0x168,param_2,param_1 + 0x168);
        }
      }
      FUN_0010a4f0(param_2);
    }
    else {
      FUN_0010c791(param_1 + 0x168,param_2,param_1 + 0x168);
      FUN_0010a4f0(param_2);
      FUN_00110307(param_1);
    }
  }
  return;
}



void FUN_0010c791(int *param_1,long param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  
  iVar1 = *(int *)(param_2 + 0x38);
  if (*(ulong *)(param_1 + 2) < *(ulong *)(param_1 + 4)) {
    local_14 = (int)*(undefined8 *)(param_1 + 4) - (int)*(undefined8 *)(param_1 + 2);
    if (iVar1 < local_14) {
      local_14 = iVar1;
    }
    memcpy(*(void **)(param_1 + 2),*(void **)(param_2 + 0x30),(long)local_14);
  }
  else {
    local_14 = (param_1[1] + (int)*(undefined8 *)(param_1 + 6)) - (int)*(undefined8 *)(param_1 + 2);
    if (iVar1 < local_14) {
      local_14 = iVar1;
    }
    memcpy(*(void **)(param_1 + 2),*(void **)(param_2 + 0x30),(long)local_14);
    iVar1 = iVar1 - local_14;
    if (iVar1 != 0) {
      local_10 = (int)*(undefined8 *)(param_1 + 4) - (int)*(undefined8 *)(param_1 + 6);
      if (iVar1 < local_10) {
        local_10 = iVar1;
      }
      memcpy(*(void **)(param_1 + 6),(void *)(*(long *)(param_2 + 0x30) + (long)local_14),
             (long)local_10);
      local_14 = local_14 + local_10;
    }
  }
  *param_1 = *param_1 + local_14;
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + (long)local_14;
  if ((ulong)(uint)param_1[1] + *(long *)(param_1 + 6) <= *(ulong *)(param_1 + 2)) {
    *(ulong *)(param_1 + 2) = *(long *)(param_1 + 2) - (ulong)(uint)param_1[1];
  }
  return;
}



void FUN_0010c938(uint *param_1,int param_2,uint param_3,void *param_4)

{
  uint local_28;
  uint local_24;
  void *local_10;
  
  local_10 = (void *)((long)param_2 + *(long *)(param_1 + 4));
  if ((void *)((ulong)param_1[1] + *(long *)(param_1 + 6)) <= local_10) {
    local_10 = (void *)((long)local_10 - (ulong)param_1[1]);
  }
  if (local_10 < *(void **)(param_1 + 2)) {
    local_28 = param_3;
    if (*param_1 < param_3) {
      local_28 = *param_1;
    }
    memcpy(param_4,local_10,(long)(int)local_28);
  }
  else {
    local_24 = (param_1[1] + (int)*(undefined8 *)(param_1 + 6)) - (int)local_10;
    if ((int)param_3 < (int)local_24) {
      local_24 = param_3;
    }
    memcpy(param_4,local_10,(long)(int)local_24);
    if (param_3 - local_24 != 0) {
      memcpy((void *)((long)param_4 + (long)(int)local_24),*(void **)(param_1 + 6),
             (long)(int)(param_3 - local_24));
    }
  }
  return;
}



ulong FUN_0010ca4b(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
}



void FUN_0010ca7a(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined4 uStack28;
  
  *param_3 = 0x52;
  param_3[1] = 0x56;
  uStack28 = (undefined4)((ulong)param_2 >> 0x20);
  *(undefined4 *)(param_3 + 2) = uStack28;
  return;
}



undefined8 FUN_0010caba(void *param_1,void *param_2,uint param_3,long *param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((uint)(DAT_003250e8 - *param_5) < 1000) {
    memcpy(param_1,param_2,(ulong)param_3);
    uVar7 = 0;
  }
  else {
    lVar2 = *param_4;
    lVar3 = param_4[1];
    lVar4 = param_4[6];
    lVar5 = param_4[0xb];
    iVar6 = FUN_0011d0d0("/etc/resolv.conf",param_4);
    if (iVar6 == 0) {
      if ((((*param_4 == lVar2) && (param_4[1] == lVar3)) && (param_4[6] == lVar4)) &&
         (param_4[0xb] == lVar5)) {
        memcpy(param_1,param_2,(ulong)param_3);
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 0xffffffff;
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar7;
}



undefined8
FUN_0010cc9e(undefined4 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint *param_5,
            undefined4 *param_6)

{
  undefined4 __af;
  uint **__buf;
  FILE *__stream;
  int iVar1;
  ulong uVar2;
  undefined8 __dest;
  char *pcVar3;
  ulong __n;
  long in_FS_OFFSET;
  uint *apuStack960 [4];
  undefined8 local_3a0;
  undefined8 local_398;
  uint local_390;
  undefined4 local_38c;
  int local_380;
  uint local_37c;
  char *local_378;
  uint **local_370;
  FILE *local_368;
  char *local_360;
  undefined local_358 [48];
  undefined local_328 [272];
  undefined local_218 [520];
  long local_10;
  
  local_38c = param_1;
  local_398 = param_2;
  local_3a0 = param_3;
  local_390 = param_4;
  apuStack960[3] = param_5;
  apuStack960[2] = param_6;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_380 = 0;
  uVar2 = ((ulong)param_4 + 0x1e) / 0x10;
  local_370 = apuStack960 + uVar2 * 0x1ffffffffffffffe + 2;
  apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cd3d;
  local_368 = fopen64("/etc/resolv.conf",&DAT_0011dddf,
                      *(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
  if (local_368 == (FILE *)0x0) {
    __dest = 0xffffffff;
  }
  else {
    if ((DAT_003250e0 & 2) != 0) {
      apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cd89;
      g_log("Slirp",0x80,"IP address of your DNS(s):");
    }
    while( true ) {
      __stream = local_368;
      apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cf8d;
      pcVar3 = fgets(local_218,0x200,__stream,
                     *(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
      if (pcVar3 == (char *)0x0) break;
      apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cdb0;
      iVar1 = __isoc99_sscanf(local_218,"nameserver%*[ \t]%256s",local_328);
      if (iVar1 == 1) {
        apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cdcd;
        pcVar3 = strchr(local_328,0x25,*(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
        local_360 = pcVar3;
        if (pcVar3 == (char *)0x0) {
          local_37c = 0;
        }
        else {
          apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cdf1;
          local_37c = if_nametoindex(pcVar3 + 1,
                                     *(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
          *local_360 = '\0';
        }
        __buf = local_370;
        __af = local_38c;
        apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10ce2b;
        iVar1 = inet_pton(__af,local_328,__buf,
                          *(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
        __buf = local_370;
        __dest = local_398;
        if (iVar1 != 0) {
          if (local_380 == 0) {
            __n = (ulong)local_390;
            apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10ce5c;
            memcpy(__dest,__buf,__n,*(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
            __buf = local_370;
            __dest = local_3a0;
            __n = (ulong)local_390;
            apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10ce7b;
            memcpy(__dest,__buf,__n,*(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
            if (apuStack960[3] != (uint *)0x0) {
              *apuStack960[3] = local_37c;
            }
            *apuStack960[2] = DAT_003250e8;
          }
          __buf = local_370;
          __af = local_38c;
          local_380 = local_380 + 1;
          if (3 < local_380) {
            if ((DAT_003250e0 & 2) != 0) {
              apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cee7;
              g_log("Slirp",0x80,"  (more)");
            }
            break;
          }
          if ((DAT_003250e0 & 2) != 0) {
            apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cf1c;
            local_378 = inet_ntop(__af,__buf,local_358,0x2e,
                                  *(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
            if (local_378 == (char *)0x0) {
              local_378 = "  (string conversion error)";
            }
            pcVar3 = local_378;
            if ((DAT_003250e0 & 2) != 0) {
              apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cf72;
              g_log("Slirp",0x80,&DAT_0011de3d,pcVar3);
            }
          }
        }
      }
    }
    __stream = local_368;
    apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cfa8;
    fclose(__stream,*(undefined *)(apuStack960 + uVar2 * 0x1ffffffffffffffe));
    if (local_380 == 0) {
      __dest = 0xffffffff;
    }
    else {
      __dest = 0;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __dest;
  }
                    // WARNING: Subroutine does not return
  apuStack960[uVar2 * 0x1ffffffffffffffe] = 0x10cfd1;
  __stack_chk_fail();
}



ulong FUN_0010cfd3(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((DAT_00324f60 != 0) &&
     (uVar1 = FUN_0010caba(param_1,&DAT_00324f60,4,&DAT_00324fa0,&DAT_00324f80), (int)uVar1 < 1)) {
    return (ulong)uVar1;
  }
  uVar2 = FUN_0010cc9e(2,param_1,&DAT_00324f60,4,0,&DAT_00324f80);
  return uVar2;
}



ulong FUN_0010d049(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = 0;
  local_20 = 0;
  cVar1 = FUN_0010ca4b(&DAT_00324f70,&local_28);
  if (cVar1 != '\x01') {
    uVar2 = FUN_0010caba(param_1,&DAT_00324f70,0x10,&DAT_00325040,&DAT_00324f84);
    if ((int)uVar2 < 1) {
      uVar3 = (ulong)uVar2;
      goto LAB_0010d0f1;
    }
  }
  uVar3 = FUN_0010cc9e(10,param_1,&DAT_00324f70,0x10,param_2,&DAT_00324f84);
LAB_0010d0f1:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



void FUN_0010d107(void)

{
  uint32_t uVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_48;
  undefined4 local_40;
  char *local_38;
  undefined4 local_30;
  undefined *local_28;
  undefined4 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (DAT_003250d0 == 0) {
    DAT_003250d0 = 1;
    DAT_003250e4 = htonl(0x7f000001);
    uVar1 = htonl(0xff000000);
    DAT_003250d8 = (ulong)uVar1;
    lVar2 = g_getenv("SLIRP_DEBUG");
    if (lVar2 != 0) {
      local_58 = &DAT_0011de4e;
      local_50 = 1;
      local_48 = &DAT_0011de53;
      local_40 = 2;
      local_38 = "error";
      local_30 = 4;
      local_28 = &DAT_0011de5e;
      local_20 = 8;
      DAT_003250e0 = g_parse_debug_string(lVar2,&local_58,4,&local_58);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



long slirp_new(uint *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  if (param_1 == (uint *)0x0) {
    g_return_if_fail_warning("Slirp","slirp_new","cfg != NULL");
    lVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      g_return_if_fail_warning("Slirp","slirp_new","cfg->version >= SLIRP_CONFIG_VERSION_MIN");
      lVar1 = 0;
    }
    else {
      if (*param_1 < 2) {
        if ((*(ulong *)(param_1 + 0x22) < 0x44) && (*(long *)(param_1 + 0x22) != 0)) {
          g_return_if_fail_warning
                    ("Slirp","slirp_new","cfg->if_mtu >= IF_MTU_MIN || cfg->if_mtu == 0");
          lVar1 = 0;
        }
        else {
          if (*(ulong *)(param_1 + 0x22) < 0xfff2) {
            if ((*(ulong *)(param_1 + 0x24) < 0x44) && (*(long *)(param_1 + 0x24) != 0)) {
              g_return_if_fail_warning
                        ("Slirp","slirp_new","cfg->if_mru >= IF_MRU_MIN || cfg->if_mru == 0");
              lVar1 = 0;
            }
            else {
              if (*(ulong *)(param_1 + 0x24) < 0xfff2) {
                lVar1 = g_malloc0(0x1778);
                FUN_0010d107();
                *(undefined8 *)(lVar1 + 6000) = param_3;
                *(undefined8 *)(lVar1 + 0x1768) = param_2;
                uVar2 = g_rand_new();
                *(undefined8 *)(lVar1 + 0x1750) = uVar2;
                *(uint *)(lVar1 + 0x7c) = param_1[1];
                *(undefined *)(lVar1 + 9) = *(undefined *)(param_1 + 2);
                *(undefined *)(lVar1 + 10) = *(undefined *)(param_1 + 6);
                FUN_00105e6b(lVar1);
                FUN_0010929d(lVar1);
                FUN_00107e9d(lVar1);
                FUN_0010a28a(lVar1);
                *(uint *)(lVar1 + 0xc) = param_1[3];
                *(uint *)(lVar1 + 0x10) = param_1[4];
                *(uint *)(lVar1 + 0x14) = param_1[5];
                uVar2 = *(undefined8 *)(param_1 + 9);
                *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 7);
                *(undefined8 *)(lVar1 + 0x20) = uVar2;
                *(undefined *)(lVar1 + 0x28) = *(undefined *)(param_1 + 0xb);
                uVar2 = *(undefined8 *)(param_1 + 0xe);
                *(undefined8 *)(lVar1 + 0x2c) = *(undefined8 *)(param_1 + 0xc);
                *(undefined8 *)(lVar1 + 0x34) = uVar2;
                if (*(long *)(param_1 + 0x10) != 0) {
                  FUN_0011c2cc(lVar1 + 0x58,0x21,*(undefined8 *)(param_1 + 0x10),lVar1 + 0x58);
                }
                uVar2 = g_strdup(*(undefined8 *)(param_1 + 0x14));
                *(undefined8 *)(lVar1 + 0x6d8) = uVar2;
                uVar2 = g_strdup(*(undefined8 *)(param_1 + 0x16));
                *(undefined8 *)(lVar1 + 0x1a0) = uVar2;
                uVar2 = g_strdup(*(undefined8 *)(param_1 + 0x20));
                *(undefined8 *)(lVar1 + 0x1b8) = uVar2;
                *(uint *)(lVar1 + 0x3c) = param_1[0x18];
                *(uint *)(lVar1 + 0x40) = param_1[0x19];
                uVar2 = *(undefined8 *)(param_1 + 0x1c);
                *(undefined8 *)(lVar1 + 0x44) = *(undefined8 *)(param_1 + 0x1a);
                *(undefined8 *)(lVar1 + 0x4c) = uVar2;
                uVar2 = g_strdup(*(undefined8 *)(param_1 + 0x12));
                *(undefined8 *)(lVar1 + 0x1400) = uVar2;
                if (*(long *)(param_1 + 0x1e) != 0) {
                  FUN_001058e0(lVar1,*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1e)
                              );
                }
                if (*(long *)(param_1 + 0x22) == 0) {
                  uVar3 = 0x5dc;
                }
                else {
                  uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x22);
                }
                *(undefined4 *)(lVar1 + 0x88) = uVar3;
                if (*(long *)(param_1 + 0x24) == 0) {
                  uVar3 = 0x5dc;
                }
                else {
                  uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x24);
                }
                *(undefined4 *)(lVar1 + 0x8c) = uVar3;
                *(undefined *)(lVar1 + 0x90) = *(undefined *)(param_1 + 0x26);
                *(undefined *)(lVar1 + 0x1760) = *(undefined *)((long)param_1 + 0x99);
              }
              else {
                g_return_if_fail_warning("Slirp","slirp_new","cfg->if_mru <= IF_MRU_MAX");
                lVar1 = 0;
              }
            }
          }
          else {
            g_return_if_fail_warning("Slirp","slirp_new","cfg->if_mtu <= IF_MTU_MAX");
            lVar1 = 0;
          }
        }
      }
      else {
        g_return_if_fail_warning("Slirp","slirp_new","cfg->version <= SLIRP_CONFIG_VERSION_MAX");
        lVar1 = 0;
      }
    }
  }
  return lVar1;
}



void slirp_init(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined param_6,undefined8 param_7,undefined8 param_8,
               undefined param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16,
               undefined4 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
               undefined8 param_21,undefined8 param_22,undefined8 param_23)

{
  long in_FS_OFFSET;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_10;
  
  local_8c = param_9;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  memset(&local_b8,0,0xa0);
  local_b8 = 1;
  local_9c = param_7;
  local_94 = param_8;
  local_88 = param_10;
  local_80 = param_11;
  local_78 = param_12;
  local_70 = param_13;
  local_68 = param_14;
  local_60 = param_15;
  local_58 = param_16;
  local_54 = param_17;
  local_50 = param_18;
  local_48 = param_19;
  local_40 = param_20;
  local_38 = param_21;
  local_b4 = param_1;
  local_b0 = param_2;
  local_ac = param_3;
  local_a8 = param_4;
  local_a4 = param_5;
  local_a0 = param_6;
  slirp_new(&local_b8,param_22,param_23,param_22);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void slirp_cleanup(long param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = *(long *)(param_1 + 0x80);
  while (local_18 != 0) {
    lVar1 = *(long *)(local_18 + 0x20);
    g_free(*(undefined8 *)(local_18 + 0x18));
    g_free(local_18);
    local_18 = lVar1;
  }
  FUN_001092fc(param_1);
  FUN_00107eb8(param_1);
  FUN_0010a2ed(param_1);
  g_rand_free(*(undefined8 *)(param_1 + 0x1750));
  g_free(*(undefined8 *)(param_1 + 0x1b0));
  g_free(*(undefined8 *)(param_1 + 0x6d8));
  g_free(*(undefined8 *)(param_1 + 0x1a0));
  g_free(*(undefined8 *)(param_1 + 0x1b8));
  g_free(param_1);
  return;
}



void FUN_0010d8ef(int *param_1,uint *param_2)

{
  uint uVar1;
  uint local_c;
  
  if (2 < *param_2) {
    uVar1 = *param_2;
    if (1000 < uVar1) {
      uVar1 = 1000;
    }
    if (*param_1 == 0) {
      local_c = uVar1;
      if ((*(char *)(param_1 + 2) != '\0') && (local_c = 499, uVar1 < 500)) {
        local_c = uVar1;
      }
      *param_2 = local_c;
    }
    else {
      *param_2 = 2;
    }
  }
  return;
}



void slirp_pollfds_fill(uint *param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  int **ppiVar1;
  undefined uVar2;
  int iVar3;
  uint local_1c;
  int **local_18;
  
  if ((*(uint **)(param_1 + 0x70) == param_1 + 0x70) &&
     (param_1 + 0x3e == *(uint **)(param_1 + 0x3e))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *(undefined *)(param_1 + 2) = uVar2;
  ppiVar1 = *(int ***)(param_1 + 0x70);
  while (local_18 = ppiVar1, local_18 != (int **)(param_1 + 0x70)) {
    local_1c = 0;
    ppiVar1 = (int **)*local_18;
    *(int *)(local_18 + 4) = -1;
    if ((*param_1 == 0) && ((*(ushort *)(local_18[0x2a] + 9) & 2) != 0)) {
      *param_1 = DAT_003250e8;
    }
    if (((*(uint *)((long)local_18 + 0x14c) & 1) == 0) && (*(int *)(local_18 + 2) != -1)) {
      if ((*(uint *)((long)local_18 + 0x14c) & 0x100) == 0) {
        if ((*(uint *)((long)local_18 + 0x14c) & 2) == 0) {
          if (((*(uint *)((long)local_18 + 0x14c) & 0x14) == 4) && (*(int *)(local_18 + 0x2d) != 0))
          {
            local_1c = 10;
          }
          if (((*(uint *)((long)local_18 + 0x14c) & 0xc) == 4) &&
             (*(uint *)(local_18 + 0x31) < *(uint *)((long)local_18 + 0x18c) >> 1)) {
            local_1c = local_1c | 0x1d;
          }
          if (local_1c != 0) {
            iVar3 = (*param_3)((ulong)*(uint *)(local_18 + 2),(ulong)local_1c,param_4,
                               (ulong)*(uint *)(local_18 + 2));
            *(int *)(local_18 + 4) = iVar3;
          }
        }
        else {
          iVar3 = (*param_3)((ulong)*(uint *)(local_18 + 2),10,param_4);
          *(int *)(local_18 + 4) = iVar3;
        }
      }
      else {
        iVar3 = (*param_3)((ulong)*(uint *)(local_18 + 2),0x19,param_4);
        *(int *)(local_18 + 4) = iVar3;
      }
    }
  }
  ppiVar1 = *(int ***)(param_1 + 0xde);
LAB_0010dbfe:
  local_18 = ppiVar1;
  if (local_18 != (int **)(param_1 + 0xde)) {
    ppiVar1 = (int **)*local_18;
    *(int *)(local_18 + 4) = -1;
    if (*(int *)(local_18 + 0x2b) != 0) {
      if (*(uint *)(local_18 + 0x2b) <= DAT_003250e8) {
        FUN_0011b3c9();
        goto LAB_0010dbfe;
      }
      *(undefined *)(param_1 + 2) = 1;
    }
    if (((*(uint *)((long)local_18 + 0x14c) & 4) != 0) && (*(int *)((long)local_18 + 0x15c) < 5)) {
      iVar3 = (*param_3)((ulong)*(uint *)(local_18 + 2),0x19,param_4,(ulong)*(uint *)(local_18 + 2))
      ;
      *(int *)(local_18 + 4) = iVar3;
    }
    goto LAB_0010dbfe;
  }
  ppiVar1 = *(int ***)(param_1 + 0x14a);
LAB_0010dcb1:
  do {
    local_18 = ppiVar1;
    if (local_18 == (int **)(param_1 + 0x14a)) {
      FUN_0010d8ef(param_1,param_2,param_2);
      return;
    }
    ppiVar1 = (int **)*local_18;
    *(int *)(local_18 + 4) = -1;
    if (*(int *)(local_18 + 0x2b) != 0) {
      if (*(uint *)(local_18 + 0x2b) <= DAT_003250e8) {
        FUN_001084c1();
        goto LAB_0010dcb1;
      }
      *(undefined *)(param_1 + 2) = 1;
    }
    if ((*(uint *)((long)local_18 + 0x14c) & 4) != 0) {
      iVar3 = (*param_3)((ulong)*(uint *)(local_18 + 2),0x19,param_4,(ulong)*(uint *)(local_18 + 2))
      ;
      *(int *)(local_18 + 4) = iVar3;
    }
  } while( true );
}



void slirp_pollfds_poll(int *param_1,int param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  ssize_t sVar2;
  int *piVar3;
  long in_FS_OFFSET;
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  undefined8 *local_20;
  undefined8 *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = (**(code **)(*(long *)(param_1 + 0x5da) + 0x10))();
  DAT_003250e8 = (int)(lVar1 / 1000000);
  if ((*param_1 != 0) && (1 < (uint)(DAT_003250e8 - *param_1))) {
    FUN_00119297();
    *param_1 = 0;
  }
  if ((*(char *)(param_1 + 2) != '\0') && (0x1f2 < (uint)(DAT_003250e8 - param_1[1]))) {
    FUN_00109d58(param_1);
    FUN_0011933b();
    param_1[1] = DAT_003250e8;
  }
  if (param_2 == 0) {
    local_20 = *(undefined8 **)(param_1 + 0x70);
    while (local_20 != (undefined8 *)(param_1 + 0x70)) {
      local_18 = (undefined8 *)*local_20;
      local_2c = 0;
      if (*(int *)(local_20 + 4) != -1) {
        local_2c = (*param_3)((ulong)*(uint *)(local_20 + 4),param_4,(ulong)*(uint *)(local_20 + 4),
                              param_4);
      }
      if (((*(uint *)((long)local_20 + 0x14c) & 1) == 0) && (*(int *)(local_20 + 2) != -1)) {
        if ((local_2c & 4) == 0) {
          if ((local_2c & 0x19) != 0) {
            if ((*(uint *)((long)local_20 + 0x14c) & 0x100) != 0) {
              FUN_00117600();
              goto LAB_0010e019;
            }
            local_30 = FUN_0010fc35();
            if (0 < local_30) {
              FUN_00115563();
            }
            goto joined_r0x0010ded1;
          }
        }
        else {
          local_30 = FUN_00110238();
joined_r0x0010ded1:
          if (local_30 < 0) goto LAB_0010e019;
        }
        if (((*(uint *)((long)local_20 + 0x14c) & 1) == 0) && ((local_2c & 10) != 0)) {
          if ((*(uint *)((long)local_20 + 0x14c) & 2) == 0) {
            local_30 = FUN_001106a3();
            if (0 < local_30) {
              FUN_00115563();
            }
          }
          else {
            *(uint *)((long)local_20 + 0x14c) = *(uint *)((long)local_20 + 0x14c) & 0xfffffffd;
            sVar2 = send(*(int *)(local_20 + 2),&local_30,0,0);
            local_30 = (int)sVar2;
            if (local_30 < 0) {
              piVar3 = __errno_location();
              if ((((*piVar3 == 0xb) || (piVar3 = __errno_location(), *piVar3 == 0xb)) ||
                  (piVar3 = __errno_location(), *piVar3 == 0x73)) ||
                 (piVar3 = __errno_location(), *piVar3 == 0x6b)) goto LAB_0010e019;
              *(uint *)((long)local_20 + 0x14c) = *(uint *)((long)local_20 + 0x14c) & 0xf000;
              *(uint *)((long)local_20 + 0x14c) = *(uint *)((long)local_20 + 0x14c) | 1;
            }
            FUN_00112cfb(0,0x14,local_20,(ulong)*(ushort *)(local_20 + 9));
          }
        }
      }
LAB_0010e019:
      local_20 = local_18;
    }
    local_20 = *(undefined8 **)(param_1 + 0xde);
    while (local_20 != (undefined8 *)(param_1 + 0xde)) {
      local_18 = (undefined8 *)*local_20;
      local_28 = 0;
      if (*(int *)(local_20 + 4) != -1) {
        local_28 = (*param_3)((ulong)*(uint *)(local_20 + 4),param_4,(ulong)*(uint *)(local_20 + 4),
                              param_4);
      }
      if ((*(int *)(local_20 + 2) != -1) && ((local_28 & 0x19) != 0)) {
        FUN_00110a5a();
      }
      local_20 = local_18;
    }
    local_20 = *(undefined8 **)(param_1 + 0x14a);
    while (local_20 != (undefined8 *)(param_1 + 0x14a)) {
      local_18 = (undefined8 *)*local_20;
      local_24 = 0;
      if (*(int *)(local_20 + 4) != -1) {
        local_24 = (*param_3)((ulong)*(uint *)(local_20 + 4),param_4,(ulong)*(uint *)(local_20 + 4),
                              param_4);
      }
      if ((*(int *)(local_20 + 2) != -1) && ((local_24 & 0x19) != 0)) {
        FUN_00109096();
      }
      local_20 = local_18;
    }
  }
  FUN_00106168(param_1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0010e15c(long param_1,long param_2)

{
  uint16_t uVar1;
  long in_FS_OFFSET;
  long local_78;
  undefined local_58 [6];
  undefined2 uStack82;
  undefined4 uStack80;
  uint16_t uStack76;
  uint16_t uStack74;
  uint16_t uStack72;
  undefined uStack70;
  undefined uStack69;
  uint16_t uStack68;
  undefined auStack66 [6];
  undefined4 uStack60;
  undefined auStack56 [6];
  undefined4 uStack50;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(param_1 + 9) == '\x01') {
    uVar1 = ntohs(*(uint16_t *)(param_2 + 0x14));
    if (uVar1 == 1) {
      if (*(int *)(param_2 + 0x26) == *(int *)(param_2 + 0x1c)) {
        FUN_001032ba(param_1,(ulong)*(uint *)(param_2 + 0x1c),param_2 + 0x16,
                     (ulong)*(uint *)(param_2 + 0x1c));
      }
      else {
        if ((*(uint *)(param_2 + 0x26) & *(uint *)(param_1 + 0x10)) == *(uint *)(param_1 + 0xc)) {
          if ((*(int *)(param_2 + 0x26) == *(int *)(param_1 + 0x40)) ||
             (*(int *)(param_2 + 0x26) == *(int *)(param_1 + 0x14))) {
LAB_0010e2b9:
            memset(local_58,0,0x40);
            FUN_001032ba(param_1,(ulong)*(uint *)(param_2 + 0x1c),param_2 + 0x16,
                         (ulong)*(uint *)(param_2 + 0x1c));
            memcpy(local_58,(void *)(param_2 + 6),6);
            uStack82 = 0x5552;
            uStack80 = *(undefined4 *)(param_2 + 0x26);
            uStack76 = htons(0x806);
            uStack74 = htons(1);
            uStack72 = htons(0x800);
            uStack70 = 6;
            uStack69 = 4;
            uStack68 = htons(2);
            memcpy(auStack66,&uStack82,6);
            uStack60 = *(undefined4 *)(param_2 + 0x26);
            memcpy(auStack56,(void *)(param_2 + 0x16),6);
            uStack50 = *(undefined4 *)(param_2 + 0x1c);
            FUN_0010f245(param_1,local_58,0x40,local_58);
          }
          else {
            local_78 = *(long *)(param_1 + 0x80);
            while (local_78 != 0) {
              if (*(int *)(local_78 + 0x10) == *(int *)(param_2 + 0x26)) goto LAB_0010e2b9;
              local_78 = *(long *)(local_78 + 0x20);
            }
          }
        }
      }
    }
    else {
      if (uVar1 == 2) {
        FUN_001032ba(param_1,(ulong)*(uint *)(param_2 + 0x1c),param_2 + 0x16,
                     (ulong)*(uint *)(param_2 + 0x1c));
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void slirp_input(undefined8 param_1,void *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if (0xd < (int)param_3) {
    uVar1 = (uint)*(byte *)((long)param_2 + 0xd) + (uint)*(byte *)((long)param_2 + 0xc) * 0x100;
    if (uVar1 == 0x806) {
      FUN_0010e15c(param_1,param_2,(ulong)param_3,param_2);
    }
    else {
      if (uVar1 < 0x807) {
        if (uVar1 != 0x800) {
          return;
        }
      }
      else {
        if (uVar1 != 0x86dd) {
          if (uVar1 != 0x88f8) {
            return;
          }
          FUN_0010b9d7(param_1,param_2,(ulong)param_3,param_2);
          return;
        }
      }
      lVar2 = FUN_0010a39a(param_1);
      if (lVar2 != 0) {
        if ((*(uint *)(lVar2 + 0x20) & 1) == 0) {
          lVar3 = ((long)*(int *)(lVar2 + 0x24) + lVar2 + 0x60) - *(long *)(lVar2 + 0x30);
        }
        else {
          lVar3 = ((long)*(int *)(lVar2 + 0x24) + *(long *)(lVar2 + 0x58)) - *(long *)(lVar2 + 0x30)
          ;
        }
        if ((ulong)(lVar3 - *(int *)(lVar2 + 0x38)) < (long)(int)param_3 + 0x1eU) {
          FUN_0010a70b(lVar2,(ulong)(param_3 + 0x1e),(ulong)(param_3 + 0x1e));
        }
        *(int *)(lVar2 + 0x38) = param_3 + 0x1e;
        memcpy((void *)(*(long *)(lVar2 + 0x30) + 0x1e),param_2,(long)(int)param_3);
        *(long *)(lVar2 + 0x30) = *(long *)(lVar2 + 0x30) + 0x2c;
        *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + -0x2c;
        if (uVar1 == 0x800) {
          FUN_0010932f(lVar2);
        }
        else {
          if (uVar1 == 0x86dd) {
            FUN_00107ed3(lVar2);
          }
        }
      }
    }
  }
  return;
}



undefined8 FUN_0010e629(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  uint16_t uVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_48 [6];
  undefined2 uStack66;
  undefined4 uStack64;
  uint16_t uStack60;
  uint16_t uStack58;
  uint16_t uStack56;
  undefined uStack54;
  undefined uStack53;
  uint16_t uStack52;
  undefined2 uStack50;
  undefined4 uStack48;
  undefined4 uStack44;
  undefined auStack40 [6];
  undefined4 uStack34;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_2 + 0x30);
  if (*(int *)(lVar4 + 0x10) == 0) {
    uVar3 = 1;
  }
  else {
    cVar1 = FUN_0010350e(param_1,(ulong)*(uint *)(lVar4 + 0x10),param_4,
                         (ulong)*(uint *)(lVar4 + 0x10));
    if (cVar1 == '\x01') {
      *(undefined2 *)(param_3 + 6) = 0x5552;
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x14);
      uVar2 = htons(0x800);
      *(uint16_t *)(param_3 + 0xc) = uVar2;
      uVar3 = 2;
    }
    else {
      if (*(char *)(param_2 + 0x48) != '\x01') {
        memset(local_48,0xff,6);
        uStack66 = 0x5552;
        uStack64 = *(undefined4 *)(param_1 + 0x14);
        uStack60 = htons(0x806);
        uStack58 = htons(1);
        uStack56 = htons(0x800);
        uStack54 = 6;
        uStack53 = 4;
        uStack52 = htons(1);
        uStack50 = 0x5552;
        uStack48 = *(undefined4 *)(param_1 + 0x14);
        uStack44 = *(undefined4 *)(param_1 + 0x14);
        memset(auStack40,0,6);
        uStack34 = *(undefined4 *)(lVar4 + 0x10);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(lVar4 + 0x10);
        FUN_0010f245(param_1,local_48,0x2a,local_48);
        *(undefined *)(param_2 + 0x48) = 1;
        lVar4 = (**(code **)(*(long *)(param_1 + 0x1768) + 0x10))(*(undefined8 *)(param_1 + 6000));
        *(long *)(param_2 + 0x50) = lVar4 + 1000000000;
      }
      uVar3 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar3;
}



undefined8 FUN_0010e86b(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  uint16_t uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(param_2 + 0x30);
  cVar1 = FUN_0010c04f(param_1,*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),param_4);
  if (cVar1 == '\x01') {
    uVar2 = htons(0x86dd);
    *(uint16_t *)(param_3 + 0xc) = uVar2;
    FUN_0010ca7a(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(lVar3 + 0x10),param_3 + 6,
                 *(undefined8 *)(lVar3 + 8));
    uVar4 = 2;
  }
  else {
    if (*(char *)(param_2 + 0x48) != '\x01') {
      FUN_00107017(param_1,*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 0x20),
                   *(undefined8 *)(lVar3 + 0x18));
      *(undefined *)(param_2 + 0x48) = 1;
      lVar3 = (**(code **)(*(long *)(param_1 + 0x1768) + 0x10))(*(undefined8 *)(param_1 + 6000));
      *(long *)(param_2 + 0x50) = lVar3 + 1000000000;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// WARNING: Could not reconcile some variable overlaps

ulong FUN_0010e953(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
  undefined4 uStack65646;
  undefined2 uStack65642;
  undefined4 uStack65640;
  undefined2 uStack65636;
  byte bStack65634;
  byte bStack65633;
  byte bStack65632;
  byte bStack65631;
  byte bStack65630;
  byte bStack65629;
  undefined auStack65626 [65618];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_2 + 0x38) + 0xeU < 0x10056) {
    bVar2 = **(byte **)(param_2 + 0x30) >> 4;
    if (bVar2 == 4) {
      uVar5 = 0x10e9f9;
      uVar3 = FUN_0010e629(param_1,param_2,&uStack65640);
      if ((int)uVar3 < 2) {
        uVar4 = (ulong)uVar3;
        goto LAB_0010ec21;
      }
    }
    else {
      if (bVar2 == 6) {
        uVar5 = 0x10ea37;
        uVar3 = FUN_0010e86b(param_1,param_2,&uStack65640);
        if ((int)uVar3 < 2) {
          uVar4 = (ulong)uVar3;
          goto LAB_0010ec21;
        }
      }
      else {
        uVar5 = 0x10ea76;
        g_assertion_message_expr("Slirp","../src/slirp.c",0x3be,"if_encap",0);
      }
    }
    uStack65640 = uStack65646;
    uStack65636 = uStack65642;
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," src = %02x:%02x:%02x:%02x:%02x:%02x",(ulong)bStack65634,
            (ulong)bStack65633,(ulong)bStack65632,(ulong)bStack65631,(ulong)bStack65630,
            (ulong)bStack65629,uVar5);
    }
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," dst = %02x:%02x:%02x:%02x:%02x:%02x",(ulong)(byte)uStack65640,
            (ulong)uStack65640._1_1_,(ulong)uStack65640._2_1_,(ulong)uStack65640._3_1_,
            (ulong)(byte)uStack65636,(ulong)uStack65636._1_1_,uVar5);
    }
    memcpy(auStack65626,*(void **)(param_2 + 0x30),(long)*(int *)(param_2 + 0x38));
    FUN_0010f245(param_1,&uStack65640,(long)(*(int *)(param_2 + 0x38) + 0xe),&uStack65640);
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
  }
LAB_0010ec21:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 slirp_remove_hostfwd(long param_1,int param_2,int param_3,uint16_t param_4)

{
  uint16_t uVar1;
  int iVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  socklen_t local_40;
  uint local_3c;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined local_28 [2];
  ushort local_26;
  int local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    local_30 = (undefined8 *)(param_1 + 0x1c0);
  }
  else {
    local_30 = (undefined8 *)(param_1 + 0x378);
  }
  uVar1 = htons(param_4);
  local_3c = (uint)uVar1;
  local_38 = (undefined8 *)*local_30;
  do {
    if (local_38 == local_30) {
      uVar3 = 0xffffffff;
LAB_0010ed5e:
      if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
        __stack_chk_fail();
      }
      return uVar3;
    }
    local_40 = 0x10;
    if ((*(uint *)((long)local_38 + 0x14c) & 0x1000) != 0) {
      iVar2 = getsockname(*(int *)(local_38 + 2),(sockaddr *)local_28,&local_40);
      if (((iVar2 == 0) && (local_24 == param_3)) && (local_3c == (uint)local_26)) {
        (**(code **)(*(long *)(local_38[5] + 0x1768) + 0x38))
                  ((ulong)*(uint *)(local_38 + 2),*(undefined8 *)(local_38[5] + 6000),
                   (ulong)*(uint *)(local_38 + 2),*(undefined8 *)(local_38[5] + 6000));
        close(*(int *)(local_38 + 2));
        FUN_0010f77a(local_38);
        uVar3 = 0;
        goto LAB_0010ed5e;
      }
    }
    local_38 = (undefined8 *)*local_38;
  } while( true );
}



undefined8
slirp_add_hostfwd(long param_1,int param_2,uint param_3,uint16_t param_4,uint param_5,
                 uint16_t param_6)

{
  uint16_t uVar1;
  uint16_t uVar2;
  long lVar3;
  uint local_30;
  
  local_30 = param_5;
  if (param_5 == 0) {
    local_30 = *(uint *)(param_1 + 0x3c);
  }
  if (param_2 == 0) {
    uVar1 = htons(param_6);
    uVar2 = htons(param_4);
    lVar3 = FUN_001116c0(param_1,(ulong)param_3,(ulong)uVar2,(ulong)local_30,(ulong)uVar1,0x1000);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
  }
  else {
    uVar1 = htons(param_6);
    uVar2 = htons(param_4);
    lVar3 = FUN_0011b58f(param_1,(ulong)param_3,(ulong)uVar2,(ulong)local_30,(ulong)uVar1,0x1000);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
  }
  return 0;
}



undefined8 FUN_0010ee4d(long param_1,uint *param_2,int param_3)

{
  uint uVar1;
  uint32_t uVar2;
  undefined8 uVar3;
  long local_20;
  
  if (*param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    uVar2 = htonl(0x204);
    *param_2 = uVar1 | ~*(uint *)(param_1 + 0x10) & uVar2;
  }
  if ((((*param_2 & *(uint *)(param_1 + 0x10)) == *(uint *)(param_1 + 0xc)) &&
      (*param_2 != *(uint *)(param_1 + 0x14))) && (*param_2 != *(uint *)(param_1 + 0x40))) {
    local_20 = *(long *)(param_1 + 0x80);
    while (local_20 != 0) {
      if ((param_3 == *(int *)(local_20 + 0x14)) && (*param_2 == *(uint *)(local_20 + 0x10))) {
        return 0;
      }
      local_20 = *(long *)(local_20 + 0x20);
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined8 slirp_add_exec(long param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  char cVar1;
  uint16_t uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0010ee4d(param_1,param_3,(ulong)param_4,param_3);
  if (cVar1 == '\x01') {
    uVar2 = htons((uint16_t)param_4);
    FUN_0010ac26(param_1 + 0x80,param_2,(ulong)*param_3,(ulong)uVar2);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



undefined8
slirp_add_guestfwd(long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,uint param_5)

{
  char cVar1;
  uint16_t uVar2;
  undefined8 uVar3;
  
  cVar1 = FUN_0010ee4d(param_1,param_4,(ulong)param_5,param_4);
  if (cVar1 == '\x01') {
    uVar2 = htons((uint16_t)param_5);
    FUN_0010abad(param_1 + 0x80,param_2,param_3,(ulong)*param_4,(ulong)uVar2);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



size_t FUN_0010f014(long param_1,void *param_2,size_t param_3,int param_4)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x10) == -1) && (*(long *)(param_1 + 0x18) != 0)) {
    (***(code ***)(param_1 + 0x18))
              (param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0x18) + 8),param_2);
  }
  else {
    if (*(int *)(param_1 + 0x10) == -1) {
      piVar1 = __errno_location();
      *piVar1 = 9;
      param_3 = 0xffffffffffffffff;
    }
    else {
      param_3 = send(*(int *)(param_1 + 0x10),param_2,param_3,param_4);
    }
  }
  return param_3;
}



undefined8 * FUN_0010f0a9(long param_1,int param_2,uint param_3)

{
  uint16_t uVar1;
  undefined8 *local_10;
  
  local_10 = *(undefined8 **)(param_1 + 0x1c0);
  while( true ) {
    if (local_10 == (undefined8 *)(param_1 + 0x1c0)) {
      return (undefined8 *)0;
    }
    if ((*(int *)((long)local_10 + 0x4c) == param_2) &&
       (uVar1 = htons(*(uint16_t *)((long)local_10 + 0x4a)), param_3 == (uint)uVar1)) break;
    local_10 = (undefined8 *)*local_10;
  }
  return local_10;
}



undefined8 slirp_socket_can_recv(undefined8 param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = FUN_0010f0a9(param_1,(ulong)param_2,(ulong)param_3,(ulong)param_2);
  if ((lVar1 == 0) || ((*(uint *)(lVar1 + 0x14c) & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    if (((*(uint *)(lVar1 + 0x14c) & 0xc) == 4) &&
       (*(uint *)(lVar1 + 0x188) < *(uint *)(lVar1 + 0x18c) >> 1)) {
      uVar2 = FUN_0010f8a6(lVar1,local_38,0,local_38);
    }
    else {
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void slirp_socket_recv(undefined8 param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_0010f0a9(param_1,(ulong)param_2,(ulong)param_3,(ulong)param_2);
  if (lVar2 != 0) {
    iVar1 = FUN_00110030(lVar2,param_4,(ulong)param_5,param_4);
    if (0 < iVar1) {
      FUN_00115563(*(undefined8 *)(lVar2 + 0x150));
    }
  }
  return;
}



void FUN_0010f245(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (***(code ***)(param_1 + 0x1768))(param_2,param_3,*(undefined8 *)(param_1 + 6000),param_2)
  ;
  if ((long)uVar1 < 0) {
    g_log("Slirp",8,"Failed to send packet, ret: %ld",uVar1);
  }
  else {
    if ((uVar1 < param_3) && ((DAT_003250e0 & 4) != 0)) {
      g_log("Slirp",0x80,"send_packet() didn\'t send all data: %ld < %lu",uVar1,param_3);
    }
  }
  return;
}



void FUN_0010f2f8(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  setsockopt(param_1,1,2,&local_14,4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



ulong FUN_0010f350(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
}



ulong FUN_0010f37f(void *param_1,void *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar2 = param_3;
  if ((int)param_3 < 0) {
    uVar2 = param_3 + 7;
  }
  iVar3 = memcmp(param_1,param_2,(long)((int)uVar2 >> 3));
  if (iVar3 == 0) {
    if ((param_3 & 7) == 0) {
      uVar4 = 1;
    }
    else {
      uVar2 = param_3;
      if ((int)param_3 < 0) {
        uVar2 = param_3 + 7;
      }
      bVar1 = (byte)((int)param_3 >> 0x37);
      uVar5 = param_3;
      if ((int)param_3 < 0) {
        uVar5 = param_3 + 7;
      }
      uVar5 = (int)(uint)*(byte *)((long)param_2 + (long)((int)uVar5 >> 3)) >>
              (8 - (((char)param_3 + (bVar1 >> 5) & 7) - (bVar1 >> 5)) & 0x1f);
      uVar4 = (ulong)(uVar5 & 0xffffff00 |
                     (uint)((int)(uint)*(byte *)((long)param_1 + (long)((int)uVar2 >> 3)) >>
                            (8 - (((char)param_3 + (bVar1 >> 5) & 7) - (bVar1 >> 5)) & 0x1f) ==
                           uVar5));
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



undefined8 FUN_0010f44c(short *param_1,short *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_1 == *param_2) {
    if (*param_1 == 2) {
      if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 2)) && (param_1[1] == param_2[1])) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      if (*param_1 == 10) {
        cVar1 = FUN_0010f350(param_1 + 4,param_2 + 4,param_2 + 4);
        if ((cVar1 == '\0') || (param_1[1] != param_2[1])) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = g_assertion_message_expr("Slirp","../src/socket.h",0x7a,"sockaddr_equal",0);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_0010f550(short *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 2) {
    uVar1 = 0x10;
  }
  else {
    if (*param_1 == 10) {
      uVar1 = 0x1c;
    }
    else {
      uVar1 = g_assertion_message_expr("Slirp","../src/socket.h",0x88,"sockaddr_size",0);
    }
  }
  return uVar1;
}



undefined8 * FUN_0010f5a7(long *param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *local_10;
  
  puVar2 = (undefined8 *)*param_1;
  if (((puVar2 == param_2) ||
      (iVar1 = FUN_0010f44c(puVar2 + 0x19,param_3,puVar2 + 0x19), iVar1 == 0)) ||
     ((param_4 != 0 && (iVar1 = FUN_0010f44c(puVar2 + 9,param_4,puVar2 + 9), iVar1 == 0)))) {
    local_10 = (undefined8 *)*param_2;
    while (local_10 != param_2) {
      iVar1 = FUN_0010f44c(local_10 + 0x19,param_3,local_10 + 0x19);
      if ((iVar1 != 0) &&
         ((param_4 == 0 || (iVar1 = FUN_0010f44c(local_10 + 9,param_4,local_10 + 9), iVar1 != 0))))
      {
        *(undefined8 **)param_1 = local_10;
        return local_10;
      }
      local_10 = (undefined8 *)*local_10;
    }
    puVar2 = (undefined8 *)0x0;
  }
  return puVar2;
}



void * FUN_0010f694(undefined8 param_1)

{
  void *__s;
  
  __s = (void *)g_malloc_n(1,0x1a8);
  memset(__s,0,0x1a8);
  *(undefined4 *)((long)__s + 0x14c) = 1;
  *(undefined4 *)((long)__s + 0x10) = 0xffffffff;
  *(undefined8 *)((long)__s + 0x28) = param_1;
  *(undefined4 *)((long)__s + 0x20) = 0xffffffff;
  return __s;
}



void FUN_0010f6ff(long param_1,undefined8 *param_2)

{
  undefined8 *local_18;
  undefined8 *local_10;
  
  local_18 = (undefined8 *)*param_2;
  while (local_18 != param_2) {
    if (param_1 == local_18[5]) {
      local_18[5] = 0;
      local_10 = (undefined8 *)local_18[2];
      while (local_10 != local_18) {
        local_10[5] = 0;
        local_10 = (undefined8 *)local_10[2];
      }
    }
    local_18 = (undefined8 *)*local_18;
  }
  return;
}



void FUN_0010f77a(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[5];
  FUN_0010f6ff(param_1,lVar1 + 0xc0,lVar1 + 0xc0);
  FUN_0010f6ff(param_1,lVar1 + 0xd0,lVar1 + 0xd0);
  if (param_1 == *(long **)(lVar1 + 0x368)) {
    *(long *)(lVar1 + 0x368) = lVar1 + 0x1c0;
  }
  else {
    if (param_1 == *(long **)(lVar1 + 0x520)) {
      *(long *)(lVar1 + 0x520) = lVar1 + 0x378;
    }
    else {
      if (param_1 == *(long **)(lVar1 + 0x6d0)) {
        *(long *)(lVar1 + 0x6d0) = lVar1 + 0x528;
      }
    }
  }
  FUN_0010a4f0(param_1[6]);
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    FUN_0010ab7f(param_1);
  }
  if (param_1[0x2a] != 0) {
    free((void *)param_1[0x2a]);
  }
  g_free(param_1);
  return;
}



long FUN_0010f8a6(long param_1,undefined8 *param_2,int *param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int local_24;
  
  iVar3 = *(int *)(param_1 + 0x18c) - *(int *)(param_1 + 0x188);
  uVar1 = (uint)*(ushort *)(*(long *)(param_1 + 0x150) + 0x20);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"sopreprbuf...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if (iVar3 < 1) {
    lVar2 = 0;
  }
  else {
    *param_2 = *(undefined8 *)(param_1 + 400);
    param_2[2] = 0;
    param_2[3] = 0;
    if (*(ulong *)(param_1 + 400) < *(ulong *)(param_1 + 0x198)) {
      param_2[1] = *(long *)(param_1 + 0x198) - *(long *)(param_1 + 400);
      if ((ulong)(long)iVar3 < (ulong)param_2[1]) {
        param_2[1] = (long)iVar3;
      }
      if ((ulong)(long)(int)uVar1 < (ulong)param_2[1]) {
        param_2[1] = param_2[1] - (ulong)param_2[1] % (long)(int)uVar1;
      }
      local_24 = 1;
    }
    else {
      param_2[1] = ((ulong)*(uint *)(param_1 + 0x18c) + *(long *)(param_1 + 0x1a0)) -
                   *(long *)(param_1 + 400);
      if ((ulong)(long)iVar3 < (ulong)param_2[1]) {
        param_2[1] = (long)iVar3;
      }
      iVar3 = iVar3 - (int)param_2[1];
      if (iVar3 == 0) {
        if ((ulong)(long)(int)uVar1 < (ulong)param_2[1]) {
          param_2[1] = param_2[1] - (ulong)param_2[1] % (long)(int)uVar1;
        }
        local_24 = 1;
      }
      else {
        param_2[2] = *(undefined8 *)(param_1 + 0x1a0);
        param_2[3] = *(long *)(param_1 + 0x198) - *(long *)(param_1 + 0x1a0);
        if ((ulong)(long)iVar3 < (ulong)param_2[3]) {
          param_2[3] = (long)iVar3;
        }
        iVar3 = (int)param_2[3] + (int)param_2[1];
        if ((int)uVar1 < iVar3) {
          iVar3 = iVar3 % uVar1;
          if ((ulong)(long)iVar3 < (ulong)param_2[3]) {
            param_2[3] = param_2[3] - (long)iVar3;
            local_24 = 2;
          }
          else {
            param_2[1] = param_2[1] - (long)(iVar3 - (int)param_2[3]);
            local_24 = 1;
          }
        }
        else {
          local_24 = 2;
        }
      }
    }
    if (param_3 != (int *)0x0) {
      *param_3 = local_24;
    }
    lVar2 = param_2[3] * (long)(local_24 + -1) + param_2[1];
  }
  return lVar2;
}



ulong FUN_0010fc35(long param_1)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  ulong uVar4;
  uint *puVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  int local_f8;
  uint local_f4;
  socklen_t local_f0;
  socklen_t local_ec;
  uint local_e8;
  int local_e4;
  int *local_e0;
  long local_d8;
  sockaddr *local_d0;
  void *local_c8;
  size_t local_c0;
  void *local_b8;
  size_t local_b0;
  sockaddr local_a8 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = (int *)(param_1 + 0x188);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"soread...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  local_d8 = FUN_0010f8a6(param_1,&local_c8,&local_f8,&local_c8);
  if (local_d8 == 0) {
                    // WARNING: Subroutine does not return
    __assert_fail("buf_len != 0","../src/socket.c",0xb7,"soread");
  }
  sVar2 = recv(*(int *)(param_1 + 0x10),local_c8,local_c0,0);
  local_e8 = (uint)sVar2;
  if (0 < (int)local_e8) {
    if ((local_f8 == 2) && ((long)(int)local_e8 == local_c0)) {
      sVar2 = recv(*(int *)(param_1 + 0x10),local_b8,local_b0,0);
      local_e4 = (int)sVar2;
      if (0 < local_e4) {
        local_e8 = local_e8 + local_e4;
      }
    }
    if ((DAT_003250e0 & 2) != 0) {
      g_log("Slirp",0x80," ... read nn = %d bytes",(ulong)local_e8);
    }
    *local_e0 = *local_e0 + local_e8;
    *(long *)(local_e0 + 2) = *(long *)(local_e0 + 2) + (long)(int)local_e8;
    if ((ulong)(uint)local_e0[1] + *(long *)(local_e0 + 6) <= *(ulong *)(local_e0 + 2)) {
      *(ulong *)(local_e0 + 2) = *(long *)(local_e0 + 2) - (ulong)(uint)local_e0[1];
    }
    uVar4 = (ulong)local_e8;
    goto LAB_00110012;
  }
  if ((int)local_e8 < 0) {
    piVar3 = __errno_location();
    if (*piVar3 != 4) {
      piVar3 = __errno_location();
      if (*piVar3 != 0xb) goto LAB_0010fd81;
    }
    uVar4 = 0;
  }
  else {
LAB_0010fd81:
    local_f0 = 4;
    local_d0 = local_a8;
    local_ec = 0x80;
    puVar5 = (uint *)__errno_location();
    local_f4 = *puVar5;
    if (local_e8 == 0) {
      iVar1 = getpeername(*(int *)(param_1 + 0x10),local_d0,&local_ec);
      if (iVar1 < 0) {
        puVar5 = (uint *)__errno_location();
        local_f4 = *puVar5;
      }
      else {
        getsockopt(*(int *)(param_1 + 0x10),1,4,&local_f4,&local_f0);
      }
    }
    if ((DAT_003250e0 & 2) != 0) {
      piVar3 = __errno_location();
      pcVar6 = strerror(*piVar3);
      puVar5 = (uint *)__errno_location();
      g_log("Slirp",0x80," --- soread() disconnected, nn = %d, errno = %d-%s",(ulong)local_e8,
            (ulong)*puVar5,pcVar6);
    }
    FUN_00111b34(param_1);
    if ((((local_f4 == 0x68) || (local_f4 == 0x6f)) || (local_f4 == 0x6b)) || (local_f4 == 0x20)) {
      FUN_00116fc0(*(undefined8 *)(param_1 + 0x150),(ulong)local_f4,(ulong)local_f4);
    }
    else {
      FUN_00117227(*(undefined8 *)(param_1 + 0x150));
    }
    uVar4 = 0xffffffff;
  }
LAB_00110012:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



ulong FUN_00110030(long param_1,void *param_2,uint param_3)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined local_4c [4];
  uint local_48;
  uint local_44;
  int *local_40;
  void *local_38;
  ulong local_30;
  void *local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (int *)(param_1 + 0x188);
  local_48 = param_3;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"soreadbuf...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if ((int)param_3 < 1) {
                    // WARNING: Subroutine does not return
    __assert_fail("size > 0","../src/socket.c",0x102,"soreadbuf");
  }
  uVar1 = FUN_0010f8a6(param_1,&local_38,local_4c,&local_38);
  if (uVar1 < (ulong)(long)(int)param_3) {
    FUN_00111b34(param_1);
    FUN_00117227(*(undefined8 *)(param_1 + 0x150));
    g_log("Slirp",8,"soreadbuf buffer too small");
    uVar1 = 0xffffffff;
  }
  else {
    local_44 = (uint)local_30;
    if ((ulong)(long)(int)local_48 <= local_30) {
      local_44 = local_48;
    }
    memcpy(local_38,param_2,(long)(int)local_44);
    local_48 = local_48 - local_44;
    if (local_48 != 0) {
      memcpy(local_28,(void *)((long)param_2 + (long)(int)local_44),(long)(int)local_48);
    }
    *local_40 = *local_40 + param_3;
    *(long *)(local_40 + 2) = *(long *)(local_40 + 2) + (long)(int)param_3;
    if ((ulong)(uint)local_40[1] + *(long *)(local_40 + 6) <= *(ulong *)(local_40 + 2)) {
      *(ulong *)(local_40 + 2) = *(long *)(local_40 + 2) - (ulong)(uint)local_40[1];
    }
    uVar1 = (ulong)param_3;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar1;
}



ulong FUN_00110238(long param_1)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = *(long *)(param_1 + 0x150);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"sorecvoob...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  uVar2 = FUN_0010fc35(param_1);
  if (0 < (int)uVar2) {
    *(int *)(lVar1 + 0x80) = *(int *)(lVar1 + 0x78) + *(int *)(param_1 + 0x188);
    *(undefined *)(lVar1 + 0x22) = 1;
    FUN_00115563(lVar1);
    *(undefined *)(lVar1 + 0x22) = 0;
  }
  return (ulong)uVar2;
}



ulong FUN_00110307(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long in_FS_OFFSET;
  uint local_82c;
  uint local_828;
  undefined local_818 [2056];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar2 = (uint *)(param_1 + 0x168);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"sosendoob...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," sb->sb_cc = %d",(ulong)*puVar2);
  }
  if (0x800 < *(uint *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x40) = 0x800;
  }
  if (*(ulong *)(param_1 + 0x178) < *(ulong *)(param_1 + 0x170)) {
    local_82c = FUN_0010f014(param_1,*(undefined8 *)(param_1 + 0x178),
                             (ulong)*(uint *)(param_1 + 0x40),1);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x40);
    local_828 = (*(int *)(param_1 + 0x16c) + (int)*(undefined8 *)(param_1 + 0x180)) -
                (int)*(undefined8 *)(param_1 + 0x178);
    if (uVar1 < local_828) {
      local_828 = uVar1;
    }
    memcpy(local_818,*(void **)(param_1 + 0x178),(long)(int)local_828);
    uVar1 = uVar1 - local_828;
    if (uVar1 != 0) {
      local_82c = (int)*(undefined8 *)(param_1 + 0x170) - (int)*(undefined8 *)(param_1 + 0x180);
      if (uVar1 < local_82c) {
        local_82c = uVar1;
      }
      memcpy(local_818 + (int)local_828,*(void **)(param_1 + 0x180),(long)(int)local_82c);
      local_828 = local_828 + local_82c;
    }
    local_82c = FUN_0010f014(param_1,local_818,(long)(int)local_828,1);
  }
  if (-1 < (int)local_82c) {
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) - local_82c;
    if ((DAT_003250e0 & 2) != 0) {
      g_log("Slirp",0x80," ---2 sent %d bytes urgent data, %d urgent bytes left",(ulong)local_82c,
            (ulong)*(uint *)(param_1 + 0x40));
    }
    *puVar2 = *puVar2 - local_82c;
    *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + (long)(int)local_82c;
    if ((ulong)*(uint *)(param_1 + 0x16c) + *(long *)(param_1 + 0x180) <=
        *(ulong *)(param_1 + 0x178)) {
      *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) - (ulong)*(uint *)(param_1 + 0x16c);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_82c;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



ulong FUN_001106a3(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  long in_FS_OFFSET;
  int local_54;
  uint local_50;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = (int *)(param_1 + 0x168);
  iVar4 = *piVar5;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"sowrite...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if (*(int *)(param_1 + 0x40) == 0) {
LAB_00110774:
    local_28 = 0;
    local_20 = 0;
    if (*(ulong *)(param_1 + 0x178) < *(ulong *)(param_1 + 0x170)) {
      local_30 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x178);
      if ((ulong)(long)iVar4 < local_30) {
        local_30 = SEXT48(iVar4);
      }
      local_54 = 1;
    }
    else {
      local_30 = ((ulong)*(uint *)(param_1 + 0x16c) + *(long *)(param_1 + 0x180)) -
                 *(long *)(param_1 + 0x178);
      if ((ulong)(long)iVar4 < local_30) {
        local_30 = SEXT48(iVar4);
      }
      iVar4 = iVar4 - (int)local_30;
      if (iVar4 == 0) {
        local_54 = 1;
      }
      else {
        local_28 = *(undefined8 *)(param_1 + 0x180);
        local_20 = *(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x180);
        if ((ulong)(long)iVar4 < local_20) {
          local_20 = SEXT48(iVar4);
        }
        local_54 = 2;
      }
    }
    local_50 = FUN_0010f014(param_1,*(undefined8 *)(param_1 + 0x178),local_30,0);
    if (((int)local_50 < 0) &&
       ((piVar7 = __errno_location(), *piVar7 == 0xb || (piVar7 = __errno_location(), *piVar7 == 4))
       )) {
      uVar6 = 0;
      goto LAB_00110a44;
    }
    if (0 < (int)local_50) {
      if (((local_54 == 2) && ((long)(int)local_50 == local_30)) &&
         (iVar4 = FUN_0010f014(param_1,local_28,local_20,0), 0 < iVar4)) {
        local_50 = local_50 + iVar4;
      }
      if ((DAT_003250e0 & 2) != 0) {
        g_log("Slirp",0x80,"  ... wrote nn = %d bytes",(ulong)local_50);
      }
      *piVar5 = *piVar5 - local_50;
      *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) + (long)(int)local_50;
      if ((ulong)*(uint *)(param_1 + 0x16c) + *(long *)(param_1 + 0x180) <=
          *(ulong *)(param_1 + 0x178)) {
        *(long *)(param_1 + 0x178) = *(long *)(param_1 + 0x178) - (ulong)*(uint *)(param_1 + 0x16c);
      }
      if (((*(uint *)(param_1 + 0x14c) & 0x40) != 0) && (*piVar5 == 0)) {
        FUN_00111be0(param_1);
      }
      uVar6 = (ulong)local_50;
      goto LAB_00110a44;
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar3 = FUN_00110307(param_1);
    if (uVar1 <= uVar3) {
      if (*piVar5 == 0) {
        uVar6 = 0;
        goto LAB_00110a44;
      }
      goto LAB_00110774;
    }
  }
  if ((DAT_003250e0 & 2) != 0) {
    puVar8 = (uint *)__errno_location();
    g_log("Slirp",0x80," --- sowrite disconnected, so->so_state = %x, errno = %d",
          (ulong)*(uint *)(param_1 + 0x14c),(ulong)*puVar8);
  }
  FUN_00111be0(param_1);
  FUN_00117227(*(undefined8 *)(param_1 + 0x150));
  uVar6 = 0xffffffff;
LAB_00110a44:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar6;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00110a5a(long param_1)

{
  uint16_t uVar1;
  uint16_t uVar2;
  int iVar3;
  ssize_t sVar4;
  int *piVar5;
  char *pcVar6;
  uint *puVar7;
  long in_FS_OFFSET;
  byte local_2c2;
  byte local_2c1;
  socklen_t local_2c0;
  uint local_2bc;
  int local_2b8;
  int local_2b4;
  long local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined local_128 [264];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c0 = 0x80;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"sorecvfrom...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if (*(char *)(param_1 + 0x14a) == '\x01') {
    sVar4 = recvfrom(*(int *)(param_1 + 0x10),local_128,0x100,0,(sockaddr *)&local_2a8,&local_2c0);
    local_2b4 = (int)sVar4;
    if ((local_2b4 == -1) || (local_2b4 == 0)) {
      local_2c2 = 3;
      piVar5 = __errno_location();
      if (*piVar5 == 0x71) {
        local_2c2 = 1;
      }
      else {
        piVar5 = __errno_location();
        if (*piVar5 == 0x65) {
          local_2c2 = 0;
        }
      }
      if ((DAT_003250e0 & 2) != 0) {
        piVar5 = __errno_location();
        pcVar6 = strerror(*piVar5);
        puVar7 = (uint *)__errno_location();
        g_log("Slirp",0x80," udp icmp rx errno = %d-%s",(ulong)*puVar7,pcVar6);
      }
      piVar5 = __errno_location();
      pcVar6 = strerror(*piVar5);
      FUN_00108b39(*(undefined8 *)(param_1 + 0x30),3,(ulong)local_2c2,0,pcVar6);
    }
    else {
      FUN_00108f3f(*(undefined8 *)(param_1 + 0x30));
      *(undefined8 *)(param_1 + 0x30) = 0;
    }
    FUN_0011b3c9(param_1);
  }
  else {
    iVar3 = ioctl(*(int *)(param_1 + 0x10),0x541b,&local_2bc);
    if (iVar3 == 0) {
      if ((local_2bc != 0) &&
         (local_2b0 = FUN_0010a39a(*(undefined8 *)(param_1 + 0x28)), local_2b0 != 0)) {
        if (*(short *)(param_1 + 0x48) == 2) {
          *(long *)(local_2b0 + 0x30) = *(long *)(local_2b0 + 0x30) + 0x2c;
        }
        else {
          if (*(short *)(param_1 + 0x48) == 10) {
            *(long *)(local_2b0 + 0x30) = *(long *)(local_2b0 + 0x30) + 0x40;
          }
          else {
            g_assertion_message_expr("Slirp","../src/socket.c",0x227,"sorecvfrom",0);
          }
        }
        if ((*(uint *)(local_2b0 + 0x20) & 1) == 0) {
          local_2b8 = (*(int *)(local_2b0 + 0x24) + (int)local_2b0 + 0x60) -
                      (int)*(undefined8 *)(local_2b0 + 0x30);
        }
        else {
          local_2b8 = (*(int *)(local_2b0 + 0x24) + (int)*(undefined8 *)(local_2b0 + 0x58)) -
                      (int)*(undefined8 *)(local_2b0 + 0x30);
        }
        local_2b8 = local_2b8 - *(int *)(local_2b0 + 0x38);
        if (local_2b8 < (int)local_2bc) {
          local_2bc = local_2bc +
                      ((int)*(undefined8 *)(local_2b0 + 0x30) - ((int)local_2b0 + 0x60)) +
                      *(int *)(local_2b0 + 0x38) + 1;
          FUN_0010a70b(local_2b0,(ulong)local_2bc,(ulong)local_2bc);
          if ((*(uint *)(local_2b0 + 0x20) & 1) == 0) {
            local_2b8 = (*(int *)(local_2b0 + 0x24) + (int)local_2b0 + 0x60) -
                        (int)*(undefined8 *)(local_2b0 + 0x30);
          }
          else {
            local_2b8 = (*(int *)(local_2b0 + 0x24) + (int)*(undefined8 *)(local_2b0 + 0x58)) -
                        (int)*(undefined8 *)(local_2b0 + 0x30);
          }
          local_2b8 = local_2b8 - *(int *)(local_2b0 + 0x38);
        }
        sVar4 = recvfrom(*(int *)(param_1 + 0x10),*(void **)(local_2b0 + 0x30),(long)local_2b8,0,
                         (sockaddr *)&local_2a8,&local_2c0);
        *(undefined4 *)(local_2b0 + 0x38) = (int)sVar4;
        if ((DAT_003250e0 & 2) != 0) {
          piVar5 = __errno_location();
          pcVar6 = strerror(*piVar5);
          puVar7 = (uint *)__errno_location();
          g_log("Slirp",0x80," did recvfrom %d, errno = %d-%s",(ulong)*(uint *)(local_2b0 + 0x38),
                (ulong)*puVar7,pcVar6);
        }
        if (*(int *)(local_2b0 + 0x38) < 0) {
          if (*(short *)(param_1 + 200) == 2) {
            local_2c1 = 3;
            piVar5 = __errno_location();
            if (*piVar5 == 0x71) {
              local_2c1 = 1;
            }
            else {
              piVar5 = __errno_location();
              if (*piVar5 == 0x65) {
                local_2c1 = 0;
              }
            }
            if ((DAT_003250e0 & 2) != 0) {
              g_log("Slirp",0x80," rx error, tx icmp ICMP_UNREACH:%i",(ulong)local_2c1);
            }
            piVar5 = __errno_location();
            pcVar6 = strerror(*piVar5);
            FUN_00108b39(*(undefined8 *)(param_1 + 0x30),3,(ulong)local_2c1,0,pcVar6);
          }
          else {
            if (*(short *)(param_1 + 200) == 10) {
              local_2c1 = 4;
              piVar5 = __errno_location();
              if (*piVar5 == 0x71) {
                local_2c1 = 3;
              }
              else {
                piVar5 = __errno_location();
                if (*piVar5 == 0x65) {
                  local_2c1 = 0;
                }
              }
              if ((DAT_003250e0 & 2) != 0) {
                g_log("Slirp",0x80," rx error, tx icmp6 ICMP_UNREACH:%i",(ulong)local_2c1);
              }
              FUN_00106903(*(undefined8 *)(param_1 + 0x30),1,(ulong)local_2c1);
            }
            else {
              g_assertion_message_expr("Slirp","../src/socket.c",0x25b,"sorecvfrom",0);
            }
          }
          FUN_0010a4f0(local_2b0);
        }
        else {
          if (*(int *)(param_1 + 0x158) != 0) {
            uVar1 = *(uint16_t *)(param_1 + 0x4a);
            uVar2 = htons(0x35);
            if (uVar1 == uVar2) {
              *(int *)(param_1 + 0x158) = DAT_003250e8 + 10000;
            }
            else {
              *(int *)(param_1 + 0x158) = DAT_003250e8 + 240000;
            }
          }
          local_228 = local_2a8;
          local_220 = local_2a0;
          local_218 = local_298;
          local_210 = local_290;
          local_208 = local_288;
          local_200 = local_280;
          local_1f8 = local_278;
          local_1f0 = local_270;
          local_1e8 = local_268;
          local_1e0 = local_260;
          local_1d8 = local_258;
          local_1d0 = local_250;
          local_1c8 = local_248;
          local_1c0 = local_240;
          local_1b8 = local_238;
          local_1b0 = local_230;
          FUN_00111e85(param_1,&local_228,&local_228);
          local_1a8 = *(undefined8 *)(param_1 + 200);
          local_1a0 = *(undefined8 *)(param_1 + 0xd0);
          local_198 = *(undefined8 *)(param_1 + 0xd8);
          local_190 = *(undefined8 *)(param_1 + 0xe0);
          local_188 = *(undefined8 *)(param_1 + 0xe8);
          local_180 = *(undefined8 *)(param_1 + 0xf0);
          local_178 = *(undefined8 *)(param_1 + 0xf8);
          local_170 = *(undefined8 *)(param_1 + 0x100);
          local_168 = *(undefined8 *)(param_1 + 0x108);
          local_160 = *(undefined8 *)(param_1 + 0x110);
          local_158 = *(undefined8 *)(param_1 + 0x118);
          local_150 = *(undefined8 *)(param_1 + 0x120);
          local_148 = *(undefined8 *)(param_1 + 0x128);
          local_140 = *(undefined8 *)(param_1 + 0x130);
          local_130 = *(undefined8 *)(param_1 + 0x140);
          local_138 = *(undefined8 *)(param_1 + 0x138);
          if (*(short *)(param_1 + 0x48) == 2) {
            FUN_0011b11d(param_1,local_2b0,&local_228,&local_1a8,(ulong)*(byte *)(param_1 + 0x148));
          }
          else {
            if (*(short *)(param_1 + 0x48) == 10) {
              FUN_0011bf57(param_1,local_2b0,&local_228,&local_1a8);
            }
            else {
              g_assertion_message_expr("Slirp","../src/socket.c",0x27f,"sorecvfrom",0);
            }
          }
        }
      }
    }
    else {
      if ((DAT_003250e0 & 2) != 0) {
        piVar5 = __errno_location();
        pcVar6 = strerror(*piVar5);
        puVar7 = (uint *)__errno_location();
        g_log("Slirp",0x80," ioctlsocket errno = %d-%s\n",(ulong)*puVar7,pcVar6);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 FUN_00111417(long param_1,long param_2)

{
  int iVar1;
  socklen_t __addr_len;
  undefined8 uVar2;
  ssize_t sVar3;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"sosendto...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_2);
  }
  local_98 = *(undefined8 *)(param_1 + 0x48);
  local_90 = *(undefined8 *)(param_1 + 0x50);
  local_88 = *(undefined8 *)(param_1 + 0x58);
  local_80 = *(undefined8 *)(param_1 + 0x60);
  local_78 = *(undefined8 *)(param_1 + 0x68);
  local_70 = *(undefined8 *)(param_1 + 0x70);
  local_68 = *(undefined8 *)(param_1 + 0x78);
  local_60 = *(undefined8 *)(param_1 + 0x80);
  local_58 = *(undefined8 *)(param_1 + 0x88);
  local_50 = *(undefined8 *)(param_1 + 0x90);
  local_48 = *(undefined8 *)(param_1 + 0x98);
  local_40 = *(undefined8 *)(param_1 + 0xa0);
  local_38 = *(undefined8 *)(param_1 + 0xa8);
  local_30 = *(undefined8 *)(param_1 + 0xb0);
  local_20 = *(undefined8 *)(param_1 + 0xc0);
  local_28 = *(undefined8 *)(param_1 + 0xb8);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," sendto()ing)...");
  }
  iVar1 = FUN_00111cd0(param_1,&local_98,&local_98);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    __addr_len = FUN_0010f550();
    sVar3 = sendto(*(int *)(param_1 + 0x10),*(void **)(param_2 + 0x30),
                   (long)*(int *)(param_2 + 0x38),0,(sockaddr *)&local_98,__addr_len);
    if ((int)sVar3 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      if (*(int *)(param_1 + 0x158) != 0) {
        *(int *)(param_1 + 0x158) = DAT_003250e8 + 240000;
      }
      *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xf000;
      *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 4;
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



// WARNING: Type propagation algorithm not settling

long FUN_001116c0(long param_1,in_addr param_2,uint16_t param_3,in_addr param_4,uint16_t param_5,
                 uint param_6)

{
  uint16_t uVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined4 local_40;
  socklen_t local_3c;
  int local_38;
  int local_34;
  long local_30;
  sa_family_t local_28;
  uint16_t local_26;
  in_addr local_24;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 1;
  local_3c = 0x10;
  memset(&local_28,0,0x10);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_listen...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    pcVar3 = inet_ntoa(param_2);
    g_log("Slirp",0x80," haddr = %s",pcVar3);
  }
  if ((DAT_003250e0 & 1) != 0) {
    uVar1 = ntohs(param_3);
    g_log("Slirp",0x80," hport = %d",(ulong)uVar1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    pcVar3 = inet_ntoa(param_4);
    g_log("Slirp",0x80," laddr = %s",pcVar3);
  }
  if ((DAT_003250e0 & 1) != 0) {
    uVar1 = ntohs(param_5);
    g_log("Slirp",0x80," lport = %d",(ulong)uVar1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," flags = %x",(ulong)param_6);
  }
  local_30 = FUN_0010f694(param_1);
  uVar4 = FUN_00116ebd(local_30);
  *(undefined8 *)(local_30 + 0x150) = uVar4;
  if (*(long *)(local_30 + 0x150) == 0) {
    g_free(local_30);
    lVar6 = 0;
  }
  else {
    FUN_0010ab4c(local_30,param_1 + 0x1c0,param_1 + 0x1c0);
    if ((param_6 & 0x200) != 0) {
      *(undefined2 *)(*(long *)(local_30 + 0x150) + 0x16) = 300;
    }
    *(uint *)(local_30 + 0x14c) = *(uint *)(local_30 + 0x14c) & 0xf000;
    *(uint *)(local_30 + 0x14c) =
         param_6 & 0xffff0000 | (uint)CONCAT11((char)((ulong)param_6 >> 8),(char)param_6) | 0x100 |
         *(uint *)(local_30 + 0x14c);
    *(undefined2 *)(local_30 + 200) = 2;
    *(uint16_t *)(local_30 + 0xca) = param_5;
    *(in_addr *)&((in_addr *)(local_30 + 0xcc))->s_addr = param_4;
    local_28 = 2;
    local_26 = param_3;
    local_24 = param_2;
    local_38 = FUN_0011c25e(2,1,0);
    if (-1 < local_38) {
      iVar2 = FUN_0010f2f8();
      if (-1 < iVar2) {
        iVar2 = bind(local_38,(sockaddr *)&local_28,0x10);
        if (-1 < iVar2) {
          iVar2 = listen(local_38,1);
          if (-1 < iVar2) {
            setsockopt(local_38,1,10,&local_40,4);
            local_40 = 1;
            setsockopt(local_38,6,1,&local_40,4);
            getsockname(local_38,(sockaddr *)&local_28,&local_3c);
            *(undefined2 *)(local_30 + 0x48) = 2;
            *(uint16_t *)(local_30 + 0x4a) = local_26;
            if ((local_24 == (in_addr)0x0) || (local_24 == DAT_003250e4)) {
              *(undefined4 *)(local_30 + 0x4c) = *(undefined4 *)(param_1 + 0x14);
            }
            else {
              *(in_addr *)&((in_addr *)(local_30 + 0x4c))->s_addr = local_24;
            }
            *(int *)(local_30 + 0x10) = local_38;
            lVar6 = local_30;
            goto LAB_00111aa4;
          }
        }
      }
    }
    piVar5 = __errno_location();
    local_34 = *piVar5;
    if (-1 < local_38) {
      close(local_38);
    }
    FUN_0010f77a(local_30);
    piVar5 = __errno_location();
    *piVar5 = local_34;
    lVar6 = 0;
  }
LAB_00111aa4:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar6;
}



void FUN_00111aba(long param_1)

{
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xffffffa2;
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 2;
  return;
}



void FUN_00111af7(long param_1)

{
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xffffffbc;
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 4;
  return;
}



void FUN_00111b34(long param_1)

{
  if ((*(uint *)(param_1 + 0x14c) & 1) == 0) {
    shutdown(*(int *)(param_1 + 0x10),0);
  }
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xfffffffd;
  if ((*(uint *)(param_1 + 0x14c) & 0x10) == 0) {
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 8;
  }
  else {
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xf000;
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 1;
  }
  return;
}



void FUN_00111be0(long param_1)

{
  if ((*(uint *)(param_1 + 0x14c) & 1) == 0) {
    shutdown(*(int *)(param_1 + 0x10),1);
  }
  *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xfffffffd;
  if ((*(uint *)(param_1 + 0x14c) & 8) == 0) {
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0x10;
  }
  else {
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) & 0xf000;
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 1;
  }
  return;
}



void FUN_00111c8c(long param_1)

{
  if (*(int *)(param_1 + 0x168) == 0) {
    FUN_00111be0(param_1);
  }
  else {
    *(uint *)(param_1 + 0x14c) = *(uint *)(param_1 + 0x14c) | 0x40;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulong FUN_00111cd0(long param_1,short *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  long in_FS_OFFSET;
  undefined4 local_30;
  uint local_2c;
  long local_28;
  short *local_20;
  short *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  local_28 = *(long *)(param_1 + 0x28);
  local_20 = param_2;
  local_18 = param_2;
  if (*param_2 == 2) {
    if (((*(uint *)(param_1 + 0x4c) & *(uint *)(local_28 + 0x10)) == *(uint *)(local_28 + 0xc)) &&
       ((*(int *)(param_1 + 0x4c) != *(int *)(local_28 + 0x40) ||
        (iVar3 = FUN_0010cfd3(param_2 + 2), iVar3 < 0)))) {
      if (*(char *)(local_28 + 0x90) == '\0') {
        *(undefined4 *)(local_20 + 2) = DAT_003250e4;
      }
      else {
        local_2c = 0xffffffff;
        piVar4 = __errno_location();
        *piVar4 = 1;
      }
    }
  }
  else {
    if ((*param_2 == 10) &&
       (cVar2 = FUN_0010f37f(param_1 + 0x50,local_28 + 0x18,(ulong)*(byte *)(local_28 + 0x28),
                             param_1 + 0x50), cVar2 != '\0')) {
      cVar2 = FUN_0010f350(param_1 + 0x50,local_28 + 0x44,local_28 + 0x44);
      if ((cVar2 == '\0') || (iVar3 = FUN_0010d049(local_18 + 4,&local_30,local_18 + 4), iVar3 < 0))
      {
        uVar1 = _ioctl;
        if (*(char *)(local_28 + 0x90) == '\0') {
          *(undefined8 *)(local_18 + 4) = in6addr_loopback;
          *(undefined8 *)(local_18 + 8) = uVar1;
        }
        else {
          local_2c = 0xffffffff;
          piVar4 = __errno_location();
          *piVar4 = 1;
        }
      }
      else {
        *(undefined4 *)(local_18 + 0xc) = local_30;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)local_2c;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00111e85(long param_1,short *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*param_2 == 2) {
    if ((*(uint *)(param_1 + 0x4c) & *(uint *)(lVar1 + 0x10)) == *(uint *)(lVar1 + 0xc)) {
      if (~*(uint *)(lVar1 + 0x10) == (*(uint *)(param_1 + 0x4c) & ~*(uint *)(lVar1 + 0x10))) {
        *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar1 + 0x14);
      }
      else {
        if ((*(int *)(param_2 + 2) == DAT_003250e4) ||
           (*(int *)(param_1 + 0x4c) != *(int *)(lVar1 + 0x14))) {
          *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x4c);
        }
      }
    }
  }
  else {
    if (((*param_2 == 10) &&
        (cVar3 = FUN_0010f37f(param_1 + 0x50,lVar1 + 0x18,(ulong)*(byte *)(lVar1 + 0x28),
                              param_1 + 0x50), cVar3 != '\0')) &&
       ((cVar3 = FUN_0010f350(param_2 + 4,&in6addr_loopback,param_2 + 4), cVar3 != '\0' ||
        (cVar3 = FUN_0010f350(param_1 + 0x50,lVar1 + 0x2c,lVar1 + 0x2c), cVar3 != '\x01')))) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_2 + 8) = uVar2;
    }
  }
  return;
}



void FUN_00111fe2(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (*(short *)(param_1 + 0x48) == 2) {
    if ((*(int *)(param_1 + 0x4c) == 0) ||
       ((DAT_003250d8 & (DAT_003250e4 ^ *(uint *)(param_1 + 0x4c))) == 0)) {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar1 + 0x14);
    }
  }
  else {
    if ((*(short *)(param_1 + 0x48) == 10) &&
       ((cVar3 = FUN_0010f350(param_1 + 0x50,&in6addr_any,param_1 + 0x50), cVar3 != '\0' ||
        (cVar3 = FUN_0010f350(param_1 + 0x50,&in6addr_loopback,param_1 + 0x50), cVar3 != '\0')))) {
      uVar2 = *(undefined8 *)(lVar1 + 0x34);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(lVar1 + 0x2c);
      *(undefined8 *)(param_1 + 0x58) = uVar2;
    }
  }
  return;
}



void FUN_001120b2(long param_1,uint param_2)

{
  char cVar1;
  
  cVar1 = FUN_0010c3ca(param_1 + 0x188,(ulong)param_2,param_1 + 0x188);
  if (cVar1 != '\0') {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x1768) + 0x40))
              (*(undefined8 *)(*(long *)(param_1 + 0x28) + 6000));
  }
  return;
}



undefined8 FUN_00112107(undefined8 param_1)

{
  FUN_0011659d(param_1);
  return 0;
}



undefined8 FUN_00112129(long *param_1)

{
  *(int *)((long)param_1 + 0xc) =
       (int)*(undefined8 *)(*param_1 + 8) - (int)*(undefined8 *)(*param_1 + 0x18);
  *(int *)(param_1 + 1) =
       (int)*(undefined8 *)(*param_1 + 0x10) - (int)*(undefined8 *)(*param_1 + 0x18);
  return 0;
}



undefined8 FUN_00112190(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(*param_1 + 4);
  FUN_0010c48d(*param_1,(ulong)*(uint *)(*param_1 + 4),(ulong)*(uint *)(*param_1 + 4));
  if (uVar1 == *(uint *)(*param_1 + 4)) {
    if ((*(uint *)((long)param_1 + 0xc) < uVar1) && (*(uint *)(param_1 + 1) < uVar1)) {
      *(long *)(*param_1 + 8) = *(long *)(*param_1 + 0x18) + (ulong)*(uint *)((long)param_1 + 0xc);
      *(long *)(*param_1 + 0x10) = *(long *)(*param_1 + 0x18) + (ulong)*(uint *)(param_1 + 1);
      uVar2 = 0;
    }
    else {
      g_log("Slirp",8,"invalid sbuf offsets r/w=%u/%u len=%u",(ulong)*(uint *)(param_1 + 1),
            (ulong)*(uint *)((long)param_1 + 0xc),(ulong)uVar1);
      uVar2 = 0xffffffea;
    }
  }
  else {
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}



undefined FUN_0011228a(undefined8 param_1,int param_2)

{
  return param_2 < 4;
}



ulong FUN_0011229e(ushort *param_1)

{
  return (ulong)(ushort)(*param_1 & 0xff00 | (ushort)(*param_1 == 2));
}



undefined8 FUN_001122c1(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00117b83(param_1);
  if (iVar1 < 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    *(undefined2 *)(param_1 + 0x48) = 2;
    *(undefined2 *)(param_1 + 200) = 2;
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_0011230a(short **param_1)

{
  *(undefined2 *)(param_1 + 1) = 0xffff;
  if (**param_1 == 2) {
    *(undefined2 *)(param_1 + 1) = 2;
  }
  else {
    if (**param_1 == 10) {
      *(undefined2 *)(param_1 + 1) = 10;
    }
  }
  return 0;
}



undefined8 FUN_00112361(undefined8 *param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 1);
  if (uVar1 == 10) {
LAB_001123ae:
    *(undefined2 *)*param_1 = 10;
LAB_001123ed:
    uVar2 = 0;
  }
  else {
    if (uVar1 < 0xb) {
      if (uVar1 == 2) {
        *(undefined2 *)*param_1 = 2;
        goto LAB_001123ed;
      }
    }
    else {
      if ((uVar1 == 0x17) || (uVar1 == 0x1c)) goto LAB_001123ae;
    }
    g_log("Slirp",8,"invalid ss_family type %x",(ulong)*(ushort *)(param_1 + 1));
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



void slirp_state_save(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint16_t uVar1;
  long lVar2;
  long in_FS_OFFSET;
  long *local_38;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = *(long **)(param_1 + 0x80);
  local_28 = param_2;
  local_20 = param_3;
  while (local_38 != (long *)0x0) {
    if (*local_38 != 0) {
      uVar1 = ntohs((uint16_t)*(undefined4 *)((long)local_38 + 0x14));
      lVar2 = FUN_0010f0a9(param_1,(ulong)*(uint *)(local_38 + 2),(ulong)uVar1,
                           (ulong)*(uint *)(local_38 + 2));
      if (lVar2 != 0) {
        FUN_00112712(&local_28,0x2a);
        FUN_0011cc71(&local_28,&PTR_s_slirp_socket_00322c20,lVar2);
      }
    }
    local_38 = (long *)local_38[4];
  }
  FUN_00112712(&local_28,0);
  FUN_0011cc71(&local_28,&PTR_s_slirp_00322ca0,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



ulong slirp_state_load(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  long *local_38;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_3;
  local_20 = param_4;
  do {
    cVar1 = FUN_001126ba(&local_28);
    if (cVar1 == '\0') {
      uVar4 = FUN_0011cd2e(&local_28,&PTR_s_slirp_00322ca0,param_1,(ulong)param_2,param_5,param_6,
                           param_4,param_3);
      goto LAB_00112627;
    }
    lVar3 = FUN_0010f694(param_1);
    uVar2 = FUN_0011cd2e(&local_28,&PTR_s_slirp_socket_00322c20,lVar3,(ulong)param_2,param_5,param_6
                         ,param_4,param_3);
    if ((int)uVar2 < 0) {
      uVar4 = (ulong)uVar2;
      goto LAB_00112627;
    }
    if ((*(uint *)(lVar3 + 0x4c) & *(uint *)(param_1 + 0x10)) != *(uint *)(param_1 + 0xc)) {
      uVar4 = 0xffffffea;
      goto LAB_00112627;
    }
    local_38 = *(long **)(param_1 + 0x80);
    while ((local_38 != (long *)0x0 &&
           (((*local_38 == 0 || (*(int *)(lVar3 + 0x4c) != *(int *)(local_38 + 2))) ||
            ((uint)*(ushort *)(lVar3 + 0x4a) != *(uint *)((long)local_38 + 0x14)))))) {
      local_38 = (long *)local_38[4];
    }
  } while (local_38 != (long *)0x0);
  uVar4 = 0xffffffea;
LAB_00112627:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 slirp_state_version(void)

{
  return 4;
}



ulong FUN_00112648(code **param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (**param_1)(param_2,param_3,param_1[1],param_2);
  return uVar1 & 0xffffffffffffff00 | (ulong)(param_3 == uVar1);
}



ulong FUN_00112681(code **param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (**param_1)(param_2,param_3,param_1[1],param_2);
  return uVar1 & 0xffffffffffffff00 | (ulong)(param_3 == uVar1);
}



ulong FUN_001126ba(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  byte local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = FUN_00112648(param_1,&local_11,1,&local_11);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)local_11;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void FUN_00112712(undefined8 param_1,undefined param_2)

{
  undefined local_14 [4];
  undefined8 local_10;
  
  local_14[0] = param_2;
  local_10 = param_1;
  FUN_00112681(param_1,local_14,1,local_14);
  return;
}



ulong FUN_0011273d(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ushort local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = FUN_00112648(param_1,&local_12,2,&local_12);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(ushort)(local_12 << 8 | local_12 >> 8);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void FUN_00112799(undefined8 param_1,ushort param_2)

{
  ushort local_14 [2];
  undefined8 local_10;
  
  local_14[0] = param_2 << 8 | param_2 >> 8;
  local_10 = param_1;
  FUN_00112681(param_1,local_14,2,local_14);
  return;
}



ulong FUN_001127d1(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = FUN_00112648(param_1,&local_14,4,&local_14);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(local_14 >> 0x18 |
                   local_14 << 0x18 | (local_14 & 0xff00) << 8 | local_14 >> 8 & 0xff00);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void FUN_0011284f(undefined8 param_1,uint param_2)

{
  uint local_14;
  undefined8 local_10;
  
  local_14 = param_2 >> 0x18 | param_2 << 0x18 | (param_2 & 0xff00) << 8 | param_2 >> 8 & 0xff00;
  local_10 = param_1;
  FUN_00112681(param_1,&local_14,4,&local_14);
  return;
}



ulong FUN_001128a5(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  ushort local_12;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = FUN_00112648(param_1,&local_12,2,&local_12);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(ushort)(local_12 << 8 | local_12 >> 8);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void FUN_00112901(undefined8 param_1,ushort param_2)

{
  ushort local_14 [2];
  undefined8 local_10;
  
  local_14[0] = param_2 << 8 | param_2 >> 8;
  local_10 = param_1;
  FUN_00112681(param_1,local_14,2,local_14);
  return;
}



ulong FUN_00112939(undefined8 param_1)

{
  char cVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = FUN_00112648(param_1,&local_14,4,&local_14);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)(local_14 >> 0x18 |
                   local_14 << 0x18 | (local_14 & 0xff00) << 8 | local_14 >> 8 & 0xff00);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar2;
}



void FUN_001129b7(undefined8 param_1,uint param_2)

{
  uint local_14;
  undefined8 local_10;
  
  local_14 = param_2 >> 0x18 | param_2 << 0x18 | (param_2 & 0xff00) << 8 | param_2 >> 8 & 0xff00;
  local_10 = param_1;
  FUN_00112681(param_1,&local_14,4,&local_14);
  return;
}



ulong FUN_00112a0d(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 *puVar9;
  
  lVar2 = param_1[0xe];
  if (param_2 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*param_1;
    while ((param_1 != puVar9 &&
           (*(int *)((long)puVar9 + 0x44) - *(int *)((long)param_2 + 0x34) < 1))) {
      puVar9 = (undefined8 *)*puVar9;
    }
    if (param_1 != (undefined8 *)puVar9[1]) {
      puVar9 = (undefined8 *)puVar9[1];
      uVar8 = (*(int *)((long)puVar9 + 0x44) + (uint)*(ushort *)((long)puVar9 + 0x3e)) -
              *(int *)((long)param_2 + 0x34);
      if (0 < (int)uVar8) {
        if ((int)(uint)*(ushort *)((long)param_2 + 0x2e) <= (int)uVar8) {
          FUN_0010a4f0(param_3);
          goto LAB_00112bc9;
        }
        FUN_0010a875(param_3,(ulong)uVar8);
        *(short *)((long)param_2 + 0x2e) = *(short *)((long)param_2 + 0x2e) - (short)uVar8;
        *(int *)((long)param_2 + 0x34) = *(int *)((long)param_2 + 0x34) + uVar8;
      }
      puVar9 = (undefined8 *)*puVar9;
    }
    *param_2 = param_3;
    while (param_1 != puVar9) {
      uVar8 = (*(int *)((long)param_2 + 0x34) + (uint)*(ushort *)((long)param_2 + 0x2e)) -
              *(int *)((long)puVar9 + 0x44);
      if ((int)uVar8 < 1) break;
      if ((int)uVar8 < (int)(uint)*(ushort *)((long)puVar9 + 0x3e)) {
        *(int *)((long)puVar9 + 0x44) = *(int *)((long)puVar9 + 0x44) + uVar8;
        *(short *)((long)puVar9 + 0x3e) = *(short *)((long)puVar9 + 0x3e) - (short)uVar8;
        FUN_0010a875(puVar9[2],(ulong)uVar8);
        break;
      }
      puVar9 = (undefined8 *)*puVar9;
      uVar4 = *(undefined8 *)(puVar9[1] + 0x10);
      FUN_0010ab7f(puVar9[1]);
      FUN_0010a4f0(uVar4);
    }
    FUN_0010ab4c(param_2 + -2,puVar9[1],param_2 + -2);
  }
LAB_00112bc9:
  if (*(short *)(param_1 + 2) < 4) {
    uVar7 = 0;
  }
  else {
    puVar3 = (undefined8 *)*param_1;
    puVar9 = puVar3 + 2;
    if ((param_1 == puVar3) || (*(int *)((long)puVar3 + 0x44) != *(int *)(param_1 + 0x13))) {
      uVar7 = 0;
    }
    else {
      if ((*(short *)(param_1 + 2) == 3) && (*(short *)((long)puVar3 + 0x3e) != 0)) {
        uVar7 = 0;
      }
      else {
        do {
          *(uint *)(param_1 + 0x13) =
               (uint)*(ushort *)((long)puVar9 + 0x2e) + *(int *)(param_1 + 0x13);
          bVar1 = *(byte *)((long)puVar9 + 0x3d);
          FUN_0010ab7f(puVar9 + -2);
          uVar4 = *puVar9;
          lVar5 = puVar9[-2];
          puVar9 = (undefined8 *)(lVar5 + 0x10);
          if ((*(uint *)(lVar2 + 0x14c) & 0x10) == 0) {
            if (*(char *)(lVar2 + 0x149) == '\0') {
              FUN_0010c59c(lVar2,uVar4,uVar4);
            }
            else {
              iVar6 = FUN_00117d52(lVar2,uVar4,uVar4);
              if (iVar6 != 0) {
                FUN_0010c59c(lVar2,uVar4,uVar4);
              }
            }
          }
          else {
            FUN_0010a4f0(uVar4);
          }
        } while ((puVar9 != param_1) && (*(int *)(lVar5 + 0x44) == *(int *)(param_1 + 0x13)));
        uVar7 = (ulong)((uint)bVar1 & 1);
      }
    }
  }
  return uVar7;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_00112cfb(long param_1,uint param_2,long param_3,ushort param_4)

{
  ushort __hostshort;
  short sVar1;
  uint uVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  byte bVar7;
  undefined uVar8;
  uint16_t uVar9;
  uint32_t uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  char *pcVar15;
  uint *puVar16;
  uint uVar17;
  long **pplVar18;
  void *unaff_R12;
  byte bVar19;
  uint uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  undefined8 uVar22;
  short local_234;
  long local_230;
  byte local_221;
  uint local_220;
  uint local_21c;
  uint local_218;
  int local_20c;
  uint local_208;
  int local_204;
  uint local_200;
  long local_1e8;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  ushort local_148;
  undefined6 uStack326;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ushort local_c8;
  undefined6 uStack198;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_234 = (short)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1e8 = 0;
  local_220 = 0;
  pplVar18 = (long **)0x0;
  bVar6 = false;
  local_20c = 0;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_input...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p  iphlen = %2d  inso = %p",param_1,(ulong)param_2,param_3);
  }
  if (param_1 == 0) {
    local_1d0 = *(long *)(param_3 + 0x28);
    pplVar18 = *(long ***)(param_3 + 0x150);
    local_230 = *(long *)(param_3 + 0x30);
    *(undefined8 *)(param_3 + 0x30) = 0;
    unaff_R12 = *(void **)(param_3 + 0x38);
    local_208 = (uint)*(ushort *)((long)unaff_R12 + 0x3e);
    bVar19 = *(byte *)((long)unaff_R12 + 0x3d);
    local_1e0 = param_3;
    if ((*(uint *)(param_3 + 0x14c) & 1) == 0) goto LAB_00114019;
    uVar22 = 0x11400d;
    pplVar18 = (long **)FUN_00117098(pplVar18);
    goto LAB_00114eee;
  }
  local_1d0 = *(long *)(param_1 + 0x40);
  puVar3 = *(ulong **)(param_1 + 0x30);
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  if (param_4 == 2) {
    if (0x14 < param_2) {
      FUN_00109e0e(param_1,0);
      local_234 = 0x14;
    }
    uVar5 = *puVar3;
    local_190 = puVar3[1];
    local_188 = *(undefined4 *)(puVar3 + 2);
    local_198._2_2_ = (short)(uVar5 >> 0x10);
    local_198._0_4_ = CONCAT22(local_198._2_2_ + local_234,(short)uVar5);
    local_198 = uVar5 & 0xffffffff00000000 | (ulong)(uint)local_198;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x1c;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x1c;
    unaff_R12 = *(void **)(param_1 + 0x30);
    __hostshort = *(ushort *)((long)puVar3 + 2);
    local_21c = (uint)__hostshort;
    *(undefined8 *)((long)unaff_R12 + -8) = 0;
    *(undefined8 *)((long)unaff_R12 + -0x10) = *(undefined8 *)((long)unaff_R12 + -8);
    memset(unaff_R12,0,8);
    memset((void *)((long)unaff_R12 + 8),0,0x24);
    *(undefined2 *)((long)unaff_R12 + 0x2c) = 0;
    local_190._4_4_ = (undefined4)(local_190 >> 0x20);
    *(undefined4 *)((long)unaff_R12 + 8) = local_190._4_4_;
    *(undefined4 *)((long)unaff_R12 + 0xc) = local_188;
    local_190._1_1_ = (undefined)(local_190 >> 8);
    *(undefined *)((long)unaff_R12 + 0x11) = local_190._1_1_;
    uVar9 = htons(__hostshort);
    *(uint16_t *)((long)unaff_R12 + 0x2e) = uVar9;
  }
  else {
    if (param_4 == 10) {
      local_178 = *puVar4;
      local_170 = puVar4[1];
      local_168 = puVar4[2];
      local_160 = puVar4[3];
      local_158 = puVar4[4];
      *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -8;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 8;
      unaff_R12 = *(void **)(param_1 + 0x30);
      __hostshort = *(ushort *)((long)puVar4 + 4);
      local_21c = (uint)__hostshort;
      *(undefined8 *)((long)unaff_R12 + -8) = 0;
      *(undefined8 *)((long)unaff_R12 + -0x10) = *(undefined8 *)((long)unaff_R12 + -8);
      memset(unaff_R12,0,8);
      memset((void *)((long)unaff_R12 + 8),0,0x24);
      *(undefined2 *)((long)unaff_R12 + 0x2c) = 0;
      *(undefined8 *)((long)unaff_R12 + 8) = local_170;
      *(undefined8 *)((long)unaff_R12 + 0x10) = local_168;
      *(undefined8 *)((long)unaff_R12 + 0x18) = local_160;
      *(undefined8 *)((long)unaff_R12 + 0x20) = local_158;
      local_178._6_1_ = (undefined)((ulong)local_178 >> 0x30);
      *(undefined *)((long)unaff_R12 + 0x29) = local_178._6_1_;
      uVar9 = htons(__hostshort);
      *(uint16_t *)((long)unaff_R12 + 0x2e) = uVar9;
    }
    else {
      g_assertion_message_expr("Slirp","../src/tcp_input.c",0x134,"tcp_input",0);
    }
  }
  iVar13 = FUN_001044c3(param_1,(ulong)(local_21c + 0x30),(ulong)(local_21c + 0x30));
  if (iVar13 == 0) {
    bVar7 = *(byte *)((long)unaff_R12 + 0x3c) >> 4;
    uVar11 = (uint)bVar7 * 4;
    if ((0x13 < uVar11) && ((int)uVar11 <= (int)local_21c)) {
      *(short *)((long)unaff_R12 + 0x2e) = (short)local_21c + (ushort)bVar7 * -4;
      if (0x14 < uVar11) {
        local_220 = uVar11 - 0x14;
        local_1e8 = *(long *)(param_1 + 0x30) + 0x44;
      }
      bVar19 = *(byte *)((long)unaff_R12 + 0x3d);
      uVar10 = ntohl(*(uint32_t *)((long)unaff_R12 + 0x34));
      *(uint32_t *)((long)unaff_R12 + 0x34) = uVar10;
      uVar10 = ntohl(*(uint32_t *)((long)unaff_R12 + 0x38));
      *(uint32_t *)((long)unaff_R12 + 0x38) = uVar10;
      uVar9 = ntohs(*(uint16_t *)((long)unaff_R12 + 0x3e));
      *(uint16_t *)((long)unaff_R12 + 0x3e) = uVar9;
      uVar9 = ntohs(*(uint16_t *)((long)unaff_R12 + 0x42));
      *(uint16_t *)((long)unaff_R12 + 0x42) = uVar9;
      *(long *)(param_1 + 0x30) = (long)(int)uVar11 + 0x30 + *(long *)(param_1 + 0x30);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (uint)bVar7 * -4 + -0x30;
      while( true ) {
        local_148 = param_4;
        local_c8 = param_4;
        if ((param_4 != 2) && (param_4 != 10)) {
          g_assertion_message_expr("Slirp","../src/tcp_input.c",0x172,"tcp_input",0);
        }
        uVar22 = 0x11341d;
        local_1e0 = FUN_0010f5a7(local_1d0 + 0x368,local_1d0 + 0x1c0,&local_148);
        local_230 = param_1;
        if (local_1e0 == 0) {
          if (*(int *)(local_1d0 + 0x7c) != 0) {
            local_1d8 = *(long *)(local_1d0 + 0x80);
            while ((local_1d8 != 0 &&
                   ((*(uint *)(local_1d8 + 0x14) != (uint)*(ushort *)((long)unaff_R12 + 0x32) ||
                    (*(int *)((long)unaff_R12 + 0xc) != *(int *)(local_1d8 + 0x10)))))) {
              local_1d8 = *(long *)(local_1d8 + 0x20);
            }
            if (local_1d8 == 0) goto LAB_00114eee;
          }
          if ((bVar19 & 0x37) != 2) goto LAB_00114eee;
          local_1e0 = FUN_0010f694(local_1d0);
          iVar13 = FUN_00117b83(local_1e0);
          if (iVar13 < 0) {
            uVar22 = 0x1134f5;
            g_free(local_1e0);
            goto LAB_00114eee;
          }
          FUN_0010c48d(local_1e0 + 0x188,0x20000);
          FUN_0010c48d(local_1e0 + 0x168);
          *(undefined8 *)(local_1e0 + 200) = CONCAT62(uStack326,local_148);
          *(undefined8 *)(local_1e0 + 0xd0) = local_140;
          *(undefined8 *)(local_1e0 + 0xd8) = local_138;
          *(undefined8 *)(local_1e0 + 0xe0) = local_130;
          *(undefined8 *)(local_1e0 + 0xe8) = local_128;
          *(undefined8 *)(local_1e0 + 0xf0) = local_120;
          *(undefined8 *)(local_1e0 + 0xf8) = local_118;
          *(undefined8 *)(local_1e0 + 0x100) = local_110;
          *(undefined8 *)(local_1e0 + 0x108) = local_108;
          *(undefined8 *)(local_1e0 + 0x110) = local_100;
          *(undefined8 *)(local_1e0 + 0x118) = local_f8;
          *(undefined8 *)(local_1e0 + 0x120) = local_f0;
          *(undefined8 *)(local_1e0 + 0x128) = local_e8;
          *(undefined8 *)(local_1e0 + 0x130) = local_e0;
          *(undefined8 *)(local_1e0 + 0x138) = local_d8;
          *(undefined8 *)(local_1e0 + 0x140) = local_d0;
          *(undefined8 *)(local_1e0 + 0x48) = CONCAT62(uStack198,local_c8);
          *(undefined8 *)(local_1e0 + 0x50) = local_c0;
          *(undefined8 *)(local_1e0 + 0x58) = local_b8;
          *(undefined8 *)(local_1e0 + 0x60) = local_b0;
          *(undefined8 *)(local_1e0 + 0x68) = local_a8;
          *(undefined8 *)(local_1e0 + 0x70) = local_a0;
          *(undefined8 *)(local_1e0 + 0x78) = local_98;
          *(undefined8 *)(local_1e0 + 0x80) = local_90;
          *(undefined8 *)(local_1e0 + 0x88) = local_88;
          *(undefined8 *)(local_1e0 + 0x90) = local_80;
          *(undefined8 *)(local_1e0 + 0x98) = local_78;
          *(undefined8 *)(local_1e0 + 0xa0) = local_70;
          *(undefined8 *)(local_1e0 + 0xa8) = local_68;
          *(undefined8 *)(local_1e0 + 0xb0) = local_60;
          *(undefined8 *)(local_1e0 + 0xb8) = local_58;
          *(undefined8 *)(local_1e0 + 0xc0) = local_50;
          uVar22 = 0x1136de;
          uVar8 = FUN_00117be5(local_1e0);
          *(undefined *)(local_1e0 + 0x148) = uVar8;
          if (*(char *)(local_1e0 + 0x148) == '\0') {
            if (param_4 == 2) {
              *(undefined *)(local_1e0 + 0x148) = *(undefined *)((long)unaff_R12 + 1);
            }
            else {
              if (param_4 != 10) {
                uVar22 = 0x11374c;
                g_assertion_message_expr("Slirp","../src/tcp_input.c",0x1af,"tcp_input",0);
              }
            }
          }
          *(undefined2 *)(*(long *)(local_1e0 + 0x150) + 0x10) = 1;
        }
        if ((*(uint *)(local_1e0 + 0x14c) & 2) != 0) goto LAB_00114fb0;
        pplVar18 = *(long ***)(local_1e0 + 0x150);
        if (pplVar18 == (long **)0x0) goto LAB_00114eee;
        if (*(short *)(pplVar18 + 2) == 0) goto LAB_00114fb0;
        __hostshort = *(ushort *)((long)unaff_R12 + 0x3e);
        local_208 = (uint)__hostshort;
        *(undefined2 *)((long)pplVar18 + 0xb4) = 0;
        if (DAT_003250ec == '\0') {
          *(undefined2 *)((long)pplVar18 + 0x16) = 0x3840;
        }
        else {
          *(undefined2 *)((long)pplVar18 + 0x16) = 0x96;
        }
        if ((local_1e8 != 0) && (*(short *)(pplVar18 + 2) != 1)) {
          uVar22 = 0x113803;
          FUN_00114fe8(pplVar18,local_1e8,(ulong)local_220);
        }
        if ((((*(short *)(pplVar18 + 2) == 4) && ((bVar19 & 0x37) == 0x10)) &&
            (*(int *)((long)unaff_R12 + 0x34) == *(int *)(pplVar18 + 0x13))) &&
           (((__hostshort != 0 && (local_208 == *(uint *)(pplVar18 + 0x12))) &&
            (*(int *)((long)pplVar18 + 0x7c) == *(int *)(pplVar18 + 0x15))))) {
          if (*(short *)((long)unaff_R12 + 0x2e) == 0) {
            if (((0 < *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0xf)) &&
                (*(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0x15) < 1)) &&
               (*(uint *)(pplVar18 + 0x12) <= *(uint *)((long)pplVar18 + 0xac))) {
              if ((*(short *)((long)pplVar18 + 0xb6) != 0) &&
                 (0 < *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0x17))) {
                FUN_0011514f(pplVar18,(ulong)(uint)(int)*(short *)((long)pplVar18 + 0xb6));
              }
              uVar11 = *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0xf);
              FUN_001120b2(local_1e0,(ulong)uVar11,(ulong)uVar11);
              *(undefined4 *)(pplVar18 + 0xf) = *(undefined4 *)((long)unaff_R12 + 0x38);
              FUN_0010a4f0(param_1);
              if (*(int *)(pplVar18 + 0xf) == *(int *)(pplVar18 + 0x15)) {
                *(undefined2 *)((long)pplVar18 + 0x12) = 0;
              }
              else {
                if (*(short *)((long)pplVar18 + 0x14) == 0) {
                  *(undefined2 *)((long)pplVar18 + 0x12) = *(undefined2 *)((long)pplVar18 + 0x1c);
                }
              }
              if (*(int *)(local_1e0 + 0x188) != 0) {
                FUN_00115563(pplVar18);
              }
              goto LAB_00114fc5;
            }
          }
          else {
            if (((*(int *)((long)unaff_R12 + 0x38) == *(int *)(pplVar18 + 0xf)) &&
                (pplVar18 == (long **)*pplVar18)) &&
               ((uint)*(ushort *)((long)unaff_R12 + 0x2e) <=
                (uint)(*(int *)(local_1e0 + 0x16c) - *(int *)(local_1e0 + 0x168)))) {
              *(uint *)(pplVar18 + 0x13) =
                   (uint)*(ushort *)((long)unaff_R12 + 0x2e) + *(int *)(pplVar18 + 0x13);
              if (*(char *)(local_1e0 + 0x149) == '\0') {
                FUN_0010c59c(local_1e0,param_1,param_1);
              }
              else {
                iVar13 = FUN_00117d52(local_1e0,param_1,param_1);
                if (iVar13 != 0) {
                  FUN_0010c59c(local_1e0,param_1,param_1);
                }
              }
              *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
              FUN_00115563(pplVar18);
              goto LAB_00114fc5;
            }
          }
        }
        local_204 = *(int *)(local_1e0 + 0x16c) - *(int *)(local_1e0 + 0x168);
        if (local_204 < 0) {
          local_204 = 0;
        }
        iVar13 = *(int *)((long)pplVar18 + 0xa4) - *(int *)(pplVar18 + 0x13);
        if (iVar13 <= local_204) {
          iVar13 = local_204;
        }
        *(int *)((long)pplVar18 + 0x94) = iVar13;
        if (*(short *)(pplVar18 + 2) == 1) {
          if ((bVar19 & 4) != 0) goto LAB_00114fb0;
          if ((bVar19 & 0x10) != 0) goto LAB_00114eee;
          if ((bVar19 & 2) == 0) goto LAB_00114fb0;
          if (((param_4 != 2) ||
              ((*(uint *)(local_1e0 + 0x4c) & *(uint *)(local_1d0 + 0x10)) !=
               *(uint *)(local_1d0 + 0xc))) ||
             ((*(int *)(local_1e0 + 0x4c) == *(int *)(local_1d0 + 0x14) ||
              (*(int *)(local_1e0 + 0x4c) == *(int *)(local_1d0 + 0x40))))) goto LAB_00113bf2;
          local_1d8 = *(long *)(local_1d0 + 0x80);
          goto LAB_00113bce;
        }
        if (*(short *)(pplVar18 + 2) == 2) {
          if (((bVar19 & 0x10) != 0) &&
             ((*(int *)((long)unaff_R12 + 0x38) - *(int *)((long)pplVar18 + 0x8c) < 1 ||
              (0 < *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0x15)))))
          goto LAB_00114eee;
          if ((bVar19 & 4) != 0) {
            if ((bVar19 & 0x10) != 0) {
              FUN_00116fc0(pplVar18,0);
            }
            goto LAB_00114fb0;
          }
          if ((bVar19 & 2) == 0) goto LAB_00114fb0;
          if (((bVar19 & 0x10) != 0) &&
             (*(undefined4 *)(pplVar18 + 0xf) = *(undefined4 *)((long)unaff_R12 + 0x38),
             *(int *)((long)pplVar18 + 0x7c) - *(int *)(pplVar18 + 0xf) < 0)) {
            *(undefined4 *)((long)pplVar18 + 0x7c) = *(undefined4 *)(pplVar18 + 0xf);
          }
          *(undefined2 *)((long)pplVar18 + 0x12) = 0;
          *(undefined4 *)(pplVar18 + 0x14) = *(undefined4 *)((long)unaff_R12 + 0x34);
          *(int *)(pplVar18 + 0x13) = *(int *)(pplVar18 + 0x14) + 1;
          *(undefined4 *)((long)pplVar18 + 0xa4) = *(undefined4 *)(pplVar18 + 0x13);
          *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
          if (((bVar19 & 0x10) == 0) ||
             (*(int *)(pplVar18 + 0xf) - *(int *)((long)pplVar18 + 0x8c) < 1)) {
            *(undefined2 *)(pplVar18 + 2) = 3;
          }
          else {
            FUN_00111af7(local_1e0);
            *(undefined2 *)(pplVar18 + 2) = 4;
            FUN_00112a0d(pplVar18,0,0);
            if (*(short *)((long)pplVar18 + 0xb6) != 0) {
              FUN_0011514f(pplVar18,(ulong)(uint)(int)*(short *)((long)pplVar18 + 0xb6));
            }
          }
          goto LAB_0011422e;
        }
        local_218 = *(int *)(pplVar18 + 0x13) - *(int *)((long)unaff_R12 + 0x34);
        if (0 < (int)local_218) {
          if ((bVar19 & 2) != 0) {
            *(int *)((long)unaff_R12 + 0x34) = *(int *)((long)unaff_R12 + 0x34) + 1;
            if (*(ushort *)((long)unaff_R12 + 0x42) < 2) {
              bVar19 = bVar19 & 0xdd;
            }
            else {
              *(short *)((long)unaff_R12 + 0x42) = *(short *)((long)unaff_R12 + 0x42) + -1;
              bVar19 = bVar19 & 0xfd;
            }
            local_218 = local_218 - 1;
          }
          if (((int)(uint)*(ushort *)((long)unaff_R12 + 0x2e) < (int)local_218) ||
             ((local_218 == (uint)*(ushort *)((long)unaff_R12 + 0x2e) && ((bVar19 & 1) == 0)))) {
            bVar19 = bVar19 & 0xfe;
            *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
            local_218 = (uint)*(ushort *)((long)unaff_R12 + 0x2e);
          }
          uVar22 = 0x114376;
          FUN_0010a875(param_1);
          *(int *)((long)unaff_R12 + 0x34) = local_218 + *(int *)((long)unaff_R12 + 0x34);
          *(short *)((long)unaff_R12 + 0x2e) = *(short *)((long)unaff_R12 + 0x2e) - (short)local_218
          ;
          if ((int)local_218 < (int)(uint)*(ushort *)((long)unaff_R12 + 0x42)) {
            *(short *)((long)unaff_R12 + 0x42) =
                 *(short *)((long)unaff_R12 + 0x42) - (short)local_218;
          }
          else {
            bVar19 = bVar19 & 0xdf;
            *(undefined2 *)((long)unaff_R12 + 0x42) = 0;
          }
        }
        if ((((*(uint *)(local_1e0 + 0x14c) & 1) != 0) && (5 < *(short *)(pplVar18 + 2))) &&
           (*(short *)((long)unaff_R12 + 0x2e) != 0)) {
          uVar22 = 0x114400;
          pplVar18 = (long **)FUN_00117098(pplVar18);
          goto LAB_00114eee;
        }
        iVar13 = (*(int *)((long)unaff_R12 + 0x34) + (uint)*(ushort *)((long)unaff_R12 + 0x2e)) -
                 (*(int *)((long)pplVar18 + 0x94) + *(int *)(pplVar18 + 0x13));
        if (iVar13 < 1) goto LAB_001144f6;
        if (iVar13 < (int)(uint)*(ushort *)((long)unaff_R12 + 0x2e)) goto LAB_001144c3;
        if ((((bVar19 & 2) == 0) || (*(short *)(pplVar18 + 2) != 10)) ||
           (*(int *)((long)unaff_R12 + 0x34) - *(int *)(pplVar18 + 0x13) < 1)) break;
        local_20c = *(int *)(pplVar18 + 0x13) + 0x1f400;
        pplVar18 = (long **)FUN_00117098(pplVar18);
      }
      if ((*(int *)((long)pplVar18 + 0x94) != 0) ||
         (*(int *)((long)unaff_R12 + 0x34) != *(int *)(pplVar18 + 0x13))) goto LAB_00114eac;
      *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
LAB_001144c3:
      uVar22 = 0x1144de;
      FUN_0010a875(param_1);
      *(short *)((long)unaff_R12 + 0x2e) = *(short *)((long)unaff_R12 + 0x2e) - (short)iVar13;
      bVar19 = bVar19 & 0xf6;
LAB_001144f6:
      if ((bVar19 & 4) == 0) {
switchD_0011452e_caseD_8:
        if ((bVar19 & 2) != 0) {
          uVar22 = 0x114567;
          pplVar18 = (long **)FUN_00116fc0(pplVar18,0);
LAB_00114eee:
          if ((bVar19 & 0x10) == 0) {
            if ((bVar19 & 2) != 0) {
              *(short *)((long)unaff_R12 + 0x2e) = *(short *)((long)unaff_R12 + 0x2e) + 1;
            }
            FUN_00116709(pplVar18,unaff_R12,local_230,
                         (ulong)(*(int *)((long)unaff_R12 + 0x34) +
                                (uint)*(ushort *)((long)unaff_R12 + 0x2e)),0,0x14,(ulong)param_4,
                         uVar22);
          }
          else {
            FUN_00116709(pplVar18,unaff_R12,local_230,0,(ulong)*(uint *)((long)unaff_R12 + 0x38),4,
                         (ulong)param_4,uVar22);
          }
          goto LAB_00114fc5;
        }
        if ((bVar19 & 0x10) != 0) {
          sVar1 = *(short *)(pplVar18 + 2);
          if (sVar1 == 3) {
            if ((0 < *(int *)(pplVar18 + 0xf) - *(int *)((long)unaff_R12 + 0x38)) ||
               (0 < *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0x15)))
            goto LAB_00114eee;
            *(undefined2 *)(pplVar18 + 2) = 4;
            *(undefined4 *)(pplVar18 + 0xf) = *(undefined4 *)((long)unaff_R12 + 0x38);
            if ((*(uint *)(local_1e0 + 0x14c) & 0x80) == 0) {
              FUN_00111af7(local_1e0);
            }
            else {
              iVar13 = FUN_001190aa(local_1e0);
              if (iVar13 == 1) {
                FUN_00111af7(local_1e0);
                *(uint *)(local_1e0 + 0x14c) = *(uint *)(local_1e0 + 0x14c) & 0xffffff7f;
              }
              else {
                if (iVar13 == 2) {
                  *(uint *)(local_1e0 + 0x14c) = *(uint *)(local_1e0 + 0x14c) & 0xf000;
                  *(uint *)(local_1e0 + 0x14c) = *(uint *)(local_1e0 + 0x14c) | 1;
                }
                else {
                  bVar6 = true;
                  *(undefined2 *)(pplVar18 + 2) = 6;
                }
              }
            }
            FUN_00112a0d(pplVar18,0,0);
            *(int *)((long)pplVar18 + 0x84) = *(int *)((long)unaff_R12 + 0x34) + -1;
LAB_00114881:
            if ((3 < *(short *)((long)pplVar18 + 0x1e)) &&
               (*(uint *)(pplVar18 + 0x16) < *(uint *)((long)pplVar18 + 0xac))) {
              *(undefined4 *)((long)pplVar18 + 0xac) = *(undefined4 *)(pplVar18 + 0x16);
            }
            *(undefined2 *)((long)pplVar18 + 0x1e) = 0;
            if (0 < *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0x15)) {
LAB_00114eac:
              if ((bVar19 & 4) == 0) {
                FUN_0010a4f0(param_1);
                *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
                FUN_00115563(pplVar18);
                goto LAB_00114fc5;
              }
              goto LAB_00114fb0;
            }
            uVar11 = *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0xf);
            if ((*(short *)((long)pplVar18 + 0xb6) != 0) &&
               (0 < *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0x17))) {
              FUN_0011514f(pplVar18,(ulong)(uint)(int)*(short *)((long)pplVar18 + 0xb6));
            }
            if (*(int *)((long)unaff_R12 + 0x38) == *(int *)(pplVar18 + 0x15)) {
              *(undefined2 *)((long)pplVar18 + 0x12) = 0;
              bVar6 = true;
            }
            else {
              if (*(short *)((long)pplVar18 + 0x14) == 0) {
                *(undefined2 *)((long)pplVar18 + 0x12) = *(undefined2 *)((long)pplVar18 + 0x1c);
              }
            }
            uVar2 = *(uint *)((long)pplVar18 + 0xac);
            uVar20 = (uint)*(ushort *)(pplVar18 + 4);
            if (*(uint *)(pplVar18 + 0x16) < uVar2) {
              uVar20 = (uVar20 * uVar20) / uVar2;
            }
            uVar17 = 0xffff << (*(byte *)((long)pplVar18 + 0xcc) & 0x1f);
            uVar12 = uVar2 + uVar20;
            if (uVar17 <= uVar2 + uVar20) {
              uVar12 = uVar17;
            }
            *(uint *)((long)pplVar18 + 0xac) = uVar12;
            bVar21 = uVar11 <= *(uint *)(local_1e0 + 0x188);
            if (bVar21) {
              FUN_001120b2(local_1e0,(ulong)uVar11,(ulong)uVar11);
              *(uint *)(pplVar18 + 0x12) = *(int *)(pplVar18 + 0x12) - uVar11;
            }
            else {
              *(int *)(pplVar18 + 0x12) = *(int *)(pplVar18 + 0x12) - *(int *)(local_1e0 + 0x188);
              FUN_001120b2(local_1e0,(ulong)*(uint *)(local_1e0 + 0x188),
                           (ulong)*(uint *)(local_1e0 + 0x188));
            }
            bVar21 = !bVar21;
            *(undefined4 *)(pplVar18 + 0xf) = *(undefined4 *)((long)unaff_R12 + 0x38);
            if (*(int *)((long)pplVar18 + 0x7c) - *(int *)(pplVar18 + 0xf) < 0) {
              *(undefined4 *)((long)pplVar18 + 0x7c) = *(undefined4 *)(pplVar18 + 0xf);
            }
            sVar1 = *(short *)(pplVar18 + 2);
            if (sVar1 == 7) {
              if (bVar21) {
                *(undefined2 *)(pplVar18 + 2) = 10;
                FUN_0011949b(pplVar18);
                *(undefined2 *)(pplVar18 + 3) = 0x14;
              }
            }
            else {
              if (sVar1 < 8) {
                if ((sVar1 == 6) && (bVar21)) {
                  if ((*(uint *)(local_1e0 + 0x14c) & 8) != 0) {
                    *(undefined2 *)(pplVar18 + 3) = 0x4b0;
                  }
                  *(undefined2 *)(pplVar18 + 2) = 9;
                }
              }
              else {
                if (sVar1 == 8) {
                  if (bVar21) {
                    FUN_00117098(pplVar18);
                    goto LAB_00114fb0;
                  }
                }
                else {
                  if (sVar1 == 10) {
                    *(undefined2 *)(pplVar18 + 3) = 0x14;
                    goto LAB_00114eac;
                  }
                }
              }
            }
          }
          else {
            if ((2 < sVar1) && (sVar1 < 0xb)) {
              if (0 < *(int *)((long)unaff_R12 + 0x38) - *(int *)(pplVar18 + 0xf))
              goto LAB_00114881;
              if ((*(short *)((long)unaff_R12 + 0x2e) == 0) &&
                 (local_208 == *(uint *)(pplVar18 + 0x12))) {
                if ((DAT_003250e0 & 2) != 0) {
                  g_log("Slirp",0x80," dup ack  m = %p  so = %p",param_1,local_1e0);
                }
                if ((*(short *)((long)pplVar18 + 0x12) != 0) &&
                   (*(int *)((long)unaff_R12 + 0x38) == *(int *)(pplVar18 + 0xf))) {
                  *(short *)((long)pplVar18 + 0x1e) = *(short *)((long)pplVar18 + 0x1e) + 1;
                  if (*(short *)((long)pplVar18 + 0x1e) == 3) {
                    iVar13 = *(int *)((long)pplVar18 + 0x7c);
                    uVar11 = *(uint *)(pplVar18 + 0x12);
                    if (*(uint *)((long)pplVar18 + 0xac) <= *(uint *)(pplVar18 + 0x12)) {
                      uVar11 = *(uint *)((long)pplVar18 + 0xac);
                    }
                    __hostshort = *(ushort *)(pplVar18 + 4);
                    local_200 = (uVar11 >> 1) / (uint)__hostshort;
                    if (local_200 < 2) {
                      local_200 = 2;
                    }
                    *(uint *)(pplVar18 + 0x16) = *(ushort *)(pplVar18 + 4) * local_200;
                    *(undefined2 *)((long)pplVar18 + 0x12) = 0;
                    *(undefined2 *)((long)pplVar18 + 0xb6) = 0;
                    *(undefined4 *)((long)pplVar18 + 0x7c) = *(undefined4 *)((long)unaff_R12 + 0x38)
                    ;
                    *(uint *)((long)pplVar18 + 0xac) = (uint)*(ushort *)(pplVar18 + 4);
                    FUN_00115563(pplVar18,(ulong)__hostshort,
                                 (ulong)(uVar11 >> 1) % (ulong)__hostshort);
                    *(int *)((long)pplVar18 + 0xac) =
                         *(int *)(pplVar18 + 0x16) +
                         (int)*(short *)((long)pplVar18 + 0x1e) * (uint)*(ushort *)(pplVar18 + 4);
                    if (0 < iVar13 - *(int *)((long)pplVar18 + 0x7c)) {
                      *(int *)((long)pplVar18 + 0x7c) = iVar13;
                    }
                  }
                  else {
                    if (*(short *)((long)pplVar18 + 0x1e) < 4) goto LAB_00114ad2;
                    *(int *)((long)pplVar18 + 0xac) =
                         (uint)*(ushort *)(pplVar18 + 4) + *(int *)((long)pplVar18 + 0xac);
                    FUN_00115563(pplVar18);
                  }
                  goto LAB_00114fb0;
                }
                *(undefined2 *)((long)pplVar18 + 0x1e) = 0;
              }
              else {
                *(undefined2 *)((long)pplVar18 + 0x1e) = 0;
              }
            }
          }
LAB_00114ad2:
          if (((bVar19 & 0x10) != 0) &&
             ((*(int *)((long)pplVar18 + 0x84) - *(int *)((long)unaff_R12 + 0x34) < 0 ||
              ((*(int *)((long)pplVar18 + 0x84) == *(int *)((long)unaff_R12 + 0x34) &&
               ((*(int *)(pplVar18 + 0x11) - *(int *)((long)unaff_R12 + 0x38) < 0 ||
                ((*(int *)(pplVar18 + 0x11) == *(int *)((long)unaff_R12 + 0x38) &&
                 (*(uint *)(pplVar18 + 0x12) < local_208)))))))))) {
            *(uint *)(pplVar18 + 0x12) = local_208;
            *(undefined4 *)((long)pplVar18 + 0x84) = *(undefined4 *)((long)unaff_R12 + 0x34);
            *(undefined4 *)(pplVar18 + 0x11) = *(undefined4 *)((long)unaff_R12 + 0x38);
            if (*(uint *)((long)pplVar18 + 0xc4) < *(uint *)(pplVar18 + 0x12)) {
              *(undefined4 *)((long)pplVar18 + 0xc4) = *(undefined4 *)(pplVar18 + 0x12);
            }
            bVar6 = true;
          }
          if ((((bVar19 & 0x20) == 0) || (*(short *)((long)unaff_R12 + 0x42) == 0)) ||
             (9 < *(short *)(pplVar18 + 2))) {
            if (0 < *(int *)(pplVar18 + 0x13) - *(int *)((long)pplVar18 + 0x9c)) {
              *(undefined4 *)((long)pplVar18 + 0x9c) = *(undefined4 *)(pplVar18 + 0x13);
            }
          }
          else {
            if (*(uint *)(local_1e0 + 0x16c) <
                (uint)*(ushort *)((long)unaff_R12 + 0x42) + *(int *)(local_1e0 + 0x168)) {
              *(undefined2 *)((long)unaff_R12 + 0x42) = 0;
              bVar19 = bVar19 & 0xdf;
            }
            else {
              if (0 < (int)((*(int *)((long)unaff_R12 + 0x34) +
                            (uint)*(ushort *)((long)unaff_R12 + 0x42)) -
                           *(int *)((long)pplVar18 + 0x9c))) {
                *(int *)((long)pplVar18 + 0x9c) =
                     (uint)*(ushort *)((long)unaff_R12 + 0x42) + *(int *)((long)unaff_R12 + 0x34);
                *(int *)(local_1e0 + 0x40) =
                     (*(int *)((long)pplVar18 + 0x9c) - *(int *)(pplVar18 + 0x13)) +
                     *(int *)(local_1e0 + 0x168);
                *(int *)((long)pplVar18 + 0x9c) =
                     (uint)*(ushort *)((long)unaff_R12 + 0x42) + *(int *)((long)unaff_R12 + 0x34);
              }
            }
          }
          if (((*(short *)((long)unaff_R12 + 0x2e) != 0) &&
              (*(ushort *)((long)unaff_R12 + 0x2e) < 6)) &&
             (*(char *)((long)unaff_R12 + 0x44) == '\x1b')) {
            *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
          }
          if (((*(short *)((long)unaff_R12 + 0x2e) == 0) && ((bVar19 & 1) == 0)) ||
             (9 < *(short *)(pplVar18 + 2))) {
            FUN_0010a4f0(local_230);
            uVar11 = 0;
          }
          else {
            if (((*(int *)((long)unaff_R12 + 0x34) == *(int *)(pplVar18 + 0x13)) &&
                (pplVar18 == (long **)*pplVar18)) && (*(short *)(pplVar18 + 2) == 4)) {
              *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 2;
              *(uint *)(pplVar18 + 0x13) =
                   (uint)*(ushort *)((long)unaff_R12 + 0x2e) + *(int *)(pplVar18 + 0x13);
              uVar11 = (uint)*(byte *)((long)unaff_R12 + 0x3d) & 1;
              if (*(char *)(local_1e0 + 0x149) == '\0') {
                FUN_0010c59c(local_1e0,local_230,local_230);
              }
              else {
                iVar13 = FUN_00117d52(local_1e0,local_230,local_230);
                if (iVar13 != 0) {
                  FUN_0010c59c(local_1e0,local_230,local_230);
                }
              }
            }
            else {
              uVar11 = FUN_00112a0d(pplVar18,unaff_R12,local_230);
              *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
            }
          }
          if ((uVar11 & 1) != 0) {
            if (*(short *)(pplVar18 + 2) < 10) {
              FUN_00111c8c(local_1e0);
              *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
              *(int *)(pplVar18 + 0x13) = *(int *)(pplVar18 + 0x13) + 1;
            }
            switch(*(undefined2 *)(pplVar18 + 2)) {
            case 3:
            case 4:
              if (*(char *)(local_1e0 + 0x149) == '\x01') {
                *(undefined2 *)(pplVar18 + 2) = 8;
              }
              else {
                *(undefined2 *)(pplVar18 + 2) = 5;
              }
              break;
            case 6:
              *(undefined2 *)(pplVar18 + 2) = 7;
              break;
            case 9:
              *(undefined2 *)(pplVar18 + 2) = 10;
              FUN_0011949b(pplVar18);
              *(undefined2 *)(pplVar18 + 3) = 0x14;
              break;
            case 10:
              *(undefined2 *)(pplVar18 + 3) = 0x14;
            }
          }
          if ((bVar6) || ((*(ushort *)((long)pplVar18 + 0x24) & 1) != 0)) {
            FUN_00115563(pplVar18);
          }
          goto LAB_00114fc5;
        }
      }
      else {
        switch(*(undefined2 *)(pplVar18 + 2)) {
        case 3:
        case 4:
        case 5:
        case 6:
        case 9:
          *(undefined2 *)(pplVar18 + 2) = 0;
          FUN_00117098(pplVar18);
          break;
        case 7:
        case 8:
        case 10:
          FUN_00117098(pplVar18);
          break;
        default:
          goto switchD_0011452e_caseD_8;
        }
      }
    }
  }
LAB_00114fb0:
  FUN_0010a4f0(param_1);
LAB_00114fc5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
LAB_00113bce:
  if (local_1d8 == 0) goto LAB_00113bd8;
  if ((*(uint *)(local_1d8 + 0x14) == (uint)*(ushort *)(local_1e0 + 0x4a)) &&
     (*(int *)(local_1e0 + 0x4c) == *(int *)(local_1d8 + 0x10))) {
    *(uint *)(local_1e0 + 0x14c) = *(uint *)(local_1e0 + 0x14c) | 0x80;
    goto LAB_00113bd8;
  }
  local_1d8 = *(long *)(local_1d8 + 0x20);
  goto LAB_00113bce;
LAB_00113bd8:
  if ((*(uint *)(local_1e0 + 0x14c) & 0x80) == 0) {
LAB_00113bf2:
    if ((*(byte *)(local_1e0 + 0x149) & 0x10) == 0) {
      iVar13 = FUN_00117310(local_1e0,(ulong)*(ushort *)(local_1e0 + 0x48),
                            (ulong)*(ushort *)(local_1e0 + 0x48));
      if ((((iVar13 == -1) && (piVar14 = __errno_location(), *piVar14 != 0xb)) &&
          (piVar14 = __errno_location(), *piVar14 != 0x73)) &&
         (piVar14 = __errno_location(), *piVar14 != 0xb)) {
        if ((DAT_003250e0 & 2) != 0) {
          piVar14 = __errno_location();
          pcVar15 = strerror(*piVar14);
          puVar16 = (uint *)__errno_location();
          g_log("Slirp",0x80," tcp fconnect errno = %d-%s",(ulong)*puVar16,pcVar15);
        }
        uVar22 = 0x113cd6;
        piVar14 = __errno_location();
        if (*piVar14 == 0x6f) {
          FUN_00116709(pplVar18,unaff_R12,param_1,(ulong)(*(int *)((long)unaff_R12 + 0x34) + 1),0,
                       0x14,(ulong)param_4,uVar22);
        }
        else {
          if (param_4 == 2) {
            local_221 = 0;
            piVar14 = __errno_location();
            if (*piVar14 == 0x71) {
              local_221 = 1;
            }
          }
          else {
            if (param_4 == 10) {
              local_221 = 0;
              piVar14 = __errno_location();
              if (*piVar14 == 0x71) {
                local_221 = 3;
              }
            }
            else {
              g_assertion_message_expr("Slirp","../src/tcp_input.c",0x293,"tcp_input",0);
            }
          }
          uVar10 = htonl(*(uint32_t *)((long)unaff_R12 + 0x34));
          *(uint32_t *)((long)unaff_R12 + 0x34) = uVar10;
          uVar10 = htonl(*(uint32_t *)((long)unaff_R12 + 0x38));
          *(uint32_t *)((long)unaff_R12 + 0x38) = uVar10;
          uVar9 = htons(*(uint16_t *)((long)unaff_R12 + 0x3e));
          *(uint16_t *)((long)unaff_R12 + 0x3e) = uVar9;
          uVar9 = htons(*(uint16_t *)((long)unaff_R12 + 0x42));
          *(uint16_t *)((long)unaff_R12 + 0x42) = uVar9;
          *(long *)(param_1 + 0x30) = (-0x30 - (long)(int)uVar11) + *(long *)(param_1 + 0x30);
          *(int *)(param_1 + 0x38) = uVar11 + *(int *)(param_1 + 0x38) + 0x30;
          if (param_4 == 2) {
            *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 0x1c;
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -0x1c;
            *puVar3 = local_198;
            puVar3[1] = local_190;
            *(undefined4 *)(puVar3 + 2) = local_188;
            piVar14 = __errno_location();
            pcVar15 = strerror(*piVar14);
            FUN_00108b39(param_1,3,(ulong)local_221,0,pcVar15);
          }
          else {
            if (param_4 == 10) {
              *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 8;
              *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -8;
              *puVar4 = local_178;
              puVar4[1] = local_170;
              puVar4[2] = local_168;
              puVar4[3] = local_160;
              puVar4[4] = local_158;
              FUN_00106903(param_1,1,(ulong)local_221);
            }
            else {
              g_assertion_message_expr("Slirp","../src/tcp_input.c",0x2af,"tcp_input",0);
            }
          }
        }
        FUN_00117098(pplVar18);
        FUN_0010a4f0(param_1);
      }
      else {
        *(long *)(local_1e0 + 0x30) = param_1;
        *(void **)(local_1e0 + 0x38) = unaff_R12;
        *(undefined2 *)((long)pplVar18 + 0x16) = 0x96;
        *(undefined2 *)(pplVar18 + 2) = 3;
        *(undefined4 *)(pplVar18 + 0x14) = *(undefined4 *)((long)unaff_R12 + 0x34);
        *(int *)(pplVar18 + 0x13) = *(int *)(pplVar18 + 0x14) + 1;
        *(undefined4 *)((long)pplVar18 + 0xa4) = *(undefined4 *)(pplVar18 + 0x13);
        FUN_0011659d(pplVar18);
      }
      goto LAB_00114fc5;
    }
    *(byte *)(local_1e0 + 0x149) = *(byte *)(local_1e0 + 0x149) & 0xef;
  }
LAB_00114019:
  FUN_0011659d(pplVar18);
  if (local_1e8 != 0) {
    FUN_00114fe8(pplVar18,local_1e8,(ulong)local_220);
  }
  if (local_20c == 0) {
    *(undefined4 *)((long)pplVar18 + 0x8c) = *(undefined4 *)(local_1d0 + 0x370);
  }
  else {
    *(int *)((long)pplVar18 + 0x8c) = local_20c;
  }
  *(int *)(local_1d0 + 0x370) = *(int *)(local_1d0 + 0x370) + 64000;
  *(undefined4 *)(pplVar18 + 0x14) = *(undefined4 *)((long)unaff_R12 + 0x34);
  *(undefined4 *)(pplVar18 + 0x10) = *(undefined4 *)((long)pplVar18 + 0x8c);
  *(undefined4 *)(pplVar18 + 0x15) = *(undefined4 *)(pplVar18 + 0x10);
  *(undefined4 *)((long)pplVar18 + 0x7c) = *(undefined4 *)(pplVar18 + 0x15);
  *(undefined4 *)(pplVar18 + 0xf) = *(undefined4 *)((long)pplVar18 + 0x7c);
  *(int *)(pplVar18 + 0x13) = *(int *)(pplVar18 + 0x14) + 1;
  *(undefined4 *)((long)pplVar18 + 0xa4) = *(undefined4 *)(pplVar18 + 0x13);
  *(ushort *)((long)pplVar18 + 0x24) = *(ushort *)((long)pplVar18 + 0x24) | 1;
  *(undefined2 *)(pplVar18 + 2) = 3;
  *(undefined2 *)((long)pplVar18 + 0x16) = 0x96;
LAB_0011422e:
  *(int *)((long)unaff_R12 + 0x34) = *(int *)((long)unaff_R12 + 0x34) + 1;
  if (*(uint *)((long)pplVar18 + 0x94) < (uint)*(ushort *)((long)unaff_R12 + 0x2e)) {
    uVar11 = -((uint)*(ushort *)((long)unaff_R12 + 0x2e) - *(int *)((long)pplVar18 + 0x94));
    FUN_0010a875(local_230,(ulong)uVar11,(ulong)uVar11);
    *(undefined2 *)((long)unaff_R12 + 0x2e) = (short)*(undefined4 *)((long)pplVar18 + 0x94);
    bVar19 = bVar19 & 0xfe;
  }
  *(int *)((long)pplVar18 + 0x84) = *(int *)((long)unaff_R12 + 0x34) + -1;
  *(undefined4 *)((long)pplVar18 + 0x9c) = *(undefined4 *)((long)unaff_R12 + 0x34);
  goto LAB_00114ad2;
}



void FUN_00114fe8(undefined8 param_1,char *param_2,uint param_3,long param_4)

{
  char cVar1;
  long lVar2;
  uint16_t uVar3;
  long in_FS_OFFSET;
  uint local_3c;
  char *local_38;
  uint local_18;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_dooptions...");
  }
  local_3c = param_3;
  local_38 = param_2;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," tp = %p  cnt=%i",param_1,(ulong)param_3);
  }
  while ((0 < (int)local_3c && (cVar1 = *local_38, cVar1 != '\0'))) {
    if (cVar1 == '\x01') {
      local_18 = 1;
    }
    else {
      local_18 = (uint)(byte)local_38[1];
      if (local_38[1] == 0) break;
    }
    if (((cVar1 == '\x02') && (local_18 == 4)) && ((*(byte *)(param_4 + 0x3d) & 2) != 0)) {
      uVar3 = ntohs(*(uint16_t *)(local_38 + 2));
      FUN_00115314(param_1,(ulong)uVar3,(ulong)uVar3);
    }
    local_3c = local_3c - local_18;
    local_38 = local_38 + (int)local_18;
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0011514f(long param_1,uint param_2)

{
  short sVar1;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_xmit_timer...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," tp = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," rtt = %d",(ulong)param_2);
  }
  if (*(short *)(param_1 + 0xbc) == 0) {
    *(undefined2 *)(param_1 + 0xbc) = (short)(param_2 << 3);
    *(short *)(param_1 + 0xbe) = (short)param_2 * 2;
  }
  else {
    sVar1 = ((short)param_2 - (*(short *)(param_1 + 0xbc) >> 3)) + -1;
    *(short *)(param_1 + 0xbc) = sVar1 + *(short *)(param_1 + 0xbc);
    if (*(short *)(param_1 + 0xbc) < 1) {
      *(undefined2 *)(param_1 + 0xbc) = 1;
    }
    if (sVar1 < 0) {
      sVar1 = -sVar1;
    }
    *(short *)(param_1 + 0xbe) =
         (sVar1 - (*(short *)(param_1 + 0xbe) >> 2)) + *(short *)(param_1 + 0xbe);
    if (*(short *)(param_1 + 0xbe) < 1) {
      *(undefined2 *)(param_1 + 0xbe) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0xb6) = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0xbe) + (*(short *)(param_1 + 0xbc) >> 3);
  if (*(short *)(param_1 + 0x1c) < *(short *)(param_1 + 0xc0)) {
    *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_1 + 0xc0);
  }
  else {
    if (0x18 < *(short *)(param_1 + 0x1c)) {
      *(undefined2 *)(param_1 + 0x1c) = 0x18;
    }
  }
  *(undefined2 *)(param_1 + 0xca) = 0;
  return;
}



ulong FUN_00115314(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_14;
  
  lVar2 = *(long *)(param_1 + 0x70);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_mss...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," tp = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," offer = %d",(ulong)param_2);
  }
  if (*(short *)(lVar2 + 0x48) == 2) {
    iVar1 = *(int *)(*(long *)(lVar2 + 0x28) + 0x8c);
    iVar4 = *(int *)(*(long *)(lVar2 + 0x28) + 0x88);
    if (iVar1 <= iVar4) {
      iVar4 = iVar1;
    }
    local_14 = iVar4 - 0x28;
  }
  else {
    if (*(short *)(lVar2 + 0x48) == 10) {
      iVar1 = *(int *)(*(long *)(lVar2 + 0x28) + 0x8c);
      iVar4 = *(int *)(*(long *)(lVar2 + 0x28) + 0x88);
      if (iVar1 <= iVar4) {
        iVar4 = iVar1;
      }
      local_14 = iVar4 - 0x3c;
    }
    else {
      g_assertion_message_expr("Slirp","../src/tcp_input.c",0x5f1,"tcp_mss",0);
    }
  }
  if ((param_2 != 0) && (param_2 <= local_14)) {
    local_14 = param_2;
  }
  uVar5 = 0x20;
  if (0x1f < (int)local_14) {
    uVar5 = local_14;
  }
  if (((int)uVar5 < (int)(uint)*(ushort *)(param_1 + 0x20)) || (param_2 != 0)) {
    uVar3 = 0x8000;
    if ((int)uVar5 < 0x8001) {
      uVar3 = (undefined2)uVar5;
    }
    *(undefined2 *)(param_1 + 0x20) = uVar3;
  }
  *(uint *)(param_1 + 0xac) = uVar5;
  if (0x20000 % uVar5 == 0) {
    uVar6 = 0x20000;
  }
  else {
    uVar6 = (uVar5 - 0x20000 % uVar5) + 0x20000;
  }
  FUN_0010c48d(lVar2 + 0x188,(ulong)uVar6,lVar2 + 0x188);
  if (0x20000 % uVar5 == 0) {
    uVar6 = 0x20000;
  }
  else {
    uVar6 = (uVar5 - 0x20000 % uVar5) + 0x20000;
  }
  FUN_0010c48d(lVar2 + 0x168,(ulong)uVar6,lVar2 + 0x168);
  if ((DAT_003250e0 & 2) != 0) {
    g_log("Slirp",0x80," returning mss = %d",(ulong)uVar5);
  }
  return (ulong)uVar5;
}



ulong FUN_00115563(long param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  void *__dest;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint16_t __hostshort;
  undefined2 uVar14;
  uint32_t uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  uint local_ec;
  uint local_e8;
  undefined4 local_b0;
  undefined4 uStack172;
  undefined uStack167;
  undefined uStack143;
  undefined2 uStack138;
  undefined local_68;
  undefined local_67;
  uint16_t local_66;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_1 + 0x70);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_output...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," tp = %p");
  }
  if ((*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0x78)) &&
     (*(short *)(param_1 + 0x1c) <= *(short *)(param_1 + 0xb4))) {
    *(uint *)(param_1 + 0xac) = (uint)*(ushort *)(param_1 + 0x20);
  }
  do {
    uVar16 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78);
    uVar17 = *(uint *)(param_1 + 0x90);
    if (*(uint *)(param_1 + 0xac) <= *(uint *)(param_1 + 0x90)) {
      uVar17 = *(uint *)(param_1 + 0xac);
    }
    uVar21 = (ulong)uVar17;
    bVar1 = (&DAT_0011e7d8)[(int)*(short *)(param_1 + 0x10)];
    if ((DAT_003250e0 & 2) != 0) {
      g_log("Slirp",0x80," --- tcp_output flags = 0x%x");
    }
    if (*(char *)(param_1 + 0x22) != '\0') {
      if (uVar17 == 0) {
        if (uVar16 < *(uint *)(lVar4 + 0x188)) {
          bVar1 = bVar1 & 0xfe;
        }
        uVar21 = 1;
      }
      else {
        *(undefined2 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 0x1a) = 0;
      }
    }
    uVar18 = (ulong)*(uint *)(lVar4 + 0x188);
    if (uVar21 <= (ulong)*(uint *)(lVar4 + 0x188)) {
      uVar18 = uVar21;
    }
    uVar18 = uVar18 - (long)(int)uVar16;
    if (((long)uVar18 < 0) && (uVar18 = 0, uVar21 == 0)) {
      *(undefined2 *)(param_1 + 0x12) = 0;
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
    }
    bVar11 = (long)(ulong)*(ushort *)(param_1 + 0x20) < (long)uVar18;
    if (bVar11) {
      uVar18 = (ulong)*(ushort *)(param_1 + 0x20);
    }
    if ((*(int *)(param_1 + 0x7c) + (int)uVar18) -
        (*(int *)(lVar4 + 0x188) + *(int *)(param_1 + 0x78)) < 0) {
      bVar1 = bVar1 & 0xfe;
    }
    uVar17 = *(int *)(lVar4 + 0x16c) - *(int *)(lVar4 + 0x168);
    uVar21 = (ulong)uVar17;
    if ((uVar18 == 0) ||
       ((((uVar18 != (ulong)*(ushort *)(param_1 + 0x20) &&
          ((long)((long)(int)uVar16 + uVar18) < (long)(ulong)*(uint *)(lVar4 + 0x188))) &&
         (*(char *)(param_1 + 0x22) == '\0')) &&
        ((((long)uVar18 < (long)(ulong)(*(uint *)(param_1 + 0xc4) >> 1) ||
          (*(int *)(param_1 + 0xc4) == 0)) &&
         (-1 < *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0xa8))))))) {
      if (uVar17 != 0) {
        uVar19 = 0xffff << (*(byte *)(param_1 + 0xcd) & 0x3f);
        if ((long)uVar21 <= (long)uVar19) {
          uVar19 = uVar21;
        }
        lVar20 = uVar19 - (uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0x98));
        if (((int)((uint)*(ushort *)(param_1 + 0x20) * 2) <= lVar20) ||
           ((long)(ulong)*(uint *)(lVar4 + 0x16c) <= lVar20 * 2)) goto LAB_00115a4d;
      }
      if ((((*(ushort *)(param_1 + 0x24) & 1) == 0) &&
          (((bVar1 & 6) == 0 && (*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x78) < 1)))) &&
         (((bVar1 & 1) == 0 ||
          (((*(ushort *)(param_1 + 0x24) & 0x10) != 0 &&
           (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x78))))))) {
        if ((*(int *)(lVar4 + 0x188) != 0) &&
           ((*(short *)(param_1 + 0x12) == 0 && (*(short *)(param_1 + 0x14) == 0)))) {
          *(undefined2 *)(param_1 + 0x1a) = 0;
          FUN_00116346(param_1);
        }
        uVar21 = 0;
        goto LAB_00116320;
      }
    }
LAB_00115a4d:
    local_e8 = 0;
    if (((bVar1 & 2) != 0) &&
       (*(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x8c),
       (*(ushort *)(param_1 + 0x24) & 8) == 0)) {
      local_68 = 2;
      local_67 = 4;
      __hostshort = FUN_00115314(param_1,0);
      local_66 = htons(__hostshort);
      local_e8 = 4;
    }
    iVar2 = local_e8 + 0x44;
    bVar12 = (long)(ulong)(*(ushort *)(param_1 + 0x20) - local_e8) < (long)uVar18;
    if (bVar12) {
      uVar18 = (ulong)(*(ushort *)(param_1 + 0x20) - local_e8);
    }
    iVar13 = (int)uVar18;
    if (uVar18 == 0) {
      lVar20 = FUN_0010a39a(*(undefined8 *)(lVar4 + 0x28));
      if (lVar20 != 0) {
        *(long *)(lVar20 + 0x30) = *(long *)(lVar20 + 0x30) + 0x10;
        *(int *)(lVar20 + 0x38) = iVar2;
        goto LAB_00115bfd;
      }
      local_ec = 1;
LAB_00116282:
      uVar21 = (ulong)local_ec;
      goto LAB_00116320;
    }
    lVar20 = FUN_0010a39a(*(undefined8 *)(lVar4 + 0x28));
    if (lVar20 == 0) {
      local_ec = 1;
      goto LAB_00116282;
    }
    *(long *)(lVar20 + 0x30) = *(long *)(lVar20 + 0x30) + 0x10;
    *(int *)(lVar20 + 0x38) = iVar2;
    FUN_0010c938(lVar4 + 0x188,(ulong)uVar16,uVar18 & 0xffffffff);
    *(int *)(lVar20 + 0x38) = iVar13 + *(int *)(lVar20 + 0x38);
    if ((long)(int)uVar16 + uVar18 == (ulong)*(uint *)(lVar4 + 0x188)) {
      bVar1 = bVar1 | 8;
    }
LAB_00115bfd:
    __dest = *(void **)(lVar20 + 0x30);
    memcpy(__dest,(void *)(param_1 + 0x28),0x44);
    if ((((bVar1 & 1) != 0) && ((*(ushort *)(param_1 + 0x24) & 0x10) != 0)) &&
       (*(int *)(param_1 + 0x7c) == *(int *)(param_1 + 0xa8))) {
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
    }
    if (((uVar18 == 0) && ((bVar1 & 3) == 0)) && (*(short *)(param_1 + 0x14) == 0)) {
      uVar15 = htonl(*(uint32_t *)(param_1 + 0xa8));
      *(uint32_t *)((long)__dest + 0x34) = uVar15;
    }
    else {
      uVar15 = htonl(*(uint32_t *)(param_1 + 0x7c));
      *(uint32_t *)((long)__dest + 0x34) = uVar15;
    }
    uVar15 = htonl(*(uint32_t *)(param_1 + 0x98));
    *(uint32_t *)((long)__dest + 0x38) = uVar15;
    if (local_e8 != 0) {
      memcpy((void *)((long)__dest + 0x44),&local_68,(ulong)local_e8);
      *(byte *)((long)__dest + 0x3c) =
           *(byte *)((long)__dest + 0x3c) & 0xf | (byte)((int)((ulong)local_e8 + 0x14 >> 2) << 4);
    }
    *(byte *)((long)__dest + 0x3d) = bVar1;
    if ((uVar21 < *(uint *)(lVar4 + 0x16c) >> 2) && (uVar21 < *(ushort *)(param_1 + 0x20))) {
      uVar21 = 0;
    }
    if (0xffff << (*(byte *)(param_1 + 0xcd) & 0x3f) < (long)uVar21) {
      uVar21 = 0xffff << (*(byte *)(param_1 + 0xcd) & 0x3f);
    }
    if ((long)uVar21 < (long)(ulong)(uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0x98))) {
      uVar21 = (ulong)(uint)(*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0x98));
    }
    __hostshort = htons((uint16_t)((long)uVar21 >> (*(byte *)(param_1 + 0xcd) & 0x3f)));
    *(uint16_t *)((long)__dest + 0x3e) = __hostshort;
    if (*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x78) < 1) {
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x78);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x80);
      uVar15 = ntohl(*(uint32_t *)((long)__dest + 0x34));
      __hostshort = htons((short)uVar3 - (short)uVar15);
      *(uint16_t *)((long)__dest + 0x42) = __hostshort;
      *(byte *)((long)__dest + 0x3d) = *(byte *)((long)__dest + 0x3d) | 0x20;
    }
    if (local_e8 + uVar18 != 0) {
      __hostshort = htons((short)uVar18 + (short)local_e8 + 0x14);
      *(uint16_t *)((long)__dest + 0x2e) = __hostshort;
    }
    uVar14 = FUN_001044c3(lVar20,(ulong)(uint)(iVar2 + (int)(uVar18 & 0xffffffff)),
                          uVar18 & 0xffffffff);
    *(undefined2 *)((long)__dest + 0x40) = uVar14;
    if ((*(char *)(param_1 + 0x22) == '\0') || (*(short *)(param_1 + 0x14) == 0)) {
      uVar3 = *(undefined4 *)(param_1 + 0x7c);
      if ((bVar1 & 3) != 0) {
        if ((bVar1 & 2) != 0) {
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
        }
        if ((bVar1 & 1) != 0) {
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
          *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) | 0x10;
        }
      }
      *(int *)(param_1 + 0x7c) = iVar13 + *(int *)(param_1 + 0x7c);
      if ((0 < *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0xa8)) &&
         (*(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x7c),
         *(short *)(param_1 + 0xb6) == 0)) {
        *(undefined2 *)(param_1 + 0xb6) = 1;
        *(undefined4 *)(param_1 + 0xb8) = uVar3;
      }
      if (((*(short *)(param_1 + 0x12) == 0) &&
          (*(int *)(param_1 + 0x7c) != *(int *)(param_1 + 0x78))) &&
         (*(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 0x1c),
         *(short *)(param_1 + 0x14) != 0)) {
        *(undefined2 *)(param_1 + 0x14) = 0;
        *(undefined2 *)(param_1 + 0x1a) = 0;
      }
    }
    else {
      if (0 < (iVar13 + *(int *)(param_1 + 0x7c)) - *(int *)(param_1 + 0xa8)) {
        *(int *)(param_1 + 0xa8) = iVar13 + *(int *)(param_1 + 0x7c);
      }
    }
    *(int *)(lVar20 + 0x38) = iVar2 + iVar13;
    lVar5 = *(long *)(lVar20 + 0x30);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    uVar7 = *(undefined8 *)(lVar5 + 0x10);
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    uVar10 = *(undefined8 *)(lVar5 + 0x28);
    if (*(short *)(lVar4 + 0x48) == 2) {
      *(long *)(lVar20 + 0x30) = *(long *)(lVar20 + 0x30) + 0x1c;
      *(int *)(lVar20 + 0x38) = *(int *)(lVar20 + 0x38) + -0x1c;
      lVar5 = *(long *)(lVar20 + 0x30);
      *(undefined2 *)(lVar5 + 2) = (short)*(undefined4 *)(lVar20 + 0x38);
      uStack172 = (undefined4)((ulong)uVar6 >> 0x20);
      *(undefined4 *)(lVar5 + 0x10) = uStack172;
      local_b0 = (undefined4)uVar6;
      *(undefined4 *)(lVar5 + 0xc) = local_b0;
      uStack167 = (undefined)((ulong)uVar7 >> 8);
      *(undefined *)(lVar5 + 9) = uStack167;
      *(undefined *)(lVar5 + 8) = 0x40;
      *(undefined *)(lVar5 + 1) = *(undefined *)(lVar4 + 0x148);
      local_ec = FUN_00109e96(lVar4);
    }
    else {
      if (*(short *)(lVar4 + 0x48) == 10) {
        *(long *)(lVar20 + 0x30) = *(long *)(lVar20 + 0x30) + 8;
        *(int *)(lVar20 + 0x38) = *(int *)(lVar20 + 0x38) + -8;
        lVar5 = *(long *)(lVar20 + 0x30);
        uStack138 = (undefined2)((ulong)uVar10 >> 0x30);
        *(undefined2 *)(lVar5 + 4) = uStack138;
        *(undefined8 *)(lVar5 + 0x18) = uVar8;
        *(undefined8 *)(lVar5 + 0x20) = uVar9;
        *(undefined8 *)(lVar5 + 8) = uVar6;
        *(undefined8 *)(lVar5 + 0x10) = uVar7;
        uStack143 = (undefined)((ulong)uVar10 >> 8);
        *(undefined *)(lVar5 + 6) = uStack143;
        local_ec = FUN_001080bc(lVar4,lVar20,0);
      }
      else {
        g_assertion_message_expr("Slirp","../src/tcp_output.c",0x1e1,"tcp_output",0);
      }
    }
    if (local_ec != 0) goto LAB_00116282;
    if ((0 < (long)uVar21) &&
       (0 < ((int)uVar21 + *(int *)(param_1 + 0x98)) - *(int *)(param_1 + 0xa4))) {
      *(int *)(param_1 + 0xa4) = (int)uVar21 + *(int *)(param_1 + 0x98);
    }
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x98);
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xfffc;
  } while (bVar12 || bVar11);
  uVar21 = 0;
LAB_00116320:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar21;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_00116346(long param_1)

{
  *(short *)(param_1 + 0x14) =
       (short)((int)*(short *)(param_1 + 0xbe) + (int)(*(short *)(param_1 + 0xbc) >> 2) >> 1) *
       (short)*(undefined4 *)(&DAT_0011ec60 + (long)(int)*(short *)(param_1 + 0x1a) * 4);
  if (*(short *)(param_1 + 0x14) < 10) {
    *(undefined2 *)(param_1 + 0x14) = 10;
  }
  else {
    if (0x78 < *(short *)(param_1 + 0x14)) {
      *(undefined2 *)(param_1 + 0x14) = 0x78;
    }
  }
  if (*(short *)(param_1 + 0x1a) < 0xc) {
    *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + 1;
  }
  return;
}



void FUN_001163f5(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  setsockopt(param_1,6,1,&local_14,4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void FUN_0011644d(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  setsockopt(param_1,1,2,&local_14,4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8 FUN_001164a5(short *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 2) {
    uVar1 = 0x10;
  }
  else {
    if (*param_1 == 10) {
      uVar1 = 0x1c;
    }
    else {
      uVar1 = g_assertion_message_expr("Slirp","../src/socket.h",0x88,"sockaddr_size",0);
    }
  }
  return uVar1;
}



void FUN_001164fc(long param_1)

{
  *(undefined4 *)(param_1 + 0x370) = 1;
  *(long *)(param_1 + 0x1c8) = param_1 + 0x1c0;
  *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(param_1 + 0x1c8);
  *(long *)(param_1 + 0x368) = param_1 + 0x1c0;
  return;
}



void FUN_00116557(long param_1)

{
  while (*(long *)(param_1 + 0x1c0) != param_1 + 0x1c0) {
    FUN_00117098(*(undefined8 *)(*(long *)(param_1 + 0x1c0) + 0x150));
  }
  return;
}



void FUN_0011659d(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  uint16_t uVar3;
  
  lVar1 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x28) = 0;
  memset((void *)(param_1 + 0x30),0,0x24);
  *(undefined2 *)(param_1 + 0x54) = 0;
  if (*(short *)(lVar1 + 0x48) == 2) {
    *(undefined *)(param_1 + 0x39) = 6;
    uVar3 = htons(0x14);
    *(uint16_t *)(param_1 + 0x56) = uVar3;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(lVar1 + 0xcc);
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(lVar1 + 0x4a);
    *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(lVar1 + 0xca);
  }
  else {
    if (*(short *)(lVar1 + 0x48) == 10) {
      *(undefined *)(param_1 + 0x51) = 6;
      uVar3 = htons(0x14);
      *(uint16_t *)(param_1 + 0x56) = uVar3;
      uVar2 = *(undefined8 *)(lVar1 + 0x58);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(lVar1 + 0x50);
      *(undefined8 *)(param_1 + 0x38) = uVar2;
      uVar2 = *(undefined8 *)(lVar1 + 0xd8);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar1 + 0xd0);
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(lVar1 + 0x4a);
      *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(lVar1 + 0xca);
    }
    else {
      g_assertion_message_expr("Slirp","../src/tcp_subr.c",0x60,"tcp_template",0);
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0xf0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0xf | 0x50;
  *(undefined *)(param_1 + 0x65) = 0;
  *(undefined2 *)(param_1 + 0x66) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  return;
}



void FUN_00116709(long param_1,undefined8 *param_2,long param_3,uint32_t param_4,uint32_t param_5,
                 byte param_6,short param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint16_t uVar10;
  undefined2 uVar11;
  uint32_t uVar12;
  long in_FS_OFFSET;
  long local_a0;
  undefined8 *local_98;
  int local_80;
  undefined4 local_60;
  undefined4 uStack92;
  undefined uStack87;
  undefined uStack63;
  undefined2 uStack58;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_respond...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," tp = %p");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," ti = %p");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," ack = %u");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," seq = %u");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," flags = %x");
  }
  if (param_1 != 0) {
    local_80 = *(int *)(*(long *)(param_1 + 0x70) + 0x16c) -
               *(int *)(*(long *)(param_1 + 0x70) + 0x168);
  }
  if (param_3 == 0) {
    if (param_1 == 0) goto LAB_00116e9d;
    local_a0 = FUN_0010a39a();
    if (local_a0 == 0) goto LAB_00116e9d;
    *(long *)(local_a0 + 0x30) = *(long *)(local_a0 + 0x30) + 0x10;
    puVar3 = *(undefined8 **)(local_a0 + 0x30);
    uVar4 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar4;
    uVar4 = param_2[3];
    puVar3[2] = param_2[2];
    puVar3[3] = uVar4;
    uVar4 = param_2[5];
    puVar3[4] = param_2[4];
    puVar3[5] = uVar4;
    uVar4 = param_2[7];
    puVar3[6] = param_2[6];
    puVar3[7] = uVar4;
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(param_2 + 8);
    local_98 = *(undefined8 **)(local_a0 + 0x30);
    if (param_7 == 2) {
      *(undefined *)(local_98 + 2) = 0;
    }
    else {
      if (param_7 == 10) {
        *(undefined *)(local_98 + 5) = 0;
      }
      else {
        g_assertion_message_expr("Slirp","../src/tcp_subr.c",0x99,"tcp_respond",0);
      }
    }
    param_6 = 0x10;
  }
  else {
    *(undefined8 **)(param_3 + 0x30) = param_2;
    *(undefined4 *)(param_3 + 0x38) = 0x44;
    local_a0 = param_3;
    local_98 = param_2;
    if (param_7 == 2) {
      uVar1 = *(undefined4 *)((long)param_2 + 0xc);
      *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)(param_2 + 1) = uVar1;
      uVar11 = *(undefined2 *)((long)param_2 + 0x32);
      *(undefined2 *)((long)param_2 + 0x32) = *(undefined2 *)(param_2 + 6);
      *(undefined2 *)(param_2 + 6) = uVar11;
    }
    else {
      if (param_7 == 10) {
        uVar4 = param_2[4];
        uVar6 = param_2[3];
        param_2[3] = param_2[1];
        param_2[4] = param_2[2];
        param_2[1] = uVar6;
        param_2[2] = uVar4;
        uVar11 = *(undefined2 *)((long)param_2 + 0x32);
        *(undefined2 *)((long)param_2 + 0x32) = *(undefined2 *)(param_2 + 6);
        *(undefined2 *)(param_2 + 6) = uVar11;
      }
      else {
        g_assertion_message_expr("Slirp","../src/tcp_subr.c",0xb6,"tcp_respond",0);
      }
    }
  }
  uVar10 = htons(0x14);
  *(uint16_t *)((long)local_98 + 0x2e) = uVar10;
  *(undefined4 *)(local_a0 + 0x38) = 0x44;
  *local_98 = 0;
  *(undefined2 *)((long)local_98 + 0x2c) = 0;
  uVar12 = htonl(param_5);
  *(uint32_t *)((long)local_98 + 0x34) = uVar12;
  uVar12 = htonl(param_4);
  *(uint32_t *)(local_98 + 7) = uVar12;
  *(byte *)((long)local_98 + 0x3c) = *(byte *)((long)local_98 + 0x3c) & 0xf0;
  *(byte *)((long)local_98 + 0x3c) = *(byte *)((long)local_98 + 0x3c) & 0xf | 0x50;
  *(byte *)((long)local_98 + 0x3d) = param_6;
  if (param_1 == 0) {
    uVar10 = htons((uint16_t)local_80);
    *(uint16_t *)((long)local_98 + 0x3e) = uVar10;
  }
  else {
    uVar10 = htons((uint16_t)(local_80 >> (*(byte *)(param_1 + 0xcd) & 0x1f)));
    *(uint16_t *)((long)local_98 + 0x3e) = uVar10;
  }
  *(undefined2 *)((long)local_98 + 0x42) = 0;
  *(undefined2 *)(local_98 + 8) = 0;
  uVar11 = FUN_001044c3(local_a0,0x44);
  *(undefined2 *)(local_98 + 8) = uVar11;
  lVar5 = *(long *)(local_a0 + 0x30);
  uVar4 = *(undefined8 *)(lVar5 + 8);
  uVar6 = *(undefined8 *)(lVar5 + 0x10);
  uVar7 = *(undefined8 *)(lVar5 + 0x18);
  uVar8 = *(undefined8 *)(lVar5 + 0x20);
  uVar9 = *(undefined8 *)(lVar5 + 0x28);
  if (param_7 == 2) {
    *(long *)(local_a0 + 0x30) = *(long *)(local_a0 + 0x30) + 0x1c;
    *(int *)(local_a0 + 0x38) = *(int *)(local_a0 + 0x38) + -0x1c;
    lVar5 = *(long *)(local_a0 + 0x30);
    *(undefined2 *)(lVar5 + 2) = (short)*(undefined4 *)(local_a0 + 0x38);
    uStack92 = (undefined4)((ulong)uVar4 >> 0x20);
    *(undefined4 *)(lVar5 + 0x10) = uStack92;
    local_60 = (undefined4)uVar4;
    *(undefined4 *)(lVar5 + 0xc) = local_60;
    uStack87 = (undefined)((ulong)uVar6 >> 8);
    *(undefined *)(lVar5 + 9) = uStack87;
    if ((param_6 & 4) == 0) {
      *(undefined *)(lVar5 + 8) = 0x40;
    }
    else {
      *(undefined *)(lVar5 + 8) = 0xff;
    }
    FUN_00109e96(0,local_a0);
  }
  else {
    if (param_7 == 10) {
      *(long *)(local_a0 + 0x30) = *(long *)(local_a0 + 0x30) + 8;
      *(int *)(local_a0 + 0x38) = *(int *)(local_a0 + 0x38) + -8;
      lVar5 = *(long *)(local_a0 + 0x30);
      uStack58 = (undefined2)((ulong)uVar9 >> 0x30);
      *(undefined2 *)(lVar5 + 4) = uStack58;
      *(undefined8 *)(lVar5 + 0x18) = uVar7;
      *(undefined8 *)(lVar5 + 0x20) = uVar8;
      *(undefined8 *)(lVar5 + 8) = uVar4;
      *(undefined8 *)(lVar5 + 0x10) = uVar6;
      uStack63 = (undefined)((ulong)uVar9 >> 8);
      *(undefined *)(lVar5 + 6) = uStack63;
      FUN_001080bc(0,local_a0,0);
    }
    else {
      g_assertion_message_expr("Slirp","../src/tcp_subr.c",0xf5,"tcp_respond",0);
    }
  }
LAB_00116e9d:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8 * FUN_00116ebd(long param_1)

{
  undefined2 uVar1;
  undefined8 *__s;
  int iVar2;
  
  __s = (undefined8 *)malloc(0xe0);
  if (__s == (undefined8 *)0x0) {
    __s = (undefined8 *)0x0;
  }
  else {
    memset(__s,0,0xe0);
    *(undefined8 **)(__s + 1) = __s;
    *__s = __s[1];
    if (*(short *)(param_1 + 0x48) == 2) {
      iVar2 = 0x28;
    }
    else {
      iVar2 = 0x3c;
    }
    iVar2 = *(int *)(*(long *)(param_1 + 0x28) + 0x88) - iVar2;
    uVar1 = (undefined2)iVar2;
    if (0x8000 < iVar2) {
      uVar1 = 0x8000;
    }
    *(undefined2 *)(__s + 4) = uVar1;
    *(undefined2 *)((long)__s + 0x24) = 0;
    __s[0xe] = param_1;
    *(undefined2 *)((long)__s + 0xbc) = 0;
    *(undefined2 *)((long)__s + 0xbe) = 0x18;
    *(undefined2 *)(__s + 0x18) = 2;
    *(undefined2 *)((long)__s + 0x1c) = 0xc;
    if (*(short *)((long)__s + 0x1c) < 2) {
      *(undefined2 *)((long)__s + 0x1c) = 2;
    }
    else {
      if (0x18 < *(short *)((long)__s + 0x1c)) {
        *(undefined2 *)((long)__s + 0x1c) = 0x18;
      }
    }
    *(undefined4 *)((long)__s + 0xac) = 0x3fffc000;
    *(undefined4 *)(__s + 0x16) = 0x3fffc000;
    *(undefined2 *)(__s + 2) = 0;
    *(undefined8 **)(param_1 + 0x150) = __s;
  }
  return __s;
}



void FUN_00116fc0(long param_1)

{
  uint *puVar1;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_drop...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," tp = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    puVar1 = (uint *)__errno_location();
    g_log("Slirp",0x80," errno = %d",(ulong)*puVar1);
  }
  if (2 < *(short *)(param_1 + 0x10)) {
    *(undefined2 *)(param_1 + 0x10) = 0;
    FUN_00115563(param_1);
  }
  FUN_00117098(param_1);
  return;
}



undefined8 FUN_00117098(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[0xe];
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_close...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," tp = %p",param_1);
  }
  puVar3 = (undefined8 *)*param_1;
  while (param_1 != puVar3) {
    puVar3 = (undefined8 *)*puVar3;
    uVar4 = *(undefined8 *)(puVar3[1] + 0x10);
    FUN_0010ab7f(puVar3[1]);
    FUN_0010a4f0(uVar4);
  }
  free(param_1);
  *(undefined8 *)(lVar1 + 0x150) = 0;
  if (lVar1 == *(long *)(lVar2 + 0x368)) {
    *(long *)(lVar2 + 0x368) = lVar2 + 0x1c0;
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar1 + 0x28) + 6000);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x28) + 0x1768) + 0x38))
            ((ulong)*(uint *)(lVar1 + 0x10),uVar4,(ulong)*(uint *)(lVar1 + 0x10),uVar4);
  close(*(int *)(lVar1 + 0x10));
  FUN_0010c3ab(lVar1 + 0x168);
  FUN_0010c3ab(lVar1 + 0x188);
  FUN_0010f77a(lVar1);
  return 0;
}



void FUN_00117227(long param_1)

{
  long local_10;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_sockclosed...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," tp = %p",param_1);
  }
  if (param_1 != 0) {
    local_10 = param_1;
    switch(*(undefined2 *)(param_1 + 0x10)) {
    case 0:
    case 1:
    case 2:
      *(undefined2 *)(param_1 + 0x10) = 0;
      local_10 = FUN_00117098(param_1);
      break;
    case 3:
    case 4:
      *(undefined2 *)(param_1 + 0x10) = 6;
      break;
    case 5:
      *(undefined2 *)(param_1 + 0x10) = 8;
    }
    FUN_00115563(local_10);
  }
  return;
}



ulong FUN_00117310(long param_1,ushort param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  socklen_t __len;
  ulong uVar4;
  long in_FS_OFFSET;
  undefined4 local_a4;
  uint local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_fconnect...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  uVar2 = FUN_0011c25e((ulong)param_2,1,0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  local_a0 = *(uint *)(param_1 + 0x10);
  if (-1 < (int)local_a0) {
    local_9c = *(int *)(param_1 + 0x10);
    FUN_0011c142();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 6000);
    (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x1768) + 0x30))
              ((ulong)*(uint *)(param_1 + 0x10),uVar1,(ulong)*(uint *)(param_1 + 0x10),uVar1);
    FUN_0011644d();
    local_a4 = 1;
    setsockopt(local_9c,1,10,&local_a4,4);
    local_a4 = 1;
    setsockopt(local_9c,6,1,&local_a4,4);
    local_98 = *(undefined8 *)(param_1 + 0x48);
    local_90 = *(undefined8 *)(param_1 + 0x50);
    local_88 = *(undefined8 *)(param_1 + 0x58);
    local_80 = *(undefined8 *)(param_1 + 0x60);
    local_78 = *(undefined8 *)(param_1 + 0x68);
    local_70 = *(undefined8 *)(param_1 + 0x70);
    local_68 = *(undefined8 *)(param_1 + 0x78);
    local_60 = *(undefined8 *)(param_1 + 0x80);
    local_58 = *(undefined8 *)(param_1 + 0x88);
    local_50 = *(undefined8 *)(param_1 + 0x90);
    local_48 = *(undefined8 *)(param_1 + 0x98);
    local_40 = *(undefined8 *)(param_1 + 0xa0);
    local_38 = *(undefined8 *)(param_1 + 0xa8);
    local_30 = *(undefined8 *)(param_1 + 0xb0);
    local_20 = *(undefined8 *)(param_1 + 0xc0);
    local_28 = *(undefined8 *)(param_1 + 0xb8);
    if ((DAT_003250e0 & 1) != 0) {
      g_log("Slirp",0x80," connect()ing...");
    }
    iVar3 = FUN_00111cd0(param_1,&local_98,&local_98);
    if (iVar3 < 0) {
      uVar4 = 0xffffffff;
      goto LAB_001175ea;
    }
    __len = FUN_001164a5();
    local_a0 = connect(local_9c,(sockaddr *)&local_98,__len);
    FUN_00111aba(param_1);
  }
  uVar4 = (ulong)local_a0;
LAB_001175ea:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return uVar4;
}



void FUN_00117600(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined uVar3;
  int iVar4;
  long in_FS_OFFSET;
  socklen_t local_cc;
  undefined4 local_c8;
  uint local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = *(long *)(param_1 + 0x28);
  local_cc = 0x80;
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_connect...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," inso = %p",param_1);
  }
  local_c0 = param_1;
  if ((*(uint *)(param_1 + 0x14c) & 0x200) == 0) {
    local_c0 = FUN_0010f694(local_b8);
    iVar4 = FUN_00117b83(local_c0);
    if (iVar4 < 0) {
      g_free(local_c0);
      goto LAB_00117b65;
    }
    uVar2 = *(undefined8 *)(param_1 + 0xd0);
    *(undefined8 *)(local_c0 + 200) = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(local_c0 + 0xd0) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(local_c0 + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
    *(undefined8 *)(local_c0 + 0xe0) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(local_c0 + 0xe8) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(local_c0 + 0xf0) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(local_c0 + 0xf8) = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(local_c0 + 0x100) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(local_c0 + 0x108) = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(local_c0 + 0x110) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(local_c0 + 0x118) = *(undefined8 *)(param_1 + 0x118);
    *(undefined8 *)(local_c0 + 0x120) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(local_c0 + 0x128) = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(local_c0 + 0x130) = uVar2;
    uVar2 = *(undefined8 *)(param_1 + 0x140);
    *(undefined8 *)(local_c0 + 0x138) = *(undefined8 *)(param_1 + 0x138);
    *(undefined8 *)(local_c0 + 0x140) = uVar2;
    *(undefined2 *)(local_c0 + 0x48) = *(undefined2 *)(param_1 + 0x48);
  }
  FUN_00115314(*(undefined8 *)(local_c0 + 0x150),0);
  local_c4 = accept(*(int *)(param_1 + 0x10),(sockaddr *)&local_a8,&local_cc);
  if ((int)local_c4 < 0) {
    FUN_00117098(*(undefined8 *)(local_c0 + 0x150));
  }
  else {
    FUN_0011c142();
    uVar2 = *(undefined8 *)(*(long *)(local_c0 + 0x28) + 6000);
    (**(code **)(*(long *)(*(long *)(local_c0 + 0x28) + 0x1768) + 0x30))
              ((ulong)*(uint *)(local_c0 + 0x10),uVar2,(ulong)*(uint *)(local_c0 + 0x10),uVar2);
    FUN_0011644d();
    local_c8 = 1;
    setsockopt(local_c4,1,10,&local_c8,4);
    FUN_001163f5((ulong)local_c4);
    *(undefined8 *)(local_c0 + 0x48) = local_a8;
    *(undefined8 *)(local_c0 + 0x50) = local_a0;
    *(undefined8 *)(local_c0 + 0x58) = local_98;
    *(undefined8 *)(local_c0 + 0x60) = local_90;
    *(undefined8 *)(local_c0 + 0x68) = local_88;
    *(undefined8 *)(local_c0 + 0x70) = local_80;
    *(undefined8 *)(local_c0 + 0x78) = local_78;
    *(undefined8 *)(local_c0 + 0x80) = local_70;
    *(undefined8 *)(local_c0 + 0x88) = local_68;
    *(undefined8 *)(local_c0 + 0x90) = local_60;
    *(undefined8 *)(local_c0 + 0x98) = local_58;
    *(undefined8 *)(local_c0 + 0xa0) = local_50;
    *(undefined8 *)(local_c0 + 0xa8) = local_48;
    *(undefined8 *)(local_c0 + 0xb0) = local_40;
    *(undefined8 *)(local_c0 + 0xb8) = local_38;
    *(undefined8 *)(local_c0 + 0xc0) = local_30;
    FUN_00111fe2();
    if ((*(uint *)(param_1 + 0x14c) & 0x200) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(local_c0 + 0x28) + 6000);
      (**(code **)(*(long *)(*(long *)(local_c0 + 0x28) + 0x1768) + 0x38))
                ((ulong)*(uint *)(local_c0 + 0x10),uVar2,(ulong)*(uint *)(local_c0 + 0x10),uVar2);
      close(*(int *)(local_c0 + 0x10));
      *(undefined4 *)(local_c0 + 0x14c) = 1;
    }
    *(uint *)(local_c0 + 0x10) = local_c4;
    uVar1 = *(uint *)(local_c0 + 0x14c);
    *(uint *)(local_c0 + 0x14c) =
         uVar1 & 0xffff0000 | (uint)CONCAT11((char)((ulong)uVar1 >> 8),(char)uVar1) | 0x2000;
    uVar3 = FUN_00117be5(local_c0);
    *(undefined *)(local_c0 + 0x148) = uVar3;
    local_b0 = *(long *)(local_c0 + 0x150);
    FUN_0011659d(local_b0);
    *(undefined2 *)(local_b0 + 0x10) = 2;
    *(undefined2 *)(local_b0 + 0x16) = 0x96;
    *(undefined4 *)(local_b0 + 0x8c) = *(undefined4 *)(local_b8 + 0x370);
    *(int *)(local_b8 + 0x370) = *(int *)(local_b8 + 0x370) + 64000;
    *(undefined4 *)(local_b0 + 0x80) = *(undefined4 *)(local_b0 + 0x8c);
    *(undefined4 *)(local_b0 + 0xa8) = *(undefined4 *)(local_b0 + 0x80);
    *(undefined4 *)(local_b0 + 0x7c) = *(undefined4 *)(local_b0 + 0xa8);
    *(undefined4 *)(local_b0 + 0x78) = *(undefined4 *)(local_b0 + 0x7c);
    FUN_00115563(local_b0);
  }
LAB_00117b65:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



undefined8 FUN_00117b83(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_00116ebd(param_1);
  *(undefined8 *)(param_1 + 0x150) = uVar2;
  if (*(long *)(param_1 + 0x150) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x28) + 0x1c0;
    FUN_0010ab4c(param_1,lVar1,lVar1);
    uVar2 = 0;
  }
  return uVar2;
}



ulong FUN_00117be5(long param_1)

{
  uint16_t uVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if ((&DAT_0011e984)[(long)local_c * 6] == '\0') {
      return 0;
    }
    if (((*(short *)(&DAT_0011e982 + (long)local_c * 6) != 0) &&
        (uVar1 = ntohs(*(uint16_t *)(param_1 + 0x4a)),
        uVar1 == *(uint16_t *)(&DAT_0011e982 + (long)local_c * 6))) ||
       ((*(short *)(&DAT_0011e980 + (long)local_c * 6) != 0 &&
        (uVar1 = ntohs(*(uint16_t *)(param_1 + 0xca)),
        uVar1 == *(uint16_t *)(&DAT_0011e980 + (long)local_c * 6))))) break;
    local_c = local_c + 1;
  }
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x1760) != '\0') {
    *(undefined *)(param_1 + 0x149) = (&DAT_0011e985)[(long)local_c * 6];
  }
  return (ulong)(byte)(&DAT_0011e984)[(long)local_c * 6];
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_00117d52(long param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  int iVar5;
  uint32_t uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  size_t __maxlen;
  long in_FS_OFFSET;
  undefined8 uVar10;
  uint16_t local_182;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint32_t local_168;
  socklen_t local_164;
  int local_160;
  int local_15c;
  byte *local_158;
  undefined8 *local_150;
  long local_148;
  undefined *local_140;
  undefined local_138 [2];
  ushort local_136;
  byte local_128 [264];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_148 = *(long *)(param_1 + 0x28);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_emu...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p");
  }
  switch(*(undefined *)(param_1 + 0x149)) {
  default:
    *(undefined *)(param_1 + 0x149) = 0;
    break;
  case 2:
    uVar2 = *(int *)(param_2 + 0x38) + 1;
    FUN_0010a70b(param_2,(ulong)uVar2,(ulong)uVar2);
    *(undefined *)((long)*(int *)(param_2 + 0x38) + *(long *)(param_2 + 0x30)) = 0;
    uVar10 = 0x118241;
    local_158 = (byte *)strstr(*(char **)(param_2 + 0x30),"ORT");
    if (local_158 == (byte *)0x0) {
      uVar10 = 0x1184f1;
      local_158 = (byte *)strstr(*(char **)(param_2 + 0x30),"27 Entering");
      if ((local_158 != (byte *)0x0) &&
         (local_15c = __isoc99_sscanf(local_158,&DAT_0011ea50,&local_180,&local_17c,&local_178,
                                      &local_174,&local_170,&local_16c,local_128,uVar10),
         5 < local_15c)) {
        local_168 = htonl(local_174 | local_180 << 0x18 | local_17c << 0x10 | local_178 << 8);
        uVar3 = htons((ushort)local_16c | (ushort)(local_170 << 8));
        local_164 = (uint)uVar3;
        lVar8 = FUN_001116c0(local_148,0,0);
        if (lVar8 != 0) {
          uVar3 = ntohs(*(uint16_t *)(lVar8 + 0x4a));
          local_170 = (uint)(uVar3 >> 8);
          local_16c = (uint)uVar3 & 0xff;
          local_168 = ntohl(*(uint32_t *)(lVar8 + 0x4c));
          local_180 = local_168 >> 0x18;
          local_17c = local_168 >> 0x10 & 0xff;
          local_178 = local_168 >> 8 & 0xff;
          local_174 = local_168 & 0xff;
          *(int *)(param_2 + 0x38) = (int)local_158 - (int)*(undefined8 *)(param_2 + 0x30);
          if (local_15c == 7) {
            pbVar7 = local_128;
          }
          else {
            pbVar7 = &DAT_0011ea28;
          }
          iVar5 = snprintf((char *)local_158,
                           (long)(*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x38)),
                           "27 Entering Passive Mode (%d,%d,%d,%d,%d,%d)\r\n%s",(ulong)local_180,
                           (ulong)local_17c,(ulong)local_178,(ulong)local_174,(ulong)local_170,
                           (ulong)local_16c,pbVar7);
          *(int *)(param_2 + 0x38) = iVar5 + *(int *)(param_2 + 0x38);
        }
      }
    }
    else {
      local_15c = __isoc99_sscanf(local_158,&DAT_0011ea08,&local_180,&local_17c,&local_178,
                                  &local_174,&local_170,&local_16c,local_128,uVar10);
      if (5 < local_15c) {
        local_168 = htonl(local_174 | local_180 << 0x18 | local_17c << 0x10 | local_178 << 8);
        uVar3 = htons((ushort)local_16c | (ushort)(local_170 << 8));
        local_164 = (uint)uVar3;
        lVar8 = FUN_001116c0(local_148,0,0);
        if (lVar8 != 0) {
          uVar3 = ntohs(*(uint16_t *)(lVar8 + 0x4a));
          local_170 = (uint)(uVar3 >> 8);
          local_16c = (uint)uVar3 & 0xff;
          local_168 = ntohl(*(uint32_t *)(lVar8 + 0x4c));
          local_180 = local_168 >> 0x18;
          local_17c = local_168 >> 0x10 & 0xff;
          local_178 = local_168 >> 8 & 0xff;
          local_174 = local_168 & 0xff;
          *(int *)(param_2 + 0x38) = (int)local_158 - (int)*(undefined8 *)(param_2 + 0x30);
          if (local_15c == 7) {
            pbVar7 = local_128;
          }
          else {
            pbVar7 = &DAT_0011ea28;
          }
          iVar5 = snprintf((char *)local_158,
                           (long)(*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x38)),
                           "ORT %d,%d,%d,%d,%d,%d\r\n%s",(ulong)local_180,(ulong)local_17c,
                           (ulong)local_178,(ulong)local_174,(ulong)local_170,(ulong)local_16c,
                           pbVar7);
          *(int *)(param_2 + 0x38) = iVar5 + *(int *)(param_2 + 0x38);
        }
      }
    }
    break;
  case 3:
    *(undefined *)(param_1 + 0x149) = 0;
    local_164 = 0;
    local_160 = 0;
    while (local_160 < *(int *)(param_2 + 0x38) + -1) {
      if ((*(char *)((long)local_160 + *(long *)(param_2 + 0x30)) < '0') ||
         ('9' < *(char *)((long)local_160 + *(long *)(param_2 + 0x30)))) goto LAB_0011908d;
      local_164 = (local_164 * 10 + (int)*(char *)((long)local_160 + *(long *)(param_2 + 0x30))) -
                  0x30;
      local_160 = local_160 + 1;
    }
    if ((*(char *)((long)*(int *)(param_2 + 0x38) + -1 + *(long *)(param_2 + 0x30)) == '\0') &&
       (local_164 != 0)) {
      uVar3 = htons((uint16_t)local_164);
      lVar8 = FUN_001116c0(local_148,0,0,(ulong)*(uint *)(param_1 + 0xcc),(ulong)uVar3,0x200);
      if (lVar8 != 0) {
        uVar3 = ntohs(*(uint16_t *)(lVar8 + 0x4a));
        iVar5 = snprintf(*(char **)(param_2 + 0x30),(long)*(int *)(param_2 + 0x24),"%d",(ulong)uVar3
                        );
        *(int *)(param_2 + 0x38) = iVar5 + 1;
      }
    }
    break;
  case 4:
    uVar2 = *(int *)(param_2 + 0x38) + 1;
    FUN_0010a70b(param_2,(ulong)uVar2,(ulong)uVar2);
    *(undefined *)((long)*(int *)(param_2 + 0x38) + *(long *)(param_2 + 0x30)) = 0;
    local_158 = (byte *)strstr(*(char **)(param_2 + 0x30),"DCC");
    if (local_158 != (byte *)0x0) {
      iVar5 = __isoc99_sscanf(local_158,"DCC CHAT %256s %u %u",local_128,&local_168,&local_164);
      if (iVar5 == 3) {
        uVar3 = htons((uint16_t)local_164);
        uVar6 = htonl(local_168);
        lVar8 = FUN_001116c0(local_148,0,0,(ulong)uVar6,(ulong)uVar3,0x200);
        if (lVar8 != 0) {
          *(int *)(param_2 + 0x38) = (int)local_158 - (int)*(undefined8 *)(param_2 + 0x30);
          uVar3 = ntohs(*(uint16_t *)(lVar8 + 0x4a));
          uVar6 = ntohl(*(uint32_t *)(lVar8 + 0x4c));
          iVar5 = snprintf((char *)local_158,(long)*(int *)(param_2 + 0x24),
                           "DCC CHAT chat %lu %u%c\n",(ulong)uVar6,(ulong)uVar3,1);
          *(int *)(param_2 + 0x38) = iVar5 + *(int *)(param_2 + 0x38);
        }
      }
      else {
        iVar5 = __isoc99_sscanf(local_158,"DCC SEND %256s %u %u %u",local_128,&local_168,&local_164,
                                &local_180);
        if (iVar5 == 4) {
          uVar3 = htons((uint16_t)local_164);
          uVar6 = htonl(local_168);
          lVar8 = FUN_001116c0(local_148,0,0,(ulong)uVar6,(ulong)uVar3,0x200);
          if (lVar8 != 0) {
            *(int *)(param_2 + 0x38) = (int)local_158 - (int)*(undefined8 *)(param_2 + 0x30);
            uVar9 = (ulong)local_180;
            uVar3 = ntohs(*(uint16_t *)(lVar8 + 0x4a));
            uVar6 = ntohl(*(uint32_t *)(lVar8 + 0x4c));
            iVar5 = snprintf((char *)local_158,(long)*(int *)(param_2 + 0x24),
                             "DCC SEND %s %lu %u %u%c\n",local_128,(ulong)uVar6,(ulong)uVar3,uVar9,1
                            );
            *(int *)(param_2 + 0x38) = iVar5 + *(int *)(param_2 + 0x38);
          }
        }
        else {
          iVar5 = __isoc99_sscanf(local_158,"DCC MOVE %256s %u %u %u",local_128,&local_168,
                                  &local_164,&local_180);
          if (iVar5 == 4) {
            uVar3 = htons((uint16_t)local_164);
            uVar6 = htonl(local_168);
            lVar8 = FUN_001116c0(local_148,0,0,(ulong)uVar6,(ulong)uVar3,0x200);
            if (lVar8 != 0) {
              *(int *)(param_2 + 0x38) = (int)local_158 - (int)*(undefined8 *)(param_2 + 0x30);
              uVar9 = (ulong)local_180;
              uVar3 = ntohs(*(uint16_t *)(lVar8 + 0x4a));
              uVar6 = ntohl(*(uint32_t *)(lVar8 + 0x4c));
              iVar5 = snprintf((char *)local_158,(long)*(int *)(param_2 + 0x24),
                               "DCC MOVE %s %lu %u %u%c\n",local_128,(ulong)uVar6,(ulong)uVar3,uVar9
                               ,1);
              *(int *)(param_2 + 0x38) = iVar5 + *(int *)(param_2 + 0x38);
            }
          }
        }
      }
    }
    break;
  case 5:
    local_158 = *(byte **)(param_2 + 0x30);
LAB_0011904c:
    if (local_158 < (byte *)((long)*(int *)(param_2 + 0x38) + *(long *)(param_2 + 0x30))) {
      local_128[0] = 0x50;
      local_128[1] = 0x4e;
      local_128[2] = 0x41;
      local_128[3] = 0;
      switch(DAT_003250d4) {
      case 0:
      case 2:
      case 3:
        pbVar7 = local_158 + 1;
        bVar1 = *local_158;
        local_158 = pbVar7;
        if (bVar1 != local_128[DAT_003250d4]) {
          DAT_003250d4 = 0;
          goto LAB_0011904c;
        }
        break;
      case 1:
        if (*local_158 == 0x50) {
          DAT_003250d4 = 1;
          local_158 = local_158 + 1;
        }
        else {
          pbVar7 = local_158 + 1;
          bVar1 = *local_158;
          local_158 = pbVar7;
          if (bVar1 == local_128[DAT_003250d4]) break;
          DAT_003250d4 = 0;
        }
        goto LAB_0011904c;
      case 4:
        local_158 = local_158 + 1;
        break;
      case 5:
        if (local_158[1] == 2) {
          local_158 = local_158 + 8;
        }
        else {
          local_158 = local_158 + 4;
        }
        break;
      case 6:
        local_164 = (uint)local_158[1] + (uint)*local_158 * 0x100;
        if (local_164 < 0x1b3a) {
          local_164 = local_164 + 0x100;
        }
        if ((0x1b39 < local_164) && (local_164 < 0x1c03)) {
          local_182 = 0x1b3a;
          goto LAB_00118fc5;
        }
        goto LAB_0011908d;
      default:
        DAT_003250d4 = 0;
      }
      DAT_003250d4 = DAT_003250d4 + 1;
      goto LAB_0011904c;
    }
    break;
  case 7:
    local_164 = 0x10;
    local_140 = (undefined *)
                g_strstr_len(*(undefined8 *)(param_2 + 0x30),(long)*(int *)(param_2 + 0x38),
                             &DAT_0011e9d3,(long)*(int *)(param_2 + 0x38));
    if (local_140 != (undefined *)0x0) {
      *local_140 = 0;
      iVar5 = __isoc99_sscanf(*(undefined8 *)(param_2 + 0x30),"%u%*[ ,]%u",&local_180,&local_17c);
      if (iVar5 == 2) {
        uVar3 = htons((uint16_t)local_180);
        local_180 = (uint)uVar3;
        uVar3 = htons((uint16_t)local_17c);
        local_17c = (uint)uVar3;
        local_150 = *(undefined8 **)(local_148 + 0x1c0);
        while (local_150 != (undefined8 *)(local_148 + 0x1c0)) {
          if ((((*(int *)((long)local_150 + 0xcc) == *(int *)(param_1 + 0xcc)) &&
               ((uint)*(ushort *)((long)local_150 + 0xca) == local_17c)) &&
              (*(int *)((long)local_150 + 0x4c) == *(int *)(param_1 + 0x4c))) &&
             ((uint)*(ushort *)((long)local_150 + 0x4a) == local_180)) {
            iVar5 = getsockname(*(int *)(local_150 + 2),(sockaddr *)local_138,&local_164);
            if (iVar5 == 0) {
              local_17c = (uint)local_136;
            }
            break;
          }
          local_150 = (undefined8 *)*local_150;
        }
        uVar3 = ntohs((uint16_t)local_180);
        local_180 = (uint)uVar3;
        uVar3 = ntohs((uint16_t)local_17c);
        local_17c = (uint)uVar3;
        iVar5 = snprintf((char *)0x0,0,"%d,%d\r\n",(ulong)local_180,(ulong)local_17c);
        FUN_0010a70b(param_2,(ulong)(iVar5 + 1U),(ulong)(iVar5 + 1U));
        if ((*(uint *)(param_2 + 0x20) & 1) == 0) {
          __maxlen = ((long)*(int *)(param_2 + 0x24) + param_2 + 0x60) - *(long *)(param_2 + 0x30);
        }
        else {
          __maxlen = ((long)*(int *)(param_2 + 0x24) + *(long *)(param_2 + 0x58)) -
                     *(long *)(param_2 + 0x30);
        }
        iVar5 = snprintf(*(char **)(param_2 + 0x30),__maxlen,"%d,%d\r\n",(ulong)local_180,
                         (ulong)local_17c);
        *(int *)(param_2 + 0x38) = iVar5;
        if ((*(uint *)(param_2 + 0x20) & 1) == 0) {
          lVar8 = ((long)*(int *)(param_2 + 0x24) + param_2 + 0x60) - *(long *)(param_2 + 0x30);
        }
        else {
          lVar8 = ((long)*(int *)(param_2 + 0x24) + *(long *)(param_2 + 0x58)) -
                  *(long *)(param_2 + 0x30);
        }
        if (lVar8 <= *(int *)(param_2 + 0x38)) {
                    // WARNING: Subroutine does not return
          __assert_fail("m->m_len < M_ROOM(m)","../src/tcp_subr.c",0x28f,"tcp_emu");
        }
      }
      else {
        *local_140 = 0xd;
      }
    }
  }
LAB_0011908d:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
LAB_00118fc5:
  if (0x1b9e < local_182) goto LAB_00118fd3;
  uVar3 = htons((uint16_t)local_164);
  uVar2 = *(uint *)(param_1 + 0xcc);
  uVar4 = htons(local_182);
  lVar8 = FUN_0011b58f(local_148,0,(ulong)uVar4,(ulong)uVar2,(ulong)uVar3,0x200);
  if (lVar8 != 0) goto LAB_00118fd3;
  local_182 = local_182 + 1;
  goto LAB_00118fc5;
LAB_00118fd3:
  if (local_182 == 0x1b9f) {
    local_182 = 0;
  }
  *local_158 = (byte)(local_182 >> 8);
  local_158[1] = (byte)local_182;
  DAT_003250d4 = 0;
  local_158 = local_158 + 1;
  goto LAB_0011908d;
}



undefined8 FUN_001190aa(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long *local_20;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_ctl...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if (*(int *)(param_1 + 0x4c) != *(int *)(lVar1 + 0x14)) {
    local_20 = *(long **)(lVar1 + 0x80);
    while (local_20 != (long *)0x0) {
      if ((*(uint *)((long)local_20 + 0x14) == (uint)*(ushort *)(param_1 + 0x4a)) &&
         (*(int *)(param_1 + 0x4c) == *(int *)(local_20 + 2))) {
        if (*local_20 != 0) {
          *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
          *(long **)(param_1 + 0x18) = local_20;
          return 1;
        }
        if ((DAT_003250e0 & 2) != 0) {
          g_log("Slirp",0x80," executing %s",local_20[3]);
        }
        uVar3 = FUN_0010af8e(param_1,local_20[3],local_20[3]);
        return uVar3;
      }
      local_20 = (long *)local_20[4];
    }
  }
  uVar2 = snprintf(*(char **)(param_1 + 400),
                   (ulong)*(uint *)(param_1 + 0x18c) -
                   (*(long *)(param_1 + 400) - *(long *)(param_1 + 0x1a0)),
                   "Error: No application configured.\r\n");
  *(uint *)(param_1 + 0x188) = uVar2;
  *(long *)(param_1 + 400) = *(long *)(param_1 + 400) + (ulong)*(uint *)(param_1 + 0x188);
  return 0;
}



void FUN_00119297(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_fasttimo...");
  }
  puVar2 = *(undefined8 **)(param_1 + 0x1c0);
  if (puVar2 != (undefined8 *)0x0) {
    while (puVar2 != (undefined8 *)(param_1 + 0x1c0)) {
      lVar1 = puVar2[0x2a];
      if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 0x24) & 2) != 0)) {
        *(ushort *)(lVar1 + 0x24) = *(ushort *)(lVar1 + 0x24) & 0xfffd;
        *(ushort *)(lVar1 + 0x24) = *(ushort *)(lVar1 + 0x24) | 1;
        FUN_00115563(lVar1);
      }
      puVar2 = (undefined8 *)*puVar2;
    }
  }
  return;
}



void FUN_0011933b(long param_1)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_slowtimo...");
  }
  plVar2 = *(long **)(param_1 + 0x1c0);
  if (*(long **)(param_1 + 0x1c0) != (long *)0x0) {
LAB_00119447:
    plVar4 = plVar2;
    if (plVar4 != (long *)(param_1 + 0x1c0)) {
      plVar2 = (long *)*plVar4;
      lVar1 = plVar4[0x2a];
      if (lVar1 != 0) {
        uVar3 = 0;
        while ((int)uVar3 < 4) {
          if (((*(short *)(lVar1 + 2 + ((long)(int)uVar3 + 8) * 2) != 0) &&
              (*(short *)(lVar1 + 2 + ((long)(int)uVar3 + 8) * 2) =
                    *(short *)(lVar1 + 2 + ((long)(int)uVar3 + 8) * 2) + -1,
              *(short *)(lVar1 + 2 + ((long)(int)uVar3 + 8) * 2) == 0)) &&
             (FUN_001194c9(lVar1,(ulong)uVar3), plVar4 != (long *)plVar2[1])) goto LAB_00119447;
          uVar3 = uVar3 + 1;
        }
        *(short *)(lVar1 + 0xb4) = *(short *)(lVar1 + 0xb4) + 1;
        if (*(short *)(lVar1 + 0xb6) != 0) {
          *(short *)(lVar1 + 0xb6) = *(short *)(lVar1 + 0xb6) + 1;
        }
      }
      goto LAB_00119447;
    }
    *(int *)(param_1 + 0x370) = *(int *)(param_1 + 0x370) + 64000;
    *(int *)(param_1 + 0x374) = *(int *)(param_1 + 0x374) + 1;
  }
  return;
}



void FUN_0011949b(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while (iVar1 < 4) {
    *(undefined2 *)(param_1 + 2 + ((long)iVar1 + 8) * 2) = 0;
    iVar1 = iVar1 + 1;
  }
  return;
}



long FUN_001194c9(long param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint local_1c;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"tcp_timers...");
  }
  if (param_2 == 1) {
    FUN_00116346(param_1);
    *(undefined *)(param_1 + 0x22) = 1;
    FUN_00115563(param_1);
    *(undefined *)(param_1 + 0x22) = 0;
  }
  else {
    if (param_2 < 2) {
      if (param_2 == 0) {
        *(short *)(param_1 + 0x1a) = *(short *)(param_1 + 0x1a) + 1;
        if (0xc < *(short *)(param_1 + 0x1a)) {
          *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) >> 1;
          if (*(ushort *)(param_1 + 0x20) < 0x20) {
            *(undefined2 *)(param_1 + 0x1a) = 0xc;
            uVar3 = FUN_00116fc0(param_1,(ulong)(uint)(int)*(short *)(param_1 + 0xca));
            return uVar3;
          }
          *(undefined2 *)(param_1 + 0x1a) = 6;
        }
        *(short *)(param_1 + 0x1c) =
             ((*(short *)(param_1 + 0xbc) >> 3) + *(short *)(param_1 + 0xbe)) *
             (short)*(undefined4 *)(&DAT_0011ec60 + (long)(int)*(short *)(param_1 + 0x1a) * 4);
        if (*(short *)(param_1 + 0x1c) < *(short *)(param_1 + 0xc0)) {
          *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_1 + 0xc0);
        }
        else {
          if (0x18 < *(short *)(param_1 + 0x1c)) {
            *(undefined2 *)(param_1 + 0x1c) = 0x18;
          }
        }
        *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_1 + 0x1c);
        if (3 < *(short *)(param_1 + 0x1a)) {
          *(short *)(param_1 + 0xbe) =
               (*(short *)(param_1 + 0xbc) >> 3) + *(short *)(param_1 + 0xbe);
          *(undefined2 *)(param_1 + 0xbc) = 0;
        }
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x78);
        *(undefined2 *)(param_1 + 0xb6) = 0;
        uVar2 = *(uint *)(param_1 + 0x90);
        if (*(uint *)(param_1 + 0xac) <= *(uint *)(param_1 + 0x90)) {
          uVar2 = *(uint *)(param_1 + 0xac);
        }
        uVar1 = *(ushort *)(param_1 + 0x20);
        local_1c = (uVar2 >> 1) / (uint)uVar1;
        if (local_1c < 2) {
          local_1c = 2;
        }
        *(uint *)(param_1 + 0xac) = (uint)*(ushort *)(param_1 + 0x20);
        *(int *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0x20) * local_1c;
        *(undefined2 *)(param_1 + 0x1e) = 0;
        FUN_00115563(param_1,(ulong)uVar1,(ulong)(uVar2 >> 1) % (ulong)uVar1);
      }
    }
    else {
      if (param_2 == 2) {
        if (3 < *(short *)(param_1 + 0x10)) {
          if ((DAT_003250ec == '\0') || (5 < *(short *)(param_1 + 0x10))) {
            *(undefined2 *)(param_1 + 0x16) = 0x3840;
            return param_1;
          }
          if (*(short *)(param_1 + 0xb4) < 0x3cf0) {
            FUN_00116709(param_1,param_1 + 0x28,0,(ulong)*(uint *)(param_1 + 0x98),
                         (ulong)(*(int *)(param_1 + 0x78) - 1),0,
                         (ulong)*(ushort *)(*(long *)(param_1 + 0x70) + 0x48));
            *(undefined2 *)(param_1 + 0x16) = 0x96;
            return param_1;
          }
        }
        param_1 = FUN_00116fc0(param_1,0);
      }
      else {
        if (param_2 == 3) {
          if ((*(short *)(param_1 + 0x10) == 10) || (0x4b0 < *(short *)(param_1 + 0xb4))) {
            param_1 = FUN_00117098(param_1);
          }
          else {
            *(undefined2 *)(param_1 + 0x18) = 0x96;
          }
        }
      }
    }
  }
  return param_1;
}



ulong FUN_00119784(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
}



undefined8 FUN_001197b3(short *param_1,short *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*param_1 == *param_2) {
    if (*param_1 == 2) {
      if ((*(int *)(param_1 + 2) == *(int *)(param_2 + 2)) && (param_1[1] == param_2[1])) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      if (*param_1 == 10) {
        cVar1 = FUN_00119784(param_1 + 4,param_2 + 4,param_2 + 4);
        if ((cVar1 == '\0') || (param_1[1] != param_2[1])) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = g_assertion_message_expr("Slirp","../src/socket.h",0x7a,"sockaddr_equal",0);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined8 FUN_001198b7(short *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 2) {
    uVar1 = 0x10;
  }
  else {
    if (*param_1 == 10) {
      uVar1 = 0x1c;
    }
    else {
      uVar1 = g_assertion_message_expr("Slirp","../src/socket.h",0x88,"sockaddr_size",0);
    }
  }
  return uVar1;
}



ulong FUN_0011990e(long *param_1)

{
  return (ulong)(*param_1 != 0);
}



void FUN_00119928(long param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = DAT_003250e8;
  return;
}



void FUN_00119948(undefined8 *param_1)

{
  if (-1 < *(int *)(param_1 + 2)) {
    close(*(int *)(param_1 + 2));
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
  }
  g_free(param_1[1]);
  *param_1 = 0;
  return;
}



ulong FUN_00119996(long param_1,void *param_2,undefined2 *param_3)

{
  int iVar1;
  uint uVar2;
  long *__s;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x13 < (int)local_14) {
      return 0xffffffff;
    }
    __s = (long *)(param_1 + (long)(int)local_14 * 0xa8 + 0x6e0);
    iVar1 = FUN_0011990e(__s);
    if (iVar1 == 0) break;
    if (5000 < DAT_003250e8 - *(int *)(__s + 0x14)) {
      FUN_00119948(__s);
      break;
    }
    local_14 = local_14 + 1;
  }
  memset(__s,0,0xa8);
  uVar2 = FUN_001198b7(param_2);
  memcpy(__s + 3,param_2,(ulong)uVar2);
  *(undefined4 *)(__s + 2) = 0xffffffff;
  *(undefined2 *)((long)__s + 0x14) = 0x200;
  *(undefined2 *)(__s + 0x13) = *param_3;
  *__s = param_1;
  FUN_00119928(__s);
  return (ulong)local_14;
}



ulong FUN_00119aac(long param_1,undefined8 param_2,short *param_3)

{
  int iVar1;
  long lVar2;
  uint local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x13 < (int)local_14) {
      return 0xffffffff;
    }
    lVar2 = param_1 + (long)(int)local_14 * 0xa8 + 0x6e0;
    iVar1 = FUN_0011990e(lVar2);
    if (((iVar1 != 0) && (iVar1 = FUN_001197b3(lVar2 + 0x18,param_2,lVar2 + 0x18), iVar1 != 0)) &&
       (*(short *)(lVar2 + 0x98) == *param_3)) break;
    local_14 = local_14 + 1;
  }
  return (ulong)local_14;
}



ulong FUN_00119b4e(long param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  ulong uVar2;
  ssize_t sVar3;
  uint local_c;
  
  local_c = 0;
  if (*(int *)(param_1 + 0x10) < 0) {
    iVar1 = open64(*(char **)(param_1 + 8),0);
    *(int *)(param_1 + 0x10) = iVar1;
  }
  if (*(int *)(param_1 + 0x10) < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (param_4 != 0) {
      lseek64(*(int *)(param_1 + 0x10),(ulong)((uint)*(ushort *)(param_1 + 0x14) * param_2),0);
      sVar3 = read(*(int *)(param_1 + 0x10),param_3,(long)param_4);
      local_c = (uint)sVar3;
    }
    uVar2 = (ulong)local_c;
  }
  return uVar2;
}



undefined8 FUN_00119bfb(long param_1,long param_2)

{
  undefined8 uVar1;
  
  memset(*(void **)(param_2 + 0x30),0,(long)*(int *)(param_2 + 0x24));
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 0x10;
  if (*(short *)(param_1 + 0x18) == 10) {
    *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 0x28;
  }
  else {
    *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 0x14;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + 8;
  return uVar1;
}



void FUN_00119c9c(long *param_1,undefined8 param_2,long param_3)

{
  long in_FS_OFFSET;
  undefined local_58 [2];
  undefined2 local_56;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_38 [2];
  undefined2 local_36;
  undefined4 local_34;
  long local_30;
  long local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(short *)(param_1 + 3) == 10) {
    local_48 = *(undefined8 *)(*param_1 + 0x34);
    local_50 = *(undefined8 *)(*param_1 + 0x2c);
    local_56 = *(undefined2 *)(param_3 + 2);
    local_28 = param_1[5];
    local_30 = param_1[4];
    local_36 = *(undefined2 *)(param_1 + 0x13);
    FUN_0011bf57(0,param_2,local_58,local_38);
  }
  else {
    local_54 = *(undefined4 *)(*param_1 + 0x14);
    local_56 = *(undefined2 *)(param_3 + 2);
    local_34 = *(undefined4 *)((long)param_1 + 0x1c);
    local_36 = *(undefined2 *)(param_1 + 0x13);
    FUN_0011b11d(0,param_2,local_58,local_38,0x10);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



undefined8
FUN_00119d9e(undefined8 *param_1,long param_2,long param_3,int param_4,undefined8 param_5)

{
  uint16_t uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int local_20;
  int local_1c;
  
  local_1c = 0;
  lVar3 = FUN_0010a39a(*param_1);
  if (lVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = FUN_00119bfb(param_1,lVar3,lVar3);
    uVar1 = htons(6);
    *(uint16_t *)(lVar5 + 8) = uVar1;
    local_20 = 0;
    while (local_20 < param_4) {
      iVar2 = snprintf((char *)(lVar5 + 10 + (long)local_1c),0x596 - (long)local_1c,"%s",
                       *(undefined8 *)(param_2 + (long)local_20 * 8));
      local_1c = local_1c + iVar2 + 1;
      iVar2 = snprintf((char *)(lVar5 + 10 + (long)local_1c),0x596 - (long)local_1c,"%u",
                       (ulong)*(uint *)(param_3 + (long)local_20 * 4));
      local_1c = local_1c + iVar2 + 1;
      local_20 = local_20 + 1;
    }
    *(int *)(lVar3 + 0x38) = local_1c + 2;
    FUN_00119c9c(param_1,lVar3,param_5,lVar3);
    uVar4 = 0;
  }
  return uVar4;
}



void FUN_00119efe(undefined8 *param_1,uint16_t param_2,char *param_3,undefined8 param_4)

{
  uint16_t uVar1;
  long lVar2;
  long lVar3;
  size_t sVar4;
  
  if ((DAT_003250e0 & 8) != 0) {
    g_log("Slirp",0x80,"tftp error msg: %s",param_3);
  }
  lVar2 = FUN_0010a39a(*param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_00119bfb(param_1,lVar2,lVar2);
    uVar1 = htons(5);
    *(uint16_t *)(lVar3 + 8) = uVar1;
    uVar1 = htons(param_2);
    *(uint16_t *)(lVar3 + 10) = uVar1;
    FUN_0011c2cc(lVar3 + 0xc,0x594,param_3,lVar3 + 0xc);
    sVar4 = strlen(param_3);
    *(int *)(lVar2 + 0x38) = (int)sVar4 + 5;
    FUN_00119c9c(param_1,lVar2,param_4,lVar2);
  }
  FUN_00119948(param_1);
  return;
}



void FUN_0011a007(undefined8 *param_1,undefined8 param_2)

{
  uint16_t uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = FUN_0010a39a(*param_1);
  if (lVar3 != 0) {
    lVar4 = FUN_00119bfb(param_1,lVar3,lVar3);
    uVar1 = htons(3);
    *(uint16_t *)(lVar4 + 8) = uVar1;
    uVar1 = htons((short)*(undefined4 *)((long)param_1 + 0x9c) + 1);
    *(uint16_t *)(lVar4 + 10) = uVar1;
    uVar2 = FUN_00119b4e(param_1,(ulong)*(uint *)((long)param_1 + 0x9c),lVar4 + 0xc,
                         (ulong)*(ushort *)((long)param_1 + 0x14));
    if ((int)uVar2 < 0) {
      FUN_0010a4f0(lVar3);
      FUN_00119efe(param_1,1,"File not found",lVar4);
    }
    else {
      *(int *)(lVar3 + 0x38) = uVar2 + 4;
      FUN_00119c9c(param_1,lVar3,param_2,lVar3);
      if (uVar2 == (uint)*(ushort *)((long)param_1 + 0x14)) {
        FUN_00119928(param_1);
      }
      else {
        FUN_00119948(param_1);
      }
      *(int *)((long)param_1 + 0x9c) = *(int *)((long)param_1 + 0x9c) + 1;
    }
  }
  return;
}



void FUN_0011a151(long param_1,undefined8 param_2,long param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  size_t __n;
  undefined8 uVar5;
  char *__s1;
  char *__s;
  long in_FS_OFFSET;
  int local_fc;
  uint local_f8;
  uint local_f4;
  uint local_c0 [2];
  undefined8 local_b8 [2];
  undefined local_a8 [48];
  undefined8 local_78;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = 0;
  iVar2 = FUN_00119aac(param_1,param_2,param_3,param_2);
  if (-1 < iVar2) {
    FUN_00119948(param_1 + (long)iVar2 * 0xa8 + 0x6e0);
  }
  iVar2 = FUN_00119996(param_1,param_2,param_3,param_2);
  if (-1 < iVar2) {
    lVar4 = param_1 + (long)iVar2 * 0xa8 + 0x6e0;
    if (*(long *)(param_1 + 0x6d8) == 0) {
      FUN_00119efe(lVar4,2,"Access violation",param_3);
    }
    else {
      local_fc = 0;
      iVar3 = param_4 + -10;
      __n = strlen(*(char **)(param_1 + 0x6d8));
      uVar5 = g_malloc(__n + 0x202);
      *(undefined8 *)(lVar4 + 8) = uVar5;
      memcpy(*(void **)(lVar4 + 8),*(void **)(param_1 + 0x6d8),__n);
      *(undefined *)(__n + *(long *)(lVar4 + 8)) = 0x2f;
      __s1 = (char *)(*(long *)(lVar4 + 8) + __n + 1);
      iVar2 = local_fc;
      do {
        local_fc = iVar2;
        if ((0x1ff < local_fc) || (iVar3 <= local_fc)) {
          FUN_00119efe(lVar4,2,"Access violation",param_3);
          goto LAB_0011a89e;
        }
        __s1[local_fc] = *(char *)(param_3 + 10 + (long)local_fc);
        iVar2 = local_fc + 1;
      } while (__s1[local_fc] != '\0');
      if ((DAT_003250e0 & 8) != 0) {
        g_log("Slirp",0x80,"tftp rrq file: %s",__s1);
      }
      if (iVar3 - iVar2 < 6) {
        FUN_00119efe(lVar4,2,"Access violation",param_3);
      }
      else {
        iVar2 = strcasecmp((char *)(param_3 + iVar2 + 10),"octet");
        if (iVar2 == 0) {
          local_fc = local_fc + 7;
          iVar2 = strncmp(__s1,"../",3);
          if (((iVar2 == 0) || (__n = strlen(__s1), __s1[__n - 1] == '/')) ||
             (__s1 = strstr(__s1,"/../"), __s1 != (char *)0x0)) {
            FUN_00119efe(lVar4,2,"Access violation",param_3);
          }
          else {
            iVar2 = FUN_00119b4e(lVar4,0,0,0);
            if (iVar2 < 0) {
              FUN_00119efe(lVar4,1,"File not found",param_3);
            }
            else {
              if (*(char *)(param_3 + 10 + (long)(param_4 + -0xb)) == '\0') {
                while ((local_fc < iVar3 && (local_f8 < 2))) {
                  __s1 = (char *)(param_3 + local_fc + 10);
                  __n = strlen(__s1);
                  iVar2 = local_fc + (int)__n + 1;
                  if (iVar3 <= iVar2) {
                    FUN_00119efe(lVar4,2,"Access violation",param_3);
                    goto LAB_0011a89e;
                  }
                  __s = (char *)(param_3 + iVar2 + 10);
                  __n = strlen(__s);
                  local_fc = iVar2 + (int)__n + 1;
                  iVar2 = strcasecmp(__s1,"tsize");
                  if (iVar2 == 0) {
                    local_f4 = atoi(__s);
                    if (local_f4 == 0) {
                      iVar2 = FUN_0011d0d0(*(undefined8 *)(lVar4 + 8),local_a8,local_a8);
                      if (iVar2 != 0) {
                        FUN_00119efe(lVar4,1,"File not found",param_3);
                        goto LAB_0011a89e;
                      }
                      local_f4 = (uint)local_78;
                    }
                    local_b8[(int)local_f8] = 0x11ed3a;
                    local_c0[(int)local_f8] = local_f4;
                    local_f8 = local_f8 + 1;
                  }
                  else {
                    iVar2 = strcasecmp(__s1,"blksize");
                    if ((iVar2 == 0) && (iVar2 = atoi(__s), 0 < iVar2)) {
                      uVar1 = 0x594;
                      if (iVar2 < 0x595) {
                        uVar1 = (undefined2)iVar2;
                      }
                      *(undefined2 *)(lVar4 + 0x14) = uVar1;
                      local_b8[(int)local_f8] = 0x11ed40;
                      local_c0[(int)local_f8] = (uint)*(ushort *)(lVar4 + 0x14);
                      local_f8 = local_f8 + 1;
                    }
                  }
                }
                if ((int)local_f8 < 1) {
                  *(undefined4 *)(lVar4 + 0x9c) = 0;
                  FUN_0011a007(lVar4,param_3,param_3);
                }
                else {
                  if (2 < local_f8) {
                    // WARNING: Subroutine does not return
                    __assert_fail("nb_options <= G_N_ELEMENTS(option_name)","../src/tftp.c",0x198,
                                  "tftp_handle_rrq");
                  }
                  FUN_00119d9e(lVar4,local_b8,local_c0,(ulong)local_f8,param_3);
                }
              }
              else {
                FUN_00119efe(lVar4,2,"Access violation",param_3);
              }
            }
          }
        }
        else {
          FUN_00119efe(lVar4,4,"Unsupported transfer mode",param_3);
        }
      }
    }
  }
LAB_0011a89e:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0011a8b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00119aac(param_1,param_2,param_3,param_2);
  if (-1 < iVar1) {
    param_1 = (long)iVar1 * 0xa8 + 0x6e0 + param_1;
    FUN_0011a007(param_1,param_3,param_1);
  }
  return;
}



void FUN_0011a928(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00119aac(param_1,param_2,param_3,param_2);
  if (-1 < iVar1) {
    FUN_00119948(param_1 + (long)iVar1 * 0xa8 + 0x6e0);
  }
  return;
}



void FUN_0011a995(undefined8 param_1,long param_2)

{
  long lVar1;
  uint16_t uVar2;
  
  lVar1 = *(long *)(param_2 + 0x30);
  uVar2 = ntohs(*(uint16_t *)(lVar1 + 8));
  if (uVar2 == 4) {
    FUN_0011a8b4(*(undefined8 *)(param_2 + 0x40),param_1,lVar1,(ulong)*(uint *)(param_2 + 0x38));
  }
  else {
    if (uVar2 == 5) {
      FUN_0011a928(*(undefined8 *)(param_2 + 0x40),param_1,lVar1,(ulong)*(uint *)(param_2 + 0x38));
    }
    else {
      if (uVar2 == 1) {
        FUN_0011a151(*(undefined8 *)(param_2 + 0x40),param_1,lVar1,(ulong)*(uint *)(param_2 + 0x38))
        ;
      }
    }
  }
  return;
}



void FUN_0011aa3c(int param_1)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 1;
  setsockopt(param_1,1,2,&local_14,4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return;
}



void FUN_0011aa94(long param_1)

{
  *(long *)(param_1 + 0x380) = param_1 + 0x378;
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x380);
  *(long *)(param_1 + 0x520) = param_1 + 0x378;
  return;
}



void FUN_0011aae1(long param_1)

{
  while (*(long *)(param_1 + 0x378) != param_1 + 0x378) {
    FUN_0011b3c9(*(undefined8 *)(param_1 + 0x378));
  }
  return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_0011ab20(long param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  long lVar3;
  ulong *__s;
  ulong uVar4;
  undefined uVar5;
  uint16_t uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  char *pcVar11;
  uint *puVar12;
  ulong uVar13;
  long in_FS_OFFSET;
  uint local_fc;
  long local_f0;
  undefined8 local_d8;
  undefined2 local_b8;
  undefined2 uStack182;
  undefined4 uStack180;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(param_1 + 0x40);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"udp_input...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," iphlen = %d",(ulong)param_2);
  }
  local_fc = param_2;
  if (0x14 < param_2) {
    FUN_00109e0e(param_1,0);
    local_fc = 0x14;
  }
  __s = *(ulong **)(param_1 + 0x30);
  puVar1 = (undefined2 *)((long)__s + (long)(int)local_fc);
  uVar6 = ntohs(puVar1[2]);
  uVar7 = (uint)uVar6;
  if (uVar7 == (uint)*(ushort *)((long)__s + 2)) {
LAB_0011ac7e:
    uVar13 = *__s;
    uVar4 = __s[1];
    uVar2 = *(undefined4 *)(__s + 2);
    local_d8._2_2_ = (short)(uVar13 >> 0x10);
    local_d8._0_4_ = CONCAT22(local_d8._2_2_ + (short)local_fc,(short)uVar13);
    local_d8 = uVar13 & 0xffffffff00000000 | (ulong)(uint)local_d8;
    if (puVar1[3] != 0) {
      memset(__s,0,8);
      *(undefined *)(__s + 1) = 0;
      *(undefined2 *)((long)__s + 10) = puVar1[2];
      iVar8 = FUN_001044c3(param_1,(ulong)(uVar7 + 0x14));
      if (iVar8 != 0) goto LAB_0011b0f3;
    }
    local_b8 = 2;
    uStack180 = *(undefined4 *)((long)__s + 0xc);
    uStack182 = *puVar1;
    uVar6 = ntohs(puVar1[1]);
    if ((uVar6 == 0x43) &&
       ((*(int *)(__s + 2) == *(int *)(lVar3 + 0x14) || (*(int *)(__s + 2) == -1)))) {
      FUN_00104485(param_1);
    }
    else {
      uVar6 = ntohs(puVar1[1]);
      if ((uVar6 == 0x45) && (*(int *)(__s + 2) == *(int *)(lVar3 + 0x14))) {
        *(long *)(param_1 + 0x30) = (long)(int)local_fc + *(long *)(param_1 + 0x30);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - local_fc;
        FUN_0011a995(&local_b8,param_1);
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - (long)(int)local_fc;
        *(int *)(param_1 + 0x38) = local_fc + *(int *)(param_1 + 0x38);
      }
      else {
        if (*(int *)(lVar3 + 0x7c) == 0) {
          local_f0 = FUN_0010f5a7(lVar3 + 0x520,lVar3 + 0x378,&local_b8,0);
          if (local_f0 == 0) {
            local_f0 = FUN_0010f694(lVar3);
            iVar8 = FUN_0011b34d(local_f0,2);
            if (iVar8 == -1) {
              if ((DAT_003250e0 & 2) != 0) {
                piVar10 = __errno_location();
                pcVar11 = strerror(*piVar10);
                puVar12 = (uint *)__errno_location();
                g_log("Slirp",0x80," udp_attach errno = %d-%s",(ulong)*puVar12,pcVar11);
              }
              FUN_0010f77a(local_f0);
              goto LAB_0011b0f3;
            }
            *(undefined2 *)(local_f0 + 200) = 2;
            *(undefined4 *)(local_f0 + 0xcc) = *(undefined4 *)((long)__s + 0xc);
            *(undefined2 *)(local_f0 + 0xca) = *puVar1;
            uVar5 = FUN_0011b422(local_f0);
            *(undefined *)(local_f0 + 0x148) = uVar5;
            if (*(char *)(local_f0 + 0x148) == '\0') {
              *(undefined *)(local_f0 + 0x148) = *(undefined *)((long)__s + 1);
            }
          }
          *(undefined2 *)(local_f0 + 0x48) = 2;
          *(undefined4 *)(local_f0 + 0x4c) = *(undefined4 *)(__s + 2);
          *(undefined2 *)(local_f0 + 0x4a) = puVar1[1];
          iVar8 = local_fc + 8;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - iVar8;
          *(long *)(param_1 + 0x30) = (long)iVar8 + *(long *)(param_1 + 0x30);
          iVar9 = FUN_00111417(local_f0,param_1);
          if (iVar9 != -1) {
            FUN_0010a4f0(*(undefined8 *)(local_f0 + 0x30));
            *(int *)(param_1 + 0x38) = iVar8 + *(int *)(param_1 + 0x38);
            *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - (long)iVar8;
            *__s = local_d8;
            __s[1] = uVar4;
            *(undefined4 *)(__s + 2) = uVar2;
            *(long *)(local_f0 + 0x30) = param_1;
            goto LAB_0011b0fb;
          }
          *(int *)(param_1 + 0x38) = iVar8 + *(int *)(param_1 + 0x38);
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) - (long)iVar8;
          *__s = local_d8;
          __s[1] = uVar4;
          *(undefined4 *)(__s + 2) = uVar2;
          if ((DAT_003250e0 & 2) != 0) {
            piVar10 = __errno_location();
            pcVar11 = strerror(*piVar10);
            puVar12 = (uint *)__errno_location();
            g_log("Slirp",0x80,"udp tx errno = %d-%s",(ulong)*puVar12,pcVar11);
          }
          piVar10 = __errno_location();
          pcVar11 = strerror(*piVar10);
          FUN_00108b39(param_1,3,0,0,pcVar11);
        }
      }
    }
  }
  else {
    if (uVar7 <= *(ushort *)((long)__s + 2)) {
      uVar13 = (ulong)(uVar7 - *(ushort *)((long)__s + 2));
      FUN_0010a875(param_1,uVar13,uVar13);
      *(uint16_t *)((long)__s + 2) = uVar6;
      goto LAB_0011ac7e;
    }
  }
LAB_0011b0f3:
  FUN_0010a4f0(param_1);
LAB_0011b0fb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



// WARNING: Type propagation algorithm not settling

ulong FUN_0011b11d(undefined8 param_1,long param_2,long param_3,long param_4,undefined param_5)

{
  void *__s;
  uint16_t uVar1;
  undefined2 uVar2;
  uint uVar3;
  char *pcVar4;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"udp_output...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_2);
  }
  if ((DAT_003250e0 & 1) != 0) {
    pcVar4 = inet_ntoa((in_addr)((in_addr *)(param_3 + 4))->s_addr);
    g_log("Slirp",0x80," saddr = %s",pcVar4);
  }
  if ((DAT_003250e0 & 1) != 0) {
    pcVar4 = inet_ntoa((in_addr)((in_addr *)(param_4 + 4))->s_addr);
    g_log("Slirp",0x80," daddr = %s",pcVar4);
  }
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + -0x1c;
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 0x1c;
  __s = *(void **)(param_2 + 0x30);
  memset(__s,0,8);
  *(undefined *)((long)__s + 8) = 0;
  *(undefined *)((long)__s + 9) = 0x11;
  uVar1 = htons((short)*(undefined4 *)(param_2 + 0x38) - 0x14);
  *(uint16_t *)((long)__s + 10) = uVar1;
  *(undefined4 *)((long)__s + 0xc) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((long)__s + 0x10) = *(undefined4 *)(param_4 + 4);
  *(undefined2 *)((long)__s + 0x14) = *(undefined2 *)(param_3 + 2);
  *(undefined2 *)((long)__s + 0x16) = *(undefined2 *)(param_4 + 2);
  *(undefined2 *)((long)__s + 0x18) = *(undefined2 *)((long)__s + 10);
  *(undefined2 *)((long)__s + 0x1a) = 0;
  uVar2 = FUN_001044c3(param_2,(ulong)*(uint *)(param_2 + 0x38),(ulong)*(uint *)(param_2 + 0x38));
  *(undefined2 *)((long)__s + 0x1a) = uVar2;
  if (*(short *)((long)__s + 0x1a) == 0) {
    *(undefined2 *)((long)__s + 0x1a) = 0xffff;
  }
  *(undefined2 *)((long)__s + 2) = (short)*(undefined4 *)(param_2 + 0x38);
  *(undefined *)((long)__s + 8) = 0x40;
  *(undefined *)((long)__s + 1) = param_5;
  uVar3 = FUN_00109e96(param_1,param_2,param_2);
  return (ulong)uVar3;
}



ulong FUN_0011b34d(long param_1,ushort param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0011c25e((ulong)param_2,2,0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (*(int *)(param_1 + 0x10) != -1) {
    *(int *)(param_1 + 0x158) = DAT_003250e8 + 240000;
    lVar1 = *(long *)(param_1 + 0x28) + 0x378;
    FUN_0010ab4c(param_1,lVar1,lVar1);
  }
  return (ulong)*(uint *)(param_1 + 0x10);
}



void FUN_0011b3c9(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 6000);
  (**(code **)(*(long *)(*(long *)(param_1 + 0x28) + 0x1768) + 0x38))
            ((ulong)*(uint *)(param_1 + 0x10),uVar1,(ulong)*(uint *)(param_1 + 0x10),uVar1);
  close(*(int *)(param_1 + 0x10));
  FUN_0010f77a(param_1);
  return;
}



ulong FUN_0011b422(long param_1)

{
  uint16_t uVar1;
  int local_c;
  
  local_c = 0;
  while( true ) {
    if ((&DAT_0011ee3c)[(long)local_c * 6] == '\0') {
      return 0;
    }
    if (((*(short *)(&DAT_0011ee3a + (long)local_c * 6) != 0) &&
        (uVar1 = ntohs(*(uint16_t *)(param_1 + 0x4a)),
        uVar1 == *(uint16_t *)(&DAT_0011ee3a + (long)local_c * 6))) ||
       ((*(short *)(&DAT_0011ee38 + (long)local_c * 6) != 0 &&
        (uVar1 = ntohs(*(uint16_t *)(param_1 + 0xca)),
        uVar1 == *(uint16_t *)(&DAT_0011ee38 + (long)local_c * 6))))) break;
    local_c = local_c + 1;
  }
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x1760) != '\0') {
    *(undefined *)(param_1 + 0x149) = (&DAT_0011ee3d)[(long)local_c * 6];
  }
  return (ulong)(byte)(&DAT_0011ee3c)[(long)local_c * 6];
}



long FUN_0011b58f(long param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined2 param_5,uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long in_FS_OFFSET;
  socklen_t local_34;
  long local_30;
  sa_family_t local_28;
  undefined2 uStack38;
  undefined4 uStack36;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0x10;
  local_30 = FUN_0010f694(param_1);
  uVar1 = FUN_0011c25e(2,2,0);
  *(undefined4 *)(local_30 + 0x10) = uVar1;
  if (*(int *)(local_30 + 0x10) < 0) {
    FUN_0010f77a(local_30);
    lVar3 = 0;
  }
  else {
    *(int *)(local_30 + 0x158) = DAT_003250e8 + 240000;
    FUN_0010ab4c(local_30,param_1 + 0x378,param_1 + 0x378);
    local_28 = 2;
    uStack38 = param_3;
    uStack36 = param_2;
    iVar2 = bind(*(int *)(local_30 + 0x10),(sockaddr *)&local_28,local_34);
    if (iVar2 < 0) {
      FUN_0011b3c9(local_30);
      lVar3 = 0;
    }
    else {
      FUN_0011aa3c();
      getsockname(*(int *)(local_30 + 0x10),(sockaddr *)&local_28,&local_34);
      *(undefined8 *)(local_30 + 0x48) = CONCAT44(uStack36,CONCAT22(uStack38,local_28));
      *(undefined8 *)(local_30 + 0x50) = local_20;
      FUN_00111fe2(local_30);
      *(undefined2 *)(local_30 + 200) = 2;
      *(undefined2 *)(local_30 + 0xca) = param_5;
      *(undefined4 *)(local_30 + 0xcc) = param_4;
      if (param_6 != 0x200) {
        *(undefined4 *)(local_30 + 0x158) = 0;
      }
      *(uint *)(local_30 + 0x14c) = *(uint *)(local_30 + 0x14c) & 0xf000;
      *(uint *)(local_30 + 0x14c) = param_6 | 4 | *(uint *)(local_30 + 0x14c);
      lVar3 = local_30;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    // WARNING: Subroutine does not return
    __stack_chk_fail();
  }
  return lVar3;
}



ulong FUN_0011b761(void *param_1,void *param_2)

{
  int iVar1;
  undefined4 extraout_var;
  
  iVar1 = memcmp(param_1,param_2,0x10);
  return CONCAT44(extraout_var,iVar1) & 0xffffffffffffff00 | (ulong)(iVar1 == 0);
}



void FUN_0011b790(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined8 uVar4;
  char cVar5;
  uint16_t __hostshort;
  uint16_t uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  uint *puVar11;
  long in_FS_OFFSET;
  long local_98;
  undefined local_78;
  undefined local_77;
  undefined local_76;
  undefined local_75;
  undefined local_74;
  undefined local_73;
  undefined local_72;
  undefined local_71;
  undefined local_70;
  undefined local_6f;
  undefined local_6e;
  undefined local_6d;
  undefined local_6c;
  undefined local_6b;
  undefined local_6a;
  undefined local_69;
  undefined2 local_68;
  undefined2 local_66;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(param_1 + 0x40);
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"udp6_input...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_1);
  }
  if (*(int *)(lVar1 + 0x7c) == 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -0x28;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 0x28;
    puVar3 = *(undefined2 **)(param_1 + 0x30);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x28;
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x28;
    iVar7 = FUN_00104820();
    if (iVar7 == 0) {
      __hostshort = ntohs(puVar3[2]);
      uVar8 = (uint)__hostshort;
      uVar6 = ntohs(*(uint16_t *)((long)puVar2 + 4));
      if (uVar8 != (uint)uVar6) {
        uVar6 = ntohs(*(uint16_t *)((long)puVar2 + 4));
        if (uVar6 < uVar8) goto LAB_0011bf2a;
        uVar6 = ntohs(*(uint16_t *)((long)puVar2 + 4));
        FUN_0010a875(param_1,(ulong)(uVar8 - uVar6),(ulong)(uVar8 - uVar6));
        __hostshort = htons(__hostshort);
        *(uint16_t *)((long)puVar2 + 4) = __hostshort;
      }
      local_48 = *puVar2;
      local_40 = puVar2[1];
      local_38 = puVar2[2];
      local_30 = puVar2[3];
      local_28 = puVar2[4];
      local_68 = 10;
      local_58 = puVar2[2];
      local_60 = puVar2[1];
      local_66 = *puVar3;
      __hostshort = ntohs(puVar3[1]);
      if (__hostshort == 0x223) {
        cVar5 = FUN_0011b761(puVar2 + 3,lVar1 + 0x2c,lVar1 + 0x2c);
        if (cVar5 == '\0') {
          local_78 = 0xff;
          local_77 = 2;
          local_76 = 0;
          local_75 = 0;
          local_74 = 0;
          local_73 = 0;
          local_72 = 0;
          local_71 = 0;
          local_70 = 0;
          local_6f = 0;
          local_6e = 0;
          local_6d = 0;
          local_6c = 0;
          local_6b = 1;
          local_6a = 0;
          local_69 = 2;
          cVar5 = FUN_0011b761(puVar2 + 3,&local_78);
          if (cVar5 == '\0') goto LAB_0011bb1e;
        }
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 0x28;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -0x28;
        FUN_00105152(&local_68,param_1,param_1);
        *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x28;
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x28;
      }
      else {
LAB_0011bb1e:
        __hostshort = ntohs(puVar3[1]);
        if ((__hostshort == 0x45) &&
           (iVar7 = memcmp(puVar2 + 3,(void *)(lVar1 + 0x2c),0x10), iVar7 == 0)) {
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 0x28;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -0x28;
          FUN_0011a995(&local_68,param_1,param_1);
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x28;
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x28;
        }
        else {
          local_98 = FUN_0010f5a7(lVar1 + 0x520,lVar1 + 0x378,&local_68,0);
          if (local_98 == 0) {
            local_98 = FUN_0010f694(lVar1);
            iVar7 = FUN_0011b34d(local_98,10);
            if (iVar7 == -1) {
              if ((DAT_003250e0 & 2) != 0) {
                piVar9 = __errno_location();
                pcVar10 = strerror(*piVar9);
                puVar11 = (uint *)__errno_location();
                g_log("Slirp",0x80," udp6_attach errno = %d-%s",(ulong)*puVar11,pcVar10);
              }
              FUN_0010f77a(local_98);
              goto LAB_0011bf2a;
            }
            *(undefined2 *)(local_98 + 200) = 10;
            uVar4 = puVar2[2];
            *(undefined8 *)(local_98 + 0xd0) = puVar2[1];
            *(undefined8 *)(local_98 + 0xd8) = uVar4;
            *(undefined2 *)(local_98 + 0xca) = *puVar3;
          }
          *(undefined2 *)(local_98 + 0x48) = 10;
          uVar4 = puVar2[4];
          *(undefined8 *)(local_98 + 0x50) = puVar2[3];
          *(undefined8 *)(local_98 + 0x58) = uVar4;
          *(undefined2 *)(local_98 + 0x4a) = puVar3[1];
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -0x30;
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 0x30;
          iVar7 = FUN_00111417(local_98,param_1,param_1);
          if (iVar7 != -1) {
            FUN_0010a4f0(*(undefined8 *)(local_98 + 0x30));
            *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x30;
            *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x30;
            *puVar2 = local_48;
            puVar2[1] = local_40;
            puVar2[2] = local_38;
            puVar2[3] = local_30;
            puVar2[4] = local_28;
            *(long *)(local_98 + 0x30) = param_1;
            goto LAB_0011bf39;
          }
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 0x30;
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + -0x30;
          *puVar2 = local_48;
          puVar2[1] = local_40;
          puVar2[2] = local_38;
          puVar2[3] = local_30;
          puVar2[4] = local_28;
          if ((DAT_003250e0 & 2) != 0) {
            piVar9 = __errno_location();
            pcVar10 = strerror(*piVar9);
            puVar11 = (uint *)__errno_location();
            g_log("Slirp",0x80,"udp tx errno = %d-%s",(ulong)*puVar11,pcVar10);
          }
          FUN_00106903(param_1,1,0);
        }
      }
    }
  }
LAB_0011bf2a:
  FUN_0010a4f0(param_1);
LAB_0011bf39:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    // WARNING: Subroutine does not return
  __stack_chk_fail();
}



void FUN_0011bf57(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined2 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint16_t uVar4;
  undefined2 uVar5;
  
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80,"udp6_output...");
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," so = %p",param_1);
  }
  if ((DAT_003250e0 & 1) != 0) {
    g_log("Slirp",0x80," m = %p",param_2);
  }
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + -8;
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 8;
  puVar1 = *(undefined2 **)(param_2 + 0x30);
  *(long *)(param_2 + 0x30) = *(long *)(param_2 + 0x30) + -0x28;
  *(int *)(param_2 + 0x38) = *(int *)(param_2 + 0x38) + 0x28;
  lVar2 = *(long *)(param_2 + 0x30);
  uVar4 = htons((short)*(undefined4 *)(param_2 + 0x38) - 0x28);
  *(uint16_t *)(lVar2 + 4) = uVar4;
  *(undefined *)(lVar2 + 6) = 0x11;
  uVar3 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *puVar1 = *(undefined2 *)(param_3 + 2);
  puVar1[1] = *(undefined2 *)(param_4 + 2);
  puVar1[2] = *(undefined2 *)(lVar2 + 4);
  puVar1[3] = 0;
  uVar5 = FUN_00104820(param_2);
  puVar1[3] = uVar5;
  if (puVar1[3] == 0) {
    puVar1[3] = 0xffff;
  }
  FUN_001080bc(param_1,param_2,0,param_2);
  return;
}



void FUN_0011c142(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(param_1,3);
  if (uVar1 == 0xffffffff) {
                    // WARNING: Subroutine does not return
    __assert_fail("f != -1","../src/util.c",0x34,"slirp_set_nonblock");
  }
  iVar2 = fcntl(param_1,4,
                (ulong)(uVar1 & 0xffff0000 | (uint)CONCAT11((char)((ulong)uVar1 >> 8),(char)uVar1) |
                       0x800));
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    __assert_fail("f != -1","../src/util.c",0x36,"slirp_set_nonblock");
  }
  return;
}



void FUN_0011c1d0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(param_1,1);
  if (uVar1 == 0xffffffff) {
                    // WARNING: Subroutine does not return
    __assert_fail("f != -1","../src/util.c",0x42,"slirp_set_cloexec");
  }
  iVar2 = fcntl(param_1,2,(ulong)(uVar1 | 1));
  if (iVar2 == -1) {
                    // WARNING: Subroutine does not return
    __assert_fail("f != -1","../src/util.c",0x44,"slirp_set_cloexec");
  }
  return;
}



ulong FUN_0011c25e(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = socket(param_1,param_2 | 0x80000,param_3);
  if (((uVar1 == 0xffffffff) && (piVar2 = __errno_location(), *piVar2 == 0x16)) &&
     (uVar1 = socket(param_1,param_2,param_3), -1 < (int)uVar1)) {
    FUN_0011c1d0((ulong)uVar1);
  }
  return (ulong)uVar1;
}



void FUN_0011c2cc(char *param_1,int param_2,char *param_3)

{
  char *local_30;
  char *local_10;
  
  local_30 = param_3;
  local_10 = param_1;
  if (0 < param_2) {
    while( true ) {
      if ((*local_30 == '\0') || (param_1 + (long)param_2 + -1 <= local_10)) break;
      *local_10 = *local_30;
      local_30 = local_30 + 1;
      local_10 = local_10 + 1;
    }
    *local_10 = '\0';
  }
  return;
}



char * slirp_version_string(void)

{
  return "4.0.0";
}



undefined8 FUN_0011c346(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_001126ba(param_1);
  if (cVar1 == '0') {
    uVar2 = 0;
  }
  else {
    g_log("Slirp",0x10,"vmstate: get_nullptr expected VMS_NULLPTR_MARKER");
    uVar2 = 0xffffffea;
  }
  return uVar2;
}



undefined8 FUN_0011c399(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    FUN_00112712(param_1,0x30);
    uVar1 = 0;
  }
  else {
    g_log("Slirp",0x10,"vmstate: put_nullptr must be called with pv == NULL");
    uVar1 = 0xffffffea;
  }
  return uVar1;
}



undefined8 FUN_0011c3f4(undefined8 param_1,undefined *param_2)

{
  undefined uVar1;
  
  uVar1 = FUN_001126ba(param_1);
  *param_2 = uVar1;
  return 0;
}



undefined8 FUN_0011c42f(undefined8 param_1,byte *param_2)

{
  FUN_00112712(param_1,(ulong)*param_2,(ulong)*param_2);
  return 0;
}



undefined8 FUN_0011c46e(undefined8 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_0011273d(param_1);
  *param_2 = uVar1;
  return 0;
}



undefined8 FUN_0011c4aa(undefined8 param_1,ushort *param_2)

{
  FUN_00112799(param_1,(ulong)*param_2,(ulong)*param_2);
  return 0;
}



undefined8 FUN_0011c4e9(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_001127d1(param_1);
  *param_2 = uVar1;
  return 0;
}



undefined8 FUN_0011c524(undefined8 param_1,uint *param_2)

{
  FUN_0011284f(param_1,(ulong)*param_2,(ulong)*param_2);
  return 0;
}



undefined8 FUN_0011c55f(undefined8 param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = FUN_001128a5(param_1);
  *param_2 = uVar1;
  return 0;
}



undefined8 FUN_0011c59b(undefined8 param_1,short *param_2)

{
  FUN_00112901(param_1,(ulong)(uint)(int)*param_2,(ulong)(uint)(int)*param_2);
  return 0;
}



undefined8 FUN_0011c5da(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00112939(param_1);
  *param_2 = uVar1;
  return 0;
}



undefined8 FUN_0011c615(undefined8 param_1,uint *param_2)

{
  FUN_001129b7(param_1,(ulong)*param_2,(ulong)*param_2);
  return 0;
}



ulong FUN_0011c650(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(param_4 + 0x48);
  uVar2 = *(uint *)(param_4 + 0x50);
  puVar3 = (undefined8 *)g_malloc(param_3);
  *puVar3 = param_2;
  uVar2 = FUN_0011cd2e(param_1,uVar1,puVar3,(ulong)uVar2);
  g_free(puVar3);
  return (ulong)uVar2;
}



ulong FUN_0011c6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined8 *)(param_4 + 0x48);
  puVar3 = (undefined8 *)g_malloc(param_3);
  *puVar3 = param_2;
  uVar2 = FUN_0011cc71(param_1,uVar1,puVar3,uVar1);
  g_free(puVar3);
  return (ulong)uVar2;
}



undefined8
FUN_0011c72e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  FUN_00112648(param_1,param_2,param_3,param_2,param_5,param_6,param_4);
  return 0;
}



undefined8
FUN_0011c764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  FUN_00112681(param_1,param_2,param_3,param_2,param_5,param_6,param_4);
  return 0;
}



ulong FUN_0011c79a(long param_1,long param_2)

{
  uint local_c;
  
  local_c = 1;
  if ((*(uint *)(param_2 + 0x40) & 4) == 0) {
    if ((*(uint *)(param_2 + 0x40) & 0x10) == 0) {
      if ((*(uint *)(param_2 + 0x40) & 0x800) == 0) {
        if ((*(uint *)(param_2 + 0x40) & 0x80) == 0) {
          if ((*(uint *)(param_2 + 0x40) & 0x400) != 0) {
            local_c = (uint)*(byte *)(param_1 + *(long *)(param_2 + 0x28));
          }
        }
        else {
          local_c = (uint)*(ushort *)(param_1 + *(long *)(param_2 + 0x28));
        }
      }
      else {
        local_c = *(uint *)(param_1 + *(long *)(param_2 + 0x28));
      }
    }
    else {
      local_c = *(uint *)(param_1 + *(long *)(param_2 + 0x28));
    }
  }
  else {
    local_c = *(uint *)(param_2 + 0x20);
  }
  if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
    local_c = *(int *)(param_2 + 0x20) * local_c;
  }
  return (ulong)local_c;
}



ulong FUN_0011c88b(long param_1,long param_2)

{
  uint local_c;
  
  local_c = (uint)*(undefined8 *)(param_2 + 0x10);
  if (((*(uint *)(param_2 + 0x40) & 0x100) != 0) &&
     (local_c = *(uint *)(param_1 + *(long *)(param_2 + 0x30)),
     (*(uint *)(param_2 + 0x40) & 0x200) != 0)) {
    local_c = (int)*(undefined8 *)(param_2 + 0x10) * local_c;
  }
  return (ulong)local_c;
}



ulong FUN_0011c8f0(undefined8 param_1,undefined8 *param_2,long param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint local_30;
  int local_2c;
  long *local_20;
  long *local_18;
  undefined8 *local_10;
  
  local_20 = (long *)param_2[5];
  if ((param_2[4] == 0) || (uVar2 = (*(code *)param_2[4])(param_3,param_2,param_3), uVar2 == 0)) {
    while (*local_20 != 0) {
      if (((local_20[0xb] == 0) ||
          (cVar1 = (*(code *)local_20[0xb])(param_3,(ulong)param_4,param_3,(ulong)param_4),
          cVar1 == '\0')) && ((local_20[0xb] != 0 || ((int)param_4 < *(int *)(local_20 + 10))))) {
        if (((*(uint *)(local_20 + 8) & 0x1000) != 0) &&
           (g_log("Slirp",0x10,"Output state validation failed: %s/%s",*param_2,*local_20),
           (*(uint *)(local_20 + 8) & 0x1000) != 0)) {
                    // WARNING: Subroutine does not return
          __assert_fail("!(field->flags & VMS_MUST_EXIST)","../src/vmstate.c",0x161,
                        "vmstate_save_state_v");
        }
      }
      else {
        local_18 = (long *)(param_3 + local_20[1]);
        iVar3 = FUN_0011c79a(param_3,local_20,local_20);
        iVar4 = FUN_0011c88b(param_3);
        if (((((*(uint *)(local_20 + 8) & 2) != 0) &&
             (local_18 = (long *)*local_18, local_18 == (long *)0x0)) && (iVar3 != 0)) &&
           (iVar4 != 0)) {
                    // WARNING: Subroutine does not return
          __assert_fail("first_elem || !n_elems || !size","../src/vmstate.c",0x140,
                        "vmstate_save_state_v");
        }
        local_2c = 0;
        while (local_2c < iVar3) {
          local_10 = (undefined8 *)((long)local_18 + (long)(iVar4 * local_2c));
          if ((*(uint *)(local_20 + 8) & 0x40) != 0) {
            if (local_10 == (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
              __assert_fail("curr_elem","../src/vmstate.c",0x147,"vmstate_save_state_v");
            }
            local_10 = (undefined8 *)*local_10;
          }
          if ((local_10 == (undefined8 *)0x0) && (iVar4 != 0)) {
            if ((*(uint *)(local_20 + 8) & 0x40) == 0) {
                    // WARNING: Subroutine does not return
              __assert_fail("field->flags & VMS_ARRAY_OF_POINTER","../src/vmstate.c",0x14c,
                            "vmstate_save_state_v");
            }
            local_30 = FUN_0011c399(param_1,0,(long)iVar4);
          }
          else {
            if ((*(uint *)(local_20 + 8) & 8) == 0) {
              if ((*(uint *)(local_20 + 8) & 0x8000) == 0) {
                local_30 = (**(code **)(local_20[7] + 0x10))(param_1,local_10,(long)iVar4);
              }
              else {
                local_30 = FUN_0011c8f0(param_1,local_20[9],local_10);
              }
            }
            else {
              local_30 = FUN_0011cc71(param_1,local_20[9],local_10);
            }
          }
          if (local_30 != 0) {
            g_log("Slirp",0x10,"Save of field %s/%s failed",*param_2,*local_20);
            return (ulong)local_30;
          }
          local_2c = local_2c + 1;
        }
      }
      local_20 = local_20 + 0xc;
    }
    uVar5 = 0;
  }
  else {
    g_log("Slirp",0x10,"pre-save failed: %s",*param_2);
    uVar5 = (ulong)uVar2;
  }
  return uVar5;
}



void FUN_0011cc71(undefined8 param_1,long param_2,undefined8 param_3)

{
  FUN_0011c8f0(param_1,param_2,param_3,(ulong)*(uint *)(param_2 + 8));
  return;
}



void FUN_0011cca2(undefined8 *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(uint *)(param_2 + 0x40) & 2) != 0) && ((*(uint *)(param_2 + 0x40) & 0x2000) != 0)) {
    iVar1 = FUN_0011c88b(param_3,param_2,param_2);
    iVar2 = FUN_0011c79a(param_3,param_2,param_2);
    if ((long)iVar2 * (long)iVar1 != 0) {
      uVar3 = g_malloc((long)iVar2 * (long)iVar1);
      *param_1 = uVar3;
    }
  }
  return;
}



ulong FUN_0011cd2e(undefined8 param_1,undefined8 *param_2,long param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  uint local_34;
  int local_30;
  long *local_20;
  long *local_18;
  undefined8 *local_10;
  
  local_20 = (long *)param_2[5];
  local_34 = 0;
  if (*(int *)(param_2 + 1) < (int)param_4) {
    g_log("Slirp",0x10,"%s: incoming version_id %d is too new for local version_id %d",*param_2,
          (ulong)param_4,(ulong)*(uint *)(param_2 + 1));
    uVar5 = 0xffffffea;
  }
  else {
    if ((param_2[2] == 0) || (uVar2 = (*(code *)param_2[2])(param_3,param_2,param_3), uVar2 == 0)) {
      while (*local_20 != 0) {
        if (((local_20[0xb] == 0) ||
            (cVar1 = (*(code *)local_20[0xb])(param_3,(ulong)param_4,param_3,(ulong)param_4),
            cVar1 == '\0')) && ((local_20[0xb] != 0 || ((int)param_4 < *(int *)(local_20 + 10))))) {
          if ((*(uint *)(local_20 + 8) & 0x1000) != 0) {
            g_log("Slirp",0x10,"Input validation failed: %s/%s",*param_2,*local_20);
            return 0xffffffff;
          }
        }
        else {
          local_18 = (long *)(param_3 + local_20[1]);
          iVar3 = FUN_0011c79a(param_3,local_20,local_20);
          iVar4 = FUN_0011c88b(param_3,local_20,local_20);
          FUN_0011cca2(local_18,local_20,param_3);
          if (((((*(uint *)(local_20 + 8) & 2) != 0) &&
               (local_18 = (long *)*local_18, local_18 == (long *)0x0)) && (iVar3 != 0)) &&
             (iVar4 != 0)) {
                    // WARNING: Subroutine does not return
            __assert_fail("first_elem || !n_elems || !size","../src/vmstate.c",0x197,
                          "slirp_vmstate_load_state");
          }
          local_30 = 0;
          while (local_30 < iVar3) {
            local_10 = (undefined8 *)((long)local_18 + (long)(iVar4 * local_30));
            if ((*(uint *)(local_20 + 8) & 0x40) != 0) {
              local_10 = (undefined8 *)*local_10;
            }
            if ((local_10 == (undefined8 *)0x0) && (iVar4 != 0)) {
              if ((*(uint *)(local_20 + 8) & 0x40) == 0) {
                    // WARNING: Subroutine does not return
                __assert_fail("field->flags & VMS_ARRAY_OF_POINTER","../src/vmstate.c",0x1a1,
                              "slirp_vmstate_load_state");
              }
              local_34 = FUN_0011c346(param_1,0,(long)iVar4);
            }
            else {
              if ((*(uint *)(local_20 + 8) & 8) == 0) {
                if ((*(uint *)(local_20 + 8) & 0x8000) == 0) {
                  local_34 = (**(code **)(local_20[7] + 8))(param_1,local_10,(long)iVar4);
                }
                else {
                  local_34 = FUN_0011cd2e(param_1,local_20[9],local_10);
                }
              }
              else {
                local_34 = FUN_0011cd2e(param_1,local_20[9],local_10);
              }
            }
            if ((int)local_34 < 0) {
              g_log("Slirp",0x10,"Failed to load %s:%s",*param_2,*local_20);
              return (ulong)local_34;
            }
            local_30 = local_30 + 1;
          }
        }
        local_20 = local_20 + 0xc;
      }
      if (param_2[3] != 0) {
        local_34 = (*(code *)param_2[3])(param_3,(ulong)param_4,param_3,(ulong)param_4);
      }
      uVar5 = (ulong)local_34;
    }
    else {
      uVar5 = (ulong)uVar2;
    }
  }
  return uVar5;
}



void FUN_0011d0d0(char *param_1,stat64 *param_2)

{
  __xstat64(1,param_1,param_2);
  return;
}



void _DT_FINI(void)

{
  return;
}


