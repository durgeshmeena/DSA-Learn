/*


A File System Consistency Checker is used by older Linux-based systems to 
find and repair inconsistencies. This method is not perfect, as it may 
still have inodes pointing to garbage data.


Inode Link Checks: FSCK counts and updates inode links. Unallocated inodes are moved to the lost and found directory.
Duplicate Pointers: FSCK checks for duplicate pointers. If two inodes point to the same data block, one can be erased.
Free Block Checks: FSCK scans inodes to check that blocks are tagged allocated or free.
Directory Checks: FSCK checks the directory format. They should start with . and ..
Superblock Checks: FSCK checks the file size against the number of blocks allocated. It looks for the questionable block and substitutes a copy.
Bad Blocks: A bad pointer points to an out-of-range memory address. FSCK then deletes the pointer.
Inode State Checks: FSCK checks inodes for corruption. Inodes that are corrupted are removed.

Log-structured file systems were created to deal with increasing disk sizes, 
inefficient reading and writing, and file systems that lacked RAID awareness.

Segment Usage Table: shows how much data is on each block.
Inode Map: This shows where each inode on the disk is located. This is written directly into the segment.
Segment Summary: This keeps track of the details for each block in the segment.
Inodes: These carry physical block pointers to files.

Solid-state storage devices have transistors instead of moving parts. 
They can retain information in the event of a power outage. 
Flash chips can store bits in a transistor. These are grouped into 
banks or planes composed of several cells.

Read, Erase, and Program are the low-level operations that are supported by flash operations.

*/